#include <genlib.h>
int main(void){
GENLIB_DEF_LOFIG("ff_m_e_noc");
//Pinos externos
//Sintaxe: “nome”, IN para entrada e OUT para saída, “nome”.
GENLIB_LOCON("a", IN, "a");
GENLIB_LOCON("ck", IN, "ck");
GENLIB_LOCON("q", OUT, "q");
GENLIB_LOCON("phi_1", OUT, "phi_1");
GENLIB_LOCON("phi_2", OUT, "phi_2");
GENLIB_LOCON("vdd", IN, "vdd");
GENLIB_LOCON("vss", IN, "vss");
//Instâncias conectadas (netlist) - aqui descrita em "C"

GENLIB_LOINSE("noc", "nock", "ck =>ck", "i5 =>phi_1", "i10 =>phi_2", "vdd =>vdd", "vss =>vss", NULL);
GENLIB_LOINSE("ff_m_e", "ff", "a =>a", "ck_m =>phi_2", "ck_e =>phi_1", "q =>q", "vdd =>vdd", "vss =>vss", NULL);
GENLIB_SAVE_LOFIG();
return 0;
}
