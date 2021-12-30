#include "class_ind.h"
#include <bits//stdc++.h>

indikator::indikator(){
    indikator::maks=700.00;
    indikator::total=0.0;
    indikator::ind[0]=0;
    indikator::ind[1]=0;
    indikator::ind[2]=0;
    indikator::ind[3]=0;
    indikator::ind[4]=0;
    indikator::ind[5]=0;
    indikator::ind[6]=0;
}
double indikator::getTotal(){
    indikator::total += indikator::ind[0];
    indikator::total += indikator::ind[1];
    indikator::total += indikator::ind[2];
    indikator::total += indikator::ind[3];
    indikator::total += indikator::ind[4];
    indikator::total += indikator::ind[5];
    indikator::total += indikator::ind[6];
    return indikator::total;
}
std::string indikator::getElement(){return indikator::element;}
std::string indikator::getVar(int i){return indikator::var[i];}
void indikator::set(int i,double a){}
