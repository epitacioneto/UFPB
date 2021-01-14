#include <genlib.h>

int main(void){
	int i;
	
	GENLIB_DEF_LOFIG("ff4_noc");
	GENLIB_LOCON("a[3:0]",IN,"a[3:0]");
	GENLIB_LOCON("ck",IN,"ck");
	GENLIB_LOCON("ck_m",OUT,"ck_m");
	GENLIB_LOCON("ck_e",OUT,"ck_e");
	GENLIB_LOCON("q[3:0]",OUT,"q[3:0]");
	GENLIB_LOCON("vdd",IN,"vdd");
	GENLIB_LOCON("vss",IN,"vss");
	for (i = 0; i < 4; i++){
		GENLIB_LOINS("la_1", GENLIB_NAME("la_m%d", i),
		GENLIB_ELM("a", i),
		"ck_m",
		GENLIB_ELM("q_m", i),
		"vdd",
		"vss",
		NULL);
		
		GENLIB_LOINS("la_1", GENLIB_NAME("la_e%d", i),
		GENLIB_ELM("q_m", i),
		"ck_e",
		GENLIB_ELM("q", i),
		"vdd",
		"vss",
		NULL);
	}

	GENLIB_LOINS("nocg_sxlib", "nocg","ck","ck_e","ck_m","vdd","vss",NULL);	
	GENLIB_SAVE_LOFIG();
	return 0;
}
