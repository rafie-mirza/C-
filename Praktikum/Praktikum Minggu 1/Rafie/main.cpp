#include <iostream>

using namespace std;

int main()
{
    int jam_masuk, menit_masuk, detik_masuk,
		jam_keluar, menit_keluar, detik_keluar,
		totalDetikMulai, totalDetikKeluar,
		durasi, sisa, tarif, jam, menit, detik;

	cout << "====== Masuk ======" << endl;
	cout << "Jam : "; cin >> jam_masuk;
	cout << "Menit : "; cin >> menit_masuk;
	cout << "Detik : "; cin >> detik_masuk;
	cout << "===================" << endl;
	totalDetikMulai = (jam_masuk*3600) + (menit_masuk*60) + detik_masuk;

	cout << "====== Keluar ======" << endl;
	cout << "Jam : "; cin >> jam_keluar;
	cout << "Menit : "; cin >> menit_keluar;
	cout << "Detik : "; cin >> detik_keluar;
	cout << "===================" << endl;
	totalDetikKeluar = (jam_keluar*3600) + (menit_keluar*60) + detik_keluar;
	durasi = totalDetikKeluar - totalDetikMulai;

	jam = durasi/3600;
	sisa = durasi%3600;
	menit = sisa/60;
	detik = sisa%60;
	tarif = jam*5000;
	cout << endl;

	cout << "Anda telah bermain selama " << jam << " jam " << menit << " menit " << detik << " detik" << endl;
	cout << "Yang harus anda bayar sebesar : Rp" << tarif;
}
