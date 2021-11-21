#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int nilai;
	char matkul[30], grade[30] = "Grade";
	string grd;
	char *ptr_matkul, *ptr_grade;
	ptr_matkul = matkul;
	ptr_grade = grade;

	cout << "==================================================" << endl;
	cout << "|           Progam Nilai Mata Kuliah             |" << endl;
	cout << "==================================================" << endl;
	cout << endl;
	cout << " Masukkan nama mata kuliah  : "; cin >> ptr_matkul;
	cout << " Masukkan nilai mata kuliah : "; cin >> nilai;

	if(nilai>=90 && nilai<=100){
		grd = "A";
	}
	else if (nilai>=80 && nilai<90){
		grd = "B";
	}
	else if (nilai>=70 && nilai<80){
		grd = "C";
	}
	else if (nilai>=60 && nilai<70){
		grd = "D";
	}
	else if (nilai>=50 && nilai<60){
		grd = "E";
	}
	else if (nilai<50){
		grd = "Anda Tidak Lulus";
	}
	else{
		grd = "Nilai yang Anda Masukkan Kurang dari 1 dan Lebih dari 100!!!";
	}

	cout << endl;
	cout << "==================================================" << endl;
	cout << "Nilai " << matkul << " = " << nilai << ", " << ptr_grade << " = " << grd << endl;
}
