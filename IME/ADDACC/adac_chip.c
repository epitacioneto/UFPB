#include <genlib.h>
#define POWER "vdde","vdd","vsse","vss",NULL 
int main(void){
    int i;
    GENLIB_DEF_LOFIG("adac_chip");


    GENLIB_LOCON("a[3:0]",IN,"a[3:0]");
    GENLIB_LOCON("sel0",IN,"sel0");
    GENLIB_LOCON("clk",IN,"clk");
    GENLIB_LOCON("sel1",IN,"sel1");
    GENLIB_LOCON("s[3:0]",OUT,"s[3:0]");
    GENLIB_LOCON("c_4",OUT,"c_4");
    GENLIB_LOCON("vdd",IN,"vdd");
    GENLIB_LOCON("vss",IN,"vss");
    GENLIB_LOCON("vdde",IN,"vdde");
    GENLIB_LOCON("vsse",IN,"vsse");    

    GENLIB_LOINSE("adac_core","core",

    "vdd => vdd", 
    "vss => vss",
    "c_4 => c_4i",

    "a[3:0] => ai[3:0]",
    "sel0 => sel0i",
    "sel1 => sel1i",
    "clk => ckc",
    "s[3:0] => si[3:0]",

    NULL);

    for(i=0;i<4;i++){

    GENLIB_LOINS("pi_sp",GENLIB_NAME("p_a%d",i),GENLIB_ELM("a",i),GENLIB_ELM("ai",i),"cki",POWER);
    GENLIB_LOINS("po_sp",GENLIB_NAME("p_s%d",i),GENLIB_ELM("si",i),GENLIB_ELM("s",i),"cki",POWER);
}

    GENLIB_LOINS("pi_sp","p_sel0","sel0","sel0i","cki",POWER);
    GENLIB_LOINS("pi_sp","p_sel1","sel1","sel1i","cki",POWER);
    GENLIB_LOINS("po_sp","p_c_4","c_4i","c_4","cki",POWER); 
   

    GENLIB_LOINS("pvddick_sp","p_vddick0","ckc","cki","vdde","vdd","vsse","vss",NULL);
    GENLIB_LOINS("pvssick_sp","p_vssick0","ckc","cki","vdde","vdd","vsse","vss",NULL);
    GENLIB_LOINS("pvddeck_sp","p_vddeck0","ckc","cki","vdde","vdd","vsse","vss",NULL);
    GENLIB_LOINS("pvsseck_sp","p_vsseck0","ckc","cki","vdde","vdd","vsse","vss",NULL);

//    GENLIB_LOINS("pvddeck_sp","p_vddeck1","ckc","cki","vdde","vdd","vsse","vss",NULL);
//    GENLIB_LOINS("pvsseck_sp","p_vsseck1","ckc","cki","vdde","vdd","vsse","vss",NULL);


    /*GENLIB_LOINS("pvddi_sp","p_vddi","cki",POWER);
    GENLIB_LOINS("pvssi_sp","p_vssi","cki",POWER);
    GENLIB_LOINS("pvdde_sp","p_vdde","cki",POWER);
    GENLIB_LOINS("pvsse_sp","p_vsse","cki",POWER);
    */	
    GENLIB_LOINS("pck_sp","p_ck","clk","cki",POWER);
   

GENLIB_SAVE_LOFIG();
return 0;
}

