#include <genlib.h>

int main(void){
	GENLIB_DEF_LOFIG("noc");
	//Pinos externos
	//Sintaxe: “nome”, IN para entrada e OUT para saída, “nome”.
	GENLIB_LOCON("ck", IN, "ck");
	GENLIB_LOCON("i5", OUT, "i5");//phy_0
	GENLIB_LOCON("i10", OUT, "i10");//phy_1
	GENLIB_LOCON("vdd", IN, "vdd");
	GENLIB_LOCON("vss", IN, "vss");
	GENLIB_LOINS("inv_x1", "inv0", "ck", "ck_b", "vdd", "vss", NULL);

	int i = 0;

	//GENLIB_NAME concatena string com inteiro e gera strig - se aplica sobretudo a NOMES com numeração sequencial
	for(i = 1; i <5;i++){
		GENLIB_LOINS("inv_x1", GENLIB_NAME("inv%d", i), GENLIB_NAME("i%d", i), GENLIB_NAME("i%d", i+1), "vdd", "vss", NULL);
	}
	for(i = 6; i<10;i++){
		GENLIB_LOINS("inv_x1", GENLIB_NAME("inv%d", i), GENLIB_NAME("i%d", i), GENLIB_NAME("i%d", i+1), "vdd", "vss", NULL);
	}

	GENLIB_LOINS("no2_x1", "nor1", "ck", "i10", "i1", "vdd", "vss", NULL);
	GENLIB_LOINS("no2_x1", "nor2", "ck_b", "i5", "i6", "vdd", "vss", NULL);
	GENLIB_SAVE_LOFIG();
return 0;

}
