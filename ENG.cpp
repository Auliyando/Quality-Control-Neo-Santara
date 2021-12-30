#include "class_ind.h"

mesin::mesin(){
    mesin::var[0]="Radiator";
    mesin::var[1]="Oli Mesin";
    mesin::var[2]="Oli Gearbox";
    mesin::var[3]="Minyak Rem";
    mesin::var[4]="Pemasangan Aki";
    mesin::var[5]="ABS";
    mesin::var[6]="Sistem Pendingin";
    mesin::element = "Mesin";
}
void mesin::set(int i,double n){
    mesin::ind[i]=n;
}