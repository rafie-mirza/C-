#include <iostream>
using namespace std;

int main()
{
	//input
	string nama;
	int nik, gajiPokok, uangMakan, jenisKelamin, status, kendaraan, gajiKotor, pajak, gajiBersih;

	cout << "================= PETUNJUK ==============" << endl;
	cout << "*ketik 0 jika Perempuan, Single, Motor" << endl;
	cout << "*ketik 1 jika Laki-laki, Menikah, Mobil" << endl;
	cout << "=========================================" << endl;
	cout << endl;

	cout << "Masukkan Nama Anda : "; getline (cin, nama);
	cout << "Masukkan NIK Anda : "; cin >> nik;

	//input jenis kelamin
	cout << "Masukkan Jenis Kelamin Anda : "; cin >> jenisKelamin;
	if (jenisKelamin == 0){
		cout << "Jenis Kelamin : Perempuan" << endl;
	}
	else if (jenisKelamin == 1){
		cout << "Jenis Kelamin : Laki-Laki" << endl;
	}
	else {
		cout << "Angka yang anda masukkan tidak valid" << endl;
	}

	//input status pernikahan
	cout << "Masukkan Status Pernikahan Anda : "; cin >> status;
	if (status == 0){
		cout << "Status Pernikahan Anda : Single" << endl;
	}
	else if (status == 1){
		cout << "Status Pernikahan Anda : Menikah" << endl;
	}
	else {
		cout << "Angka yang anda masukkan tidak valid" << endl;
	}

	//input kendaraan
	cout << "Masukkan Kendaraan Anda : "; cin >> kendaraan;
	if (kendaraan == 0){
		cout << "Kendaraan Anda : Motor" << endl;
	}
	else if (kendaraan == 1){
		cout << "Kendaraan Anda : Mobil" << endl;
	}
	else {
		cout << "Angka yang anda masukkan tidak valid" << endl;
	}
	cout << "Masukkan Gaji Pokok Anda : "; cin >> gajiPokok;
	cout << "Masukkan Uang Makan Anda : "; cin >> uangMakan;
	cout << endl;
	cout << "================================================" << endl;

	//output tunjangan
	int tunjangan = 500, transport = 1000;
	if (jenisKelamin == 1 && status == 1){
		cout << "Tunjangan Anda = " << tunjangan << endl;
	}
	else {
		cout << "Tunjangan Anda = " << tunjangan%tunjangan << endl;
	}

	//output kendaraan
	if (kendaraan == 1){
		cout << "Transport Anda = " << transport << endl;
	}
	else if (kendaraan == 0) {
		cout << "Transport Anda = " << transport/2 << endl;
	}
	else {
		cout << "Transport Anda = 0" << endl;
	}

	gajiKotor = gajiPokok + tunjangan + uangMakan + transport;
		cout << "Gaji Kotor Anda : " << gajiPokok << "+" << tunjangan << "+" << uangMakan << "+" << transport << "=" << gajiKotor;
		cout << endl;
	pajak = 0.05*gajiKotor;
		cout << "Pajak Anda = " << pajak;
		cout <<  endl;
	gajiBersih = gajiKotor - pajak;
		cout << "Gaji Bersih Anda : " << gajiKotor << "-" << pajak << "=" << gajiBersih;
}
