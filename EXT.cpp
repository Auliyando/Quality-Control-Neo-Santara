#include "class_ind.h"
#include <bits/stdc++.h>
eksterior::eksterior(){
    eksterior::var[0]="Pemasangan Lampu Utama";
    eksterior::var[1]="Pemasangan Lampu Sein";
    eksterior::var[2]="Pemasangan Lampu Belakang";
    eksterior::var[3]="Pintu Depan";
    eksterior::var[4]="Pintu Belakang";
    eksterior::var[5]="Pemasangan Roda";
    eksterior::var[6]="Pemasangan Kap Depan";
    eksterior::element = "eksterior";
}
void eksterior::set(int i,double n){
    eksterior::ind[i]=n;
}