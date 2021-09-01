#include <iostream>
#include <conio.h>
using namespace std;

int LuasLingkaran();
int LuasSegitiga();
int LuasPersegiPanjang();
int LuasJajarGenjang();
int Luaspersegi();
int MenghitungLuas();
int MenghitungKeliling();
int main()
{
awal:
	int pil;

	cout << "" << endl;

	cout << " ________________________" << endl;
	cout << "|          MENU          |" << endl;
	cout << "|________________________|" << endl;
	cout << "| 1. Menghitung Luas     |" << endl;
	cout << "| 2. Menghitung Keliling |" << endl;
	cout << "|________________________|" << endl;

	cout << "" << endl;

	cout << "Masukan Pilihan anda : ";
	cin >> pil;

	switch (pil)
	{
	case 1:
		MenghitungLuas();
		break;
	//	case 2: MenghitungKeliling();    break;
	case 3:
		break;
	default:
		cout << "Pilihan yang anda masukan tidak tersedia" << endl;
	}
	goto awal;

	return 0;
}

int MenghitungLuas()
{

	int pil;
	cout << "" << endl;

	cout << " _______________________" << endl;
	cout << "|         MENU          |" << endl;
	cout << "|_______________________|" << endl;
	cout << "| 1. Lingkaran          |" << endl;
	cout << "| 2. Segitiga           |" << endl;
	cout << "| 3. persegi panjang    |" << endl;
	cout << "| 4. jajar genjang      |" << endl;
	cout << "| 5. persegi            |" << endl;
	cout << "|_______________________|" << endl;

	cout << "" << endl;

	cout << "Masukan Pilihan anda : ";
	cin >> pil;

	switch (pil)
	{
	case 1:
		LuasLingkaran();
		break;
	case 2:
		LuasSegitiga();
		break;
	case 3:
		LuasPersegiPanjang();
		break;
	case 4:
		LuasJajarGenjang();
		break;
	case 5:
		Luaspersegi();
		break;
	case 6:
		break;
	default:
		cout << "Pilihan yang anda masukan tidak tersedia" << endl;
	}
}

int LuasLingkaran() //rumus menghitung lingkaran
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
	cout << endl;
	cout << "=============================" << endl;
}

int LuasSegitiga() //rumus menghitung segitiga
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
	cout << endl;
	cout << "=============================" << endl;
}

int LuasPersegiPanjang() //rumus menghitung persegi panjang
{
	double p, l, L;
	cout << "====================================" << endl;
	cout << "Menu menghitung luas Persegi Panjang" << endl;
	cout << "====================================" << endl;
	cout << endl;
	cout << "Masukan jumlah panjang persegi panjang : ";
	cin >> p;
	cout << "Masukan jumlah lebar persegi panjang : ";
	cin >> l;

	L = p * l;

	cout << "Luas Persegi Panjang adalah : " << L << endl;
	cout << endl;
	cout << "=============================" << endl;
}

int LuasJajarGenjang()
{
	double a, t, L;
	cout << "==================================" << endl;
	cout << "Menu menghitung luas jajar genjang" << endl;
	cout << "==================================" << endl;
	cout << endl;
	cout << "Masukan jumlah alas jajar genjang : ";
	cin >> a;
	cout << "Masukan jumlah tinggi jajar genjang : ";
	cin >> t;

	L = a * t;

	cout << "jumlah luas jajar genjang adalah : " << L << endl;
	cout << endl;
	cout << "=============================" << endl;
}

int Luaspersegi()
{
	double s, L;
	cout << "============================" << endl;
	cout << "Menu menghitung luas persegi" << endl;
	cout << "============================" << endl;
	cout << endl;
	cout << "masukan jumlah sisi persegi : ";
	cin >> s;

	L = s * s;

	cout << "Jumlah luas persegi adalah : " << L << endl;
	cout << endl;
	cout << "=============================" << endl;
}
