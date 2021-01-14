#!/bin/bash
export MBK_IN_LO=vst
export MBK_OUT_LO=vst
make inicial
make -i criacaoSemAtraso #pra contornar um erro do genpat
make sintese_RTL
make otimizacao_booleana
make prova_formal
export MBK_IN_LO=vst
export MBK_OUT_LO=vst
make -i sintese_logica
make -i verificacao_atraso_asimut #erro bloqueante do Makefile
wait
make criacaoComAtraso
export MBK_IN_LO=vst
make otimizacao_caminho_critico
make posicionamento_layout_core
make roteamento_layout_core
#make erro_atraso -- inserir interrupção do fluxo quando erros de verificação ocorrerem
export MBK_OUT_LO=al
make pos_layout_core
export MBK_IN_LO=al
make verificacao_pos_layout_core
make mudar
export MBK_IN_LO=vst
export MBK_OUT_LO=vst
make net_list_chip
make chip
export MBK_IN_LO=al
export MBK_OUT_LO=al
make verificacao_pos_layout_chip
make Conclusao_exitosa
more historico # podem abrir também com o gedit e acrescentar aos relatorios ... FUTUROS :-)

