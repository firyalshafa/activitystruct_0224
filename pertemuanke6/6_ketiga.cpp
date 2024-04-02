#include <iostream>
using namespace std;

struct detailalamat {
	int desa;
	int kota;
};

struct Mahasiswa {
    int nim;
    int nama;
    detailalamat alamat;
    int umur;
};

int main()
{
    Mahasiswa mhs;
    cout << "nomor mahasiswa :";
    getline (cin, mhs.nim);
    cout << "nama mahasiswa :";
    getline(cin, mhs.nama);

    cout << " alamat mahasiswa :";
    cout << "/t nama desa :";
    cin >> mhs.alamat.desa;
    cout << "/t nama kota :";
    cin >> mhs.alamat.kota;

    cout << " umur mhasiswa :";
    cin >> mhs.umur;

    cout << endl;
    cout << "\n nim :" << mhs.nim;
    cout << "\n nama :" << mhs.nama;
    cout << "\n alamat :";
    cout << "\n desa :" << mhs.alamat.desa;
    cout << "\n kota : " << mhs.alamat.kota;
    cout << "\n umur : " << mhs.umur;
}