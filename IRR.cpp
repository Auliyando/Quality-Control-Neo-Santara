#include "class_ind.h"

interior::interior(){
    interior::var[0]="Pemasangan Kursi Depan";
    interior::var[1]="Pemasangan Kursi Belakang";
    interior::var[2]="Sabuk Pengaman";
    interior::var[3]="Kaca Film";
    interior::var[4]="Head Unit";
    interior::var[5]="Daskboard";
    interior::var[6]="Karpet Bawah";
    interior::element="interior";
}
void interior::set(int i,double n){
    interior::ind[i]=n;
}