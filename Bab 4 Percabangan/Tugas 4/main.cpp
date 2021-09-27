#include <iostream>

using namespace std;

int main()
{
    int pilih, hasil, angka1, angka2;

    cout << endl;
    cout << "Pilihan 1 untuk pertambahan"<<endl;
    cout << "Pilihan 2 untuk pengurangan"<<endl;
    cout << "Pilihan 3 untuk perkalian"<<endl;
    cout << "Pilihan 4 untuk pembagian"<<endl;
    cout << "Pilihan 5 untuk modulus"<<endl;

    cout << "Masukkan Pilihan : ";cin>>pilih;
    cout << endl;
    cout << "Masukkan angka 1 : ";cin>>angka1;
    cout << "Masukkan angka 2 : ";cin>>angka2;
    cout << endl;

    switch (pilih){
        case 1:
            hasil = angka1 + angka2;
            cout << angka1 << " + " << angka2 << " = " << hasil;
            break;
        case 2:
            hasil = angka1 - angka2;
            cout << angka1 << " - " << angka2 << " = " << hasil;
            break;
        case 3:
            hasil = angka1 * angka2;
            cout << angka1 << " * " << angka2 << " = " << hasil;
            break;
        case 4:
            hasil = angka1 / angka2;
            cout << angka1 << " / " << angka2 << " = " << hasil;
            break;
        case 5:
            hasil = angka1 % angka2;
            cout << angka1 << " % " << angka2 << " = " << hasil;
            break;
        default :
            cout << "Pilihan yang anda masukkan tidak ada"<<endl;
    }
}
