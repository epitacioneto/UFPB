#include <genlib.h>
int main(void){
GENLIB_DEF_LOFIG("ff_m_e");
//Pinos externos
//Sintaxe: “nome”, IN para entrada e OUT para saída, “nome”.
GENLIB_LOCON("a", IN, "a");
GENLIB_LOCON("ck_m", IN, "ck_m");
GENLIB_LOCON("ck_e", IN, "ck_e");
GENLIB_LOCON("q", OUT, "q");
GENLIB_LOCON("vdd", IN, "vdd");
GENLIB_LOCON("vss", IN, "vss");
//Instâncias
//Sintaxe: (“arquivo da porta lógica”, “nome da instância”, “entrada”, “saída”,
//“vdd, vss ”, NULL (fim da instância)); Instanciação explícita: pino a pino a => b
GENLIB_LOINSE("latch_d", "la_m", "a =>a", "ck =>ck_m", "q =>q_m", "vdd =>vdd",
"vss =>vss", NULL);
GENLIB_LOINSE("latch_d", "la_e", "a =>q_m", "ck =>ck_e", "q =>q", "vdd =>vdd",
"vss =>vss", NULL);
GENLIB_SAVE_LOFIG();
return 0;
}
