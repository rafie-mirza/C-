#include <iostream>

using namespace std;
int a = 4;

int main()
{
    int a;
cout<<"Masukkan bilangan : "; cin >>a;
switch (a){
    case 1 : cout<<"Hari ke "<<a<<" : Minggu";
    break;
    case 2 : cout<<"Hari ke "<<a<<" : Senin";
    break;
    case 3 : cout<<"Hari ke "<<a<<" : Selasa";
    break;
    case 4 : cout<<"Hari ke "<<a<<" : Rabu";
    break;
    case 5 : cout<<"Hari ke "<<a<<" : Kamis";
    break;
    case 6 : cout<<"Hari ke "<<a<<" : Jum'at";
    break;
    case 7 : cout<<"Hari ke "<<a<<" : Sabtu";
    break;
default :cout<<"Tidak terdapat hari ke "<<a;}

    return 0;
}
