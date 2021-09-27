#include <iostream>

using namespace std;

int main()
{
    int tahun;
    cout << "Masukkan Tahun : ";cin>>tahun;

    if (tahun%400==0){
        cout << "Ini adalah tahun kabisat"<<endl;
    }else if (tahun%100==0){
        cout << "ini bukanlah tahun kabisat"<<endl;
    }else if (tahun%4==0){
        cout << "Ini adalah tahun kabisat"<<endl;
    }else{
        cout << "ini bukanlah tahun kabisat";
    }
}
