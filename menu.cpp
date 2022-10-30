#include<iostream>
#include "penghubung.h"

using namespace std;

void menu(){
    int pilihan;

    cout<<"\t\t\t==================="<<endl;
    cout<<"\t\t\tProgram Budget Plan"<<endl;
    cout<<"\t\t\t==================="<<endl;
    cout<<"\t\t\t1. Transaksi Pemasukan"<<endl;
    cout<<"\t\t\t2. Transaksi Pengeluaran"<<endl;
    cout<<"\t\t\t3. Selesai Transaksi"<<endl;

    cout<<"Silahkan masukkan pilihan transaksi anda (1-3) : ";
    cin>>pilihan;

    cout<<endl;

    switch(pilihan){
    case 1 :
        cout<<"Anda Memilih Transaksi Pemasukan"<<endl;
        cout<<"================================"<<endl;
        kategoriPemasukan();
        cout<<endl;
        break;

    case 2 :
        cout<<"Anda Memilih Transaksi Pengeluaran"<<endl;
        cout<<"=================================="<<endl;
        kategoriPengeluaran();
        cout<<endl;
        break;

    case 3 :
        catatan();
        total();
        break;
    }
}
