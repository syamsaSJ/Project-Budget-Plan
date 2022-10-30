#include<iostream>
#include "penghubung.h"

using namespace std;

int pilihanTransaksi;
int totalKeseluruhan;
int pemasukan, transaksiPemasukan, jumlahPemasukan, jumlahPemasukan1;
int pengeluaran, transaksiPengeluaran, jumlahPengeluaran, jumlahPengeluaran1, jumlahPengeluaran2;
string kategori, kategoriLainPem, kategoriLainPen;
char tambah = 'tidak';

void kategoriPemasukan(){
    cout<<"=================="<<endl;
    cout<<"Kategori Pemasukan"<<endl;
    cout<<"=================="<<endl;
    cout<<"1. Dikasih orang tua"<<endl;
    cout<<"2. Kategori lain"<<endl;
    cout<<"3. Selesai"<<endl;
    cout<<"Silahkah masukkan kategori pemasukan (1-3) : ";
    cin>>kategori;

    if(kategori == "1"){
        cout<<"Silahkan masukkan jumlah (Rp) : ";
        cin>>jumlahPemasukan;
    }else if(kategori == "2"){
        cout<<"Silahkan masukkan kategori : ";
        cin>>kategoriLainPem;
        cout<<"Silahkan masukkan jumlah (Rp) : ";
        cin>>jumlahPemasukan1;
    }cout<<endl;
    pilihanPem();
}

void pilihanPem(){
    if (pilihanTransaksi != 3){
        cout<<"Tambah transaksi pemasukan ? (y/t) : ";
        cin>>tambah;
        cout<<endl;
        if (tambah != 'y'){
            system("cls");
            menu();
        }else{
            kategori = 3;
            kategoriPemasukan();
        }
    }cout<<endl;
}

void kategoriPengeluaran(){
    cout<<"===================="<<endl;
    cout<<"Kategori pengeluaran"<<endl;
    cout<<"===================="<<endl;
    cout<<"1. Makan dan Minum"<<endl;
    cout<<"2. Transportasi"<<endl;
    cout<<"3. Kategori lain"<<endl;
    cout<<"4. Selesai"<<endl;
    cout<<"Silahkan masukkan kategori pengeluaran (1-4) : ";
    cin>>kategori;

    if(kategori == "1"){
        cout<<"Silahkan masukkan jumlah (Rp) : ";
        cin>>jumlahPengeluaran;
    }else if(kategori == "2"){
        cout<<"Silahkan masukkan jumlah (Rp) : ";
        cin>>jumlahPengeluaran1;
    }else if(kategori == "3"){
        cout<<"Silahkan masukkan kategori : ";
        cin>>kategoriLainPen;
        cout<<"Silahkan masukkkan jumlah (Rp) : ";
        cin>>jumlahPengeluaran2;
    }cout<<endl;
    pilihanPen();
}

void pilihanPen(){
    if (pilihanTransaksi != 4){
        cout<<"Tambah transaksi pengeluaran ? (y/t) : ";
        cin>>tambah;
        cout<<endl;
        if(tambah != 'y'){
            system("cls");
            menu();
        }else{
            kategori = 4;
            kategoriPengeluaran();
        }
    }cout<<endl;
}

void catatan(){
    cout<<"Transaksi pemasukan"<<endl;
    cout<<"==================="<<endl;
    cout<<"Pemasukan Rp "<<jumlahPemasukan<<" Kategori dikasih orang tua"<<endl;
    cout<<"Pemasukan Rp "<<jumlahPemasukan1<<" Kategori "<<kategoriLainPem<<endl<<endl;
    cout<<"Transaksi pengeluaran"<<endl;
    cout<<"====================="<<endl;
    cout<<"Pengeluaran Rp "<<jumlahPengeluaran<<" Kategori makan dan minum"<<endl;
    cout<<"Pengeluaran Rp "<<jumlahPengeluaran1<<" Kategori transportasi"<<endl;
    cout<<"Pengeluaran Rp "<<jumlahPengeluaran2<<" Kategori "<<kategoriLainPen<<endl<<endl;
}

void total(){
    cout<<"================================="<<endl;
    transaksiPemasukan = jumlahPemasukan + jumlahPemasukan1;
    cout<<"Total Pemasukan   : Rp"<<transaksiPemasukan<<endl;
    transaksiPengeluaran = jumlahPengeluaran + jumlahPengeluaran1 + jumlahPengeluaran2;
    cout<<"Total Pengeluaran : Rp"<<transaksiPengeluaran<<endl;
    totalKeseluruhan = transaksiPemasukan - transaksiPengeluaran;
    cout<<"Total Keseluruhan : Rp"<<totalKeseluruhan<<endl;
    cout<<"================================="<<endl;
}
