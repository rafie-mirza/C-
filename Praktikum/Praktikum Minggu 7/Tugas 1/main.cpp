#include <iostream>
#include <conio.h>
#include <iomanip>
#include <fstream>
#define maks 5

using namespace std;

struct barang
{
	int harga, jumlah;
	double jumlah_harga, total;
	char namabrg [100];
};

int main()
{
	barang belanja[maks];
	int g,y=0;
	char lagi,nmr[20];

	do{
		cout << "Pembelian Barang Ke=" << y+1 << endl;
		cout << "===========================" << endl;
		cout << "Nama Barang		: "; cin.get(belanja[y].namabrg,30);
		cout << "Harga Satuan		: "; cin >> belanja[y].harga;
		cout << "Jumlah yang Dibeli	: "; cin >> belanja[y].jumlah;
		cout << "\n Ada barang lain lagi yang ini dibeli--maks 5--(Y/N)?";
		cin >> lagi;
		cin.ignore();
		cout << endl << endl;
		y++;
		g=y;
	}
	while ((lagi == 'y' || lagi == 'Y') && y < 5);


cout << "Nama File Nota : "; cin >> nmr;
ofstream struk(nmr,ios::out);
struk << "						NOTA BELANJA					" << endl;
struk << "				  TOKO BUAH HAJI SUTARNO				" << endl;
struk << "=================================================================" << endl;
struk << "| No | Nama Barang  | Harga Satuan  | Jumlah  | Total Barang  |" << endl;
struk << "=================================================================" << endl;

for(y=0;y<g;y++){
	belanja[y].jumlah_harga=belanja[y].harga*belanja[y].jumlah;
	struk << "|" << setw(3) << y+1 << setw(2);
	struk << "|" << setw(13) << belanja[y].namabrg << setw(3);
	struk << "|" << setw(13) << belanja[y].harga << setw(2);
	struk << "|" << setw(7) << belanja[y].jumlah << setw(2);
	struk << "|" << setw(14) << belanja[y].jumlah_harga << setw(3) << "|" << endl;
	belanja[maks].total=belanja[0].jumlah_harga+belanja[1].jumlah_harga+belanja[2].jumlah_harga+
	belanja[3].jumlah_harga+belanja[4].jumlah_harga+belanja[5].jumlah_harga;
}
struk << "============================================================" << endl;
struk << "Total Belanja (Rp)" << setw(28) << "|" << setw(14);
struk << belanja[maks].total << setw(3) << "|" << endl;
struk << "============================================================" << endl;
getch();
}
