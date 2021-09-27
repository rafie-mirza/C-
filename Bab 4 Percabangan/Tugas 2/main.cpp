#include <iostream>

using namespace std;

int main()
{

    int nilai, a;
    cout<<"Program Penentu Kelulusan!"<<endl;
    cout<<endl;
    cout << "Masukkan Nilai Anda : ";cin>>a;
        if (a>=80 && a<=100)
        cout<<"Selamat!! Nilai Anda Masuk Kategori A"<<endl;
        else if(a>=65 && a<=79)
        cout<<"Nilai Anda Masuk Kategori B"<<endl;
        else if(a>=50 && a<=64)
        cout<<"Nilai Anda Masuk Kategori C"<<endl;
        else if(a>=35 && a<=49)
        cout<<"Nilai Anda Masuk Kategori D"<<endl;
        else if(a>=0 && a<=34)
        cout<<"Nilai Anda Masuk Kategori E"<<endl;

}
