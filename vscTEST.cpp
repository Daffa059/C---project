#include <iostream>
#include <conio.h>
using namespace std;

int Lingkaran();
int Segitiga();
int PersegiPanjang();
int main()
{
    int pil;

    cout << " _______________________" << endl;
    cout << "|         MENU          |" << endl;
    cout << "|_______________________|" << endl;
    cout << "| 1. Lingkaran          |" << endl;
    cout << "| 2. Segitiga           |" << endl;
    cout << "| 3. persegi panjang    |" << endl;
    cout << "|_______________________|" << endl;

    cout << "" << endl;

    cout << "Masukan Pilihan anda : ";
    cin >> pil;

    switch (pil)
    {
    case 1:
        Lingkaran();
        break;
    case 2:
        Segitiga();
        break;
    //case 3: Persegipanjang();break;
    case 4:
        break;
    default:
        cout << "Pilihan yang anda masukan tidak tersedia" << endl;
    }
    return 0;
}

int Lingkaran()
{

    double r, l;
    const float phi = 3.14;
    cout << "==============================" << endl;
    cout << "Menu menghitung luas lingkaran" << endl;
    cout << "==============================" << endl;
    cout << endl;
    cout << "masukan jumlah jari-jari lingkaran : ";
    cin >> r;

    l = 2 * phi * r;

    cout << "Jumlah luas lingkaran adalah " << r << endl;
}

int Segitiga()
{
    double a, t, l;
    cout << "=============================" << endl;
    cout << "Menu menghitung luas segitiga" << endl;
    cout << "=============================" << endl;
    cout << endl;
    cout << "masukan jumlah alas segitiga : ";
    cin >> a;
    cout << "masukan jumlah tinggi segitiga : ";
    cin >> t;

    l = a * t / 2;

    cout << "luas segitiga adalah " << l << endl;
}
