#include <iostream>

using namespace std;

int main()
{
    string nama;
	char pilih, golongan;
	int jam = 0, jml, total, sisa, sisa1;

	cout << "================================ " << endl;
	cout << "           PT MAKMUR	   	      " << endl;
	cout << " Dalam 1 minggu bekerja 48 jam   " << endl;
	cout << "================================ " << endl;
	cout << "Nama Karyawan : "; cin >> nama;
	cout << "Jam Kerja : "; cin >> jam;
	cout << "Golongan	(A/B/C/D) : "; cin >> pilih;

	if (pilih == 'A')
	{
		jml = 5000;
	}
	else if (pilih == 'B')
	{
		jml = 7000;
	}
	if (pilih == 'C')
	{
		jml = 8000;
	}
	else if (pilih == 'D')
	{
		jml = 10000;
	}

	if (jam > 48)
	{
		sisa = jam - 48;
		sisa1 = jml * (jam-sisa);
		total = 4000 * sisa;
		jml = sisa1 + total;
	}
	else
	{
		jml = jml * jam;
	}

	cout << endl;
	cout << "========== Data ===========" << endl;
	cout << "Nama Karyawan : " << nama << endl;
	cout << "Jumlah Gaji : " << jml << endl;
}
