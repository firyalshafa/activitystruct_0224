// pertemuanke6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Mahasiswa {
    int nim;
    int nama;
    int alamat;
    int umur;
};

int main()
{
    Mahasiswa mhs;
    cout << "nomor mahasiswa :";
    cin >> mhs.nim;
    cout << "nama mahasiswa :";
    cin >> mhs.nama;
    cout << " alamat mahasiswa :";
    cin >> mhs.alamat;
    cout << " umur mhasiswa :";
    cin >> mhs.umur;
}


