#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    double nilaiPraktikum, nilaiTeori, nilaiTugasProject, nilaiTotal;
    cout << "Masukkan Nilai Praktikum : ";cin>>nilaiPraktikum;
    cout << "Masukkan Nilai Teori : ";cin>>nilaiTeori;
    cout << "Masukkan Nilai Tugas dan Final Project : ";cin>>nilaiTugasProject;
    nilaiTotal = nilaiPraktikum*0.4+nilaiTeori*0.4+nilaiTugasProject*0.2;
    cout << "Nilai Total nya adalah : "<<nilaiTotal;
    return 0;
}
