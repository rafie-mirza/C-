#include <iostream>
#include <conio.h>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    int alas, sisimiring, tinggi, keliling;
    cout<<"\tMasukkan alas = ";cin>>alas;
    cout<<"\tMasukkan tinggi = ";cin>>tinggi;
    sisimiring = sqrt(alas*alas+tinggi*tinggi);
    keliling = alas+tinggi+sisimiring;
    cout<<"\tSisi Miring dari segitiga ini adalah = "<<sisimiring<<endl;
    cout<< "\tKeliling dari segitiga ini adalah = "<<keliling;
    return 0;
}
