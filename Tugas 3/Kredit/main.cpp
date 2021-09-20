#include <iostream>

using namespace std;

int main()
{
    double hargaMotor, lamaKredit, hargaPokok, bunga, cicilan, totalHargaMotor, keuntunganDealer, totalHargaCicilan;
    cout << "Masukkan Harga Motor : ";cin>>hargaMotor;
    cout << "Masukkan Lama Kredit : ";cin>>lamaKredit;
    hargaPokok = hargaMotor/lamaKredit;
    bunga = hargaPokok*0.1;
    cicilan = hargaPokok+bunga;
    totalHargaMotor = cicilan*lamaKredit;
    keuntunganDealer = totalHargaMotor - hargaMotor;
    totalHargaCicilan = cicilan*lamaKredit;
    cout << "Cicilan Motor ini adalah "<<cicilan<<endl;
    cout << "Total Harga Cicilannya adalah "<<totalHargaCicilan<<endl;
    cout << "Keuntungan Dealernya adalah "<<keuntunganDealer<<endl;
    return 0;
}
