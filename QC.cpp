#include<iostream>
#include<bits//stdc++.h>
#include<stdlib.h>
#include<windows.h>
#include "class_ind.h"
using namespace std;

class mobil{
public:
    bool layak;
    mobil(){
        layak = false;
    }
    void pilihElement(){
        int n;
        cout << "Pilih Bidang Yang Ingin Anda Setup\n"
             << "1. Eksterior\n"
             << "2. Interior\n"
             << "3. Mesin\n"
             << "Pilihan\t: ";
        cin >> n;
        if(n == 1){
            inputData(&ext);
        }
        else if(n == 2){
            inputData(&irr);
        }
        else if(n == 3){
            inputData(&eng);
        }
        setScore();
    }
    void display(){
        cout << "================================================================\n";
        cout << "\t\t\tDATA MOBIL\n";
        cout << "================================================================\n";
        cout << "Kode Mobil\t: " << getCode() << endl;
        cout << "================================================================\n";
        printData(&ext);
        cout << "================================================================\n";
        printData(&irr);
        cout << "================================================================\n";
        printData(&eng);
        cout << "================================================================\n";
        cout << "Skor Total\t\t: " << getScore() << endl 
             <<"Tingkat Kualitas Mobil\t: " << (getScore()/21) << "%" << endl;
        cout << "Kelayakan\t\t: ";
        if(layak == true){
            cout << "Memenuhi Standar\n";
        }
        else{
            cout << "Tidak Memenuhi Standar\n";
        }
        cout << "================================================================\nketik 1 untuk lanjut\t: ";
        string j;
        cin >> j;
        fflush(stdin);
    }
    void setCode(string n){
        kode = n;
    }
    string getCode(){
        return kode;
    }
    double getScore(){
        return tot;
    }
private:
    string kode;
    double tot;
    eksterior ext;
    interior irr;
    mesin eng;
    void printData(indikator* tampil){
        setScore();
        cout << "Data Indikator Elemen-elemen " << tampil->getElement() << endl;
        for(int i=0;i<7;i++){
            cout << tampil->getVar(i) << " : " << tampil->ind[i] << endl;
        }
    }
    void inputData(indikator* isi){
        double n;
        system("CLS");
        cout << "Silahkan isi data berikut dengan rentang nilai (0.00-100.00)\n";
        for(int i=0;i<7;i++){
            cout << isi->getVar(i) << " : ";
            cin >> n;
            isi->ind[i] = n;
        }
        setScore();
    }
    void setScore(){
        tot = 0;
        for(int i=0;i<7;i++){
            tot += ext.ind[i];
            tot += irr.ind[i];
            tot += eng.ind[i];
        }
        if (tot>=(2100-42)){
            layak = true;
        }
    }
};
int cari(int b,mobil m[]){
    int ketemu = -1;
    system("CLS");
    cout << "Pilih Mobil" << endl;
    for(int i = 0; i < b;i++){
        cout << i+1 <<". "<< m[i].getCode() <<"\t"<< m[i].getScore() << endl;
    }
    cout << "Pilihan :";
    cin >> ketemu;
    ketemu--;
    return ketemu;
}
int main(){
    mobil m[30];
    int banyakMobil=0;
    string kata;
    short int menu = 99;
    while(menu != 5){
        cout << "Pilih menu\n"
             << "============================\n"
             << "1. Produksi Mobil Baru\n"
             << "2. Lihat Daftar Mobil\n"
             << "3. Lihat Info Mobil\n"
             << "4. Setup Mobil\n"
             << "5. Keluar\n"
             << "============================\n"
             << "Pilihan\t:";
        cin >> menu;
        system("CLS");
        if (menu == 1){
            system("CLS");
            if(banyakMobil == 30){
                cout << "KAPASITAS MOBIL SUDAH PENUH \n";
            }
            else{
                cout << "Masukan Kode Mobil : ";
                cin >> kata;
                m[banyakMobil].setCode(kata);
                cout << "Berhasil Ditambahkan\nketik 1 untuk kembail ke menu : ";
                int n;
                cin >> n;
                banyakMobil++;
            }
            fflush(stdin);
            fflush(stdout);
        }
        else if (menu == 2){
            system("CLS");
            cout << "DAFTAR MOBIL DI PRODUKSI" << endl;
            for(int i = 0; i < banyakMobil;i++){
                cout << i+1 <<". "<< m[i].getCode() <<"\t"<< m[i].getScore() << endl;
            }
        }
        else if(menu == 3){
            int ketemu = -1;
            ketemu = cari(banyakMobil,m);
            system("CLS");
            if (ketemu < 0 || ketemu > (banyakMobil-1)){
                cout << "Mobil dengan kode tersebut belum ada\n";
            }
            else{
                system("CLS");
                m[ketemu].display();
                system("CLS");
                fflush(stdout);
                ketemu == -1;
            }
        }
        else if(menu == 4){
            int ketemu = -1;
            ketemu = cari(banyakMobil,m);
            system("CLS");
            if (ketemu < 0 || ketemu > (banyakMobil-1)){
                cout << "Mobil dengan kode tersebut belum ada\n";
            }
            else{
                m[ketemu].pilihElement();
            }
        }
    }
    return 0;
}
