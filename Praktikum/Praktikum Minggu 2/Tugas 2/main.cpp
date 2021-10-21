#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    float alas, tinggi, sisiMiring, keliling, hitung, luas;
	int pilih;

	cout << "===== MENU SEGITIGA SIKU-SIKU =====" << endl;
	cout << "1. Hitung panjang sisi miring"       << endl;
	cout << "2. Hitung luas"                      << endl;
	cout << "3. Hitung Keliling"                  << endl;
	cout << "4. Keluar Program"                   << endl;
	cout << "===================================" << endl;
	cout << "Masukkan Menu : "; cin >> pilih;
	cout << endl;

	switch (pilih){
		case 1:
			cout << "Masukkan alas : "; cin >> alas;
			cout << "Masukkan tinggi : "; cin >> tinggi;
			sisiMiring = sqrt(alas*alas + tinggi*tinggi);
			cout << "Hasil Panjang Sisi Miring Segitiga = " << sisiMiring << endl;
		break;
		case 2:
			cout << "Masukkan alas : "; cin >> alas;
			cout << "Masukkan tinggi : "; cin >> tinggi;
			luas = 0.5*alas*tinggi;
			cout << "Hasil Luas Segitiga = " << luas << endl;
		break;
		case 3:
			cout << "Masukkan alas : "; cin >> alas;
			cout << "Masukkan tinggi : "; cin >> tinggi;
			hitung = sqrt(alas*alas + tinggi*tinggi);
			keliling = alas+tinggi+hitung;
			cout << "Hasil Keliling Segitiga = " << keliling << endl;
		break;
		case 4:
			exit(0);
		default:
			cout << "Menu yang anda masukkan tidak valid!!!";
    }
}
