# Laura Letícia Araujo Oliveira Campos - 20170025411
#modificado com adendos ACCAvalcanti

#A label "mudar" existe para relizar a mudança do nome do arquivo "adac_core_roteado" para "adac_core"

# >> historico 2>>historico após cada comando vai concatenando todas as telas de saída para o arquivo histotico assim ficam registradas todas as mensagens e mensagens de erro que saem na tela

inicial:
	\rm *.vbe *.vst *.ap *.al *.pat *.xsc historico >> historico 2>>historico

criacaoSemAtraso: adac_sem_atraso.c
	alliance-genpat  adac_sem_atraso >> historico 2>>historico
	#more adac_sem_atraso.c
	#more adac_sem_atraso.pat
	#xpat -l 'adac_sem_atraso.pat'
	sleep 0.5

sintese_RTL: adac.vhd adac_sem_atraso.pat
	vasy -a -I vhd adac adac_vasy >> historico 2>>historico
	sleep 0.5
	asimut -b adac_vasy adac_sem_atraso  adac_vasy_res >> historico 2>>historico
	sleep 0.5


otimizacao_booleana:
	boom -l 3 -d 50% -i 100 adac_vasy adac_vasy_boom_3_50_100 >> historico 2>>historico
	sleep 0.5
	asimut -b adac_vasy_boom_3_50_100 adac_sem_atraso adac_vasy_boom_3_50_100_res >> historico 2>>historico
	sleep 0.5

prova_formal:
	proof -a -d adac_vasy adac_vasy_boom_3_50_100 >> historico 2>>historico
	sleep 0.5

sintese_logica:
	#export MBK_OUT_LO=vst no Makefile isto não surte nenhum efeito, seria necessário chamar um
	#comando sh para fazê-lo - por exemplo no arquivo com os comandos podem mudar as variáveis de
	#ambiente e só então chamar o make
	sleep 0.5
	#$(BOOG) adac_vasy_boom_3_50_100 adac_vasy_boom_3_50_100_boog_2
	boog adac_vasy_boom_3_50_100 adac_vasy_boom_3_50_100_boog_2 >> historico 2>>historico
	xsch -l 'adac_vasy_boom_3_50_100_boog_2' >> historico 2>>historico
	asimut -zd adac_vasy_boom_3_50_100_boog_2 adac_sem_atraso adac_vasy_boom_3_50_100_boog_2_res >> historico 2>>historico
	# simulação lógica (zero delay) da net list sintetizada deve dar zero erro 
	sleep 0.5

verificacao_atraso_asimut:	
	asimut  adac_vasy_boom_3_50_100_boog_2 adac_sem_atraso adac_vasy_boom_3_50_100_boog_2_res >> historico 2>>historico
	# simulação lógica com os delays calculados dos dados da biblioteca, da net list sintetizada deve
	#produzir muitos erros pois os vetores de teste não consideram o atraso de propagação das células
	# da biblioteca que deram origem à net list sintetizada 
	sleep 10
criacaoComAtraso:
	alliance-genpat adac_com_atraso >> historico 2>>historico
	more adac_com_atraso.pat # verificar a geração de vetores de ouro com respostas atrasadas aos
	#estímulos a partir da especificação original (criacaoSemAtraso)
	sleep 0.5

	asimut adac_vasy_boom_3_50_100_boog_2 adac_com_atraso_13000 >> historico 2>>historico adac_vasy_boom_3_50_100_boog_2_13000_res 
	#modifica-se o parâmetro atraso até obter simulação com atraso e zero erro. Neste exemplo 13000
	sleep 0.5

otimizacao_caminho_critico:
	loon -m 4  adac_vasy_boom_3_50_100_boog_2 adac_vasy_boom_3_50_100_boog_2_loon_4 >> historico 2>>historico
	sleep 0.5
	xsch -l 'adac_vasy_boom_3_50_100_boog_2' & xsch -l 'adac_vasy_boom_3_50_100_boog_2_loon_4'>> historico 2>>historico
	asimut  adac_vasy_boom_3_50_100_boog_2_loon_4 adac_com_atraso_13000  adac_vasy_boom_3_50_100_boog_2_loon_4_13000_res >> historico 2>>historico
	sleep 0.5

posicionamento_layout_core:
	cp adac_vasy_boom_3_50_100_boog_2_loon_4.vst adac_core.vst
	sleep 0.5
	more adac.ioc
	#$(OCP) -rows 6 -ioc adac adac_core adac_core_posicionado 
	alliance-ocp -rows 6 -ioc adac adac_core adac_core_posicionado >> historico 2>>historico
	sleep 1
	graal -l 'adac_core_posicionado' >> historico 2>>historico
	
roteamento_layout_core:
	nero -p adac_core_posicionado adac_core adac_core_roteado >> historico 2>>historico
	graal -l 'adac_core_roteado' >> historico 2>>historico
	sleep 2

pos_layout_core:
	
	echo ${MBK_OUT_LO} >> historico 2>>historico
	sleep 5
	cougar adac_core_roteado adac_core_roteado_extra >> historico 2>>historico
	#$(COUGAR2) adac_core_roteado adac_core_roteado_extra
	echo ${MBK_OUT_LO} >> historico 2>>historico

	ls -lrt *.al >> historico 2>>historico
	sleep 5
	
verificacao_pos_layout_core:
	
	sleep 0.5
	lvx al vst adac_core_roteado_extra adac_core >> historico 2>>historico
	sleep 4

#export MBK_IN_LO=al foi feito no run.sh	

	asimut adac_core_roteado_extra adac_com_atraso_13000 adac_core_roteado_extra_13000_res >> historico 2>>historico
	sleep 2
mudar:
	graal -l 'adac_core_roteado' >> historico 2>>historico # SALVAR COMO adac_core 
	#sudo nano adac_core.ap, se abrir o arquivo é para mudar a 2a linha para 
	#a que começa com H para adac_core
	sleep 0.5
	
net_list_chip:
	#more adac_chip.c
	
	# tudo feito via variável global ou no script run.sh
	#export MBK_OUT_LO=vst 
	#export MBK_OUT_LO
	echo ${MBK_IN_LO} >> historico 2>>historico
	#$(GENLIB) adac_chip
	genlib adac_chip >> historico 2>>historico
	#ls -lrt
	
	echo ${MBK_IN_LO} >> historico 2>>historico
	sleep 2
	xsch -l 'adac_chip' >> historico 2>>historico
	asimut adac_chip adac_com_atraso_13000  adac_chip_res_13000 >> historico 2>>historico
	sleep 0.5

chip:
	more adac_chip.rin 	
	ring adac_chip adac_chip >> historico 2>>historico
	graal -l 'adac_chip'& >> historico 2>>historico
	sleep 0.5

verificacao_pos_layout_chip:
	# não funiona no Makefile export MBK_OUT_LO=al aqui foi usada a variável COUGAR2
	# declarada no início
	
	sleep 2
	#$(COUGAR2) adac_chip adac_chip_ex
	cougar adac_chip adac_chip_ex >> historico 2>>historico
	sleep 0.5

	lvx al vst adac_chip_ex adac_chip >> historico 2>>historico
	
	x2y vst al adac_core adac_core >> historico 2>>historico  #porque o MBK_IN_LO=al
	sleep 0.5
	asimut adac_chip_ex adac_com_atraso_13000  adac_chip_ex_res_13000 >> historico 2>>historico
Conclusao_exitosa:
	@echo "Chip ADAC gerado com êxito desde a especificação funcional em "C" até o nível do layout simbólico, incorporando core sintetizado sobre a biblioteca standard cell SXLIB, posicionado e roteado, conectado ao anel de pads da biblioteca padlib, tudo fazendo uso do pacote acadêmico ALLIANCE, criado pela universidade PARIS VI" >> historico 2>>historico



