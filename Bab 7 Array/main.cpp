#include <iostream>

using namespace std;

int main()
{
    cout << "====== Program Perhitungan Matriks ======" << endl;
	cout << "          1. Pengurangan Matriks         " << endl;
	cout << "          2. Perkalian Matriks           " << endl;
	cout << "          3. Transpose Matriks           " << endl;
	cout << "=========================================" << endl;

	int array1[2][2];
	int array2[2][2];
	int hasil[2][2];
	int pilih;

	cout << "Masukkan Pilihan Anda : "; cin >> pilih;

	switch (pilih){
		case 1:
			for (int i=0; i<2; i++){
				for (int j=0; j<2; j++){
					cout << "Masukkan Elemen Matriks Pertama ["<< i <<"]["<< j <<"] : ";
					cin >> array1[i][j];
				}
			}
			for (int i=0; i<2; i++){
				for (int j=0; j<2; j++){
					cout << "Masukkan Elemen Matriks Kedua ["<< i <<"]["<< j <<"] : ";
					cin >> array2[i][j];
				}
			}
			cout << "============================================================" << endl;
			cout<<"Matriks Pertama\n";
   			for(int i=0; i<2; i++){
      			for(int j=0; j<2; j++){
         			cout << "  " << array1[i][j] << "  ";
     			}
      			cout << endl;
			}
			cout << endl;
			cout<<"Matriks Kedua\n";
   			for(int i=0; i<2; i++){
      			for(int j=0; j<2; j++){
         			cout << "  " << array2[i][j] << "  ";
     			}
      			cout << endl;
			}
			cout << endl;
			cout<<"Hasil Pengurangan Matriks\n";
   			for(int i=0; i<2; i++){
      			for(int j=0; j<2; j++){
         			hasil[i][j] = array1[i][j] - array2 [i][j];
     			}
			}
   			for(int i=0; i<2; i++){
      			for(int j=0; j<2; j++){
         			cout << "  " << hasil[i][j] << "  ";
     			}
      			cout << endl;
			}
		break;
		case 2:
			for (int i=0; i<2; i++){
				for (int j=0; j<2; j++){
					cout << "Masukkan Elemen Matriks Pertama ["<< i <<"]["<< j <<"] : ";
					cin >> array1[i][j];
				}
			}
			for (int i=0; i<2; i++){
				for (int j=0; j<2; j++){
					cout << "Masukkan Elemen Matriks Kedua ["<< i <<"]["<< j <<"] : ";
					cin >> array2[i][j];
				}
			}
			cout << "============================================================" << endl;
			cout<<"Matriks Pertama\n";
   			for(int i=0; i<2; i++){
      			for(int j=0; j<2; j++){
         			cout << "  " << array1[i][j] << "  ";
     			}
      			cout << endl;
			}
			cout << endl;
			cout<<"Matriks Kedua\n";
   			for(int i=0; i<2; i++){
      			for(int j=0; j<2; j++){
         			cout << "  " << array2[i][j] << "  ";
     			}
      			cout << endl;
			}
			cout << endl;
			cout<<"Hasil Perkalian Matriks\n";
   			for(int i=0; i<2; i++){
      			for(int j=0; j<2; j++){
         			hasil[i][j] = array1[i][j] * array2 [i][j];
     			}
			}
   			for(int i=0; i<2; i++){
      			for(int j=0; j<2; j++){
         			cout << "  " << hasil[i][j] << "  ";
     			}
      			cout << endl;
			}
		break;
		case 3:
			for (int i=0; i<2; i++){
				for (int j=0; j<2; j++){
					cout << "Masukkan Elemen Matriks ["<< i <<"]["<< j <<"] : ";
					cin >> array1[i][j];
				}
			}
			cout << "============================================" << endl;
			cout << "Matriks\n";
			for(int i=0; i<2; i++){
      			for(int j=0; j<2; j++){
         			cout << "  " << array1[i][j] << "  ";
     			}
      			cout << endl;
			}
			cout<<"Transpose Matriks\n";
		   	for(int i=0; i<2; i++){
		      	for(int j=0; j<2; j++){
		         	array2[j][i] = array1[i][j];
		     	}
			}
		   	for(int i=0; i<2; i++){
		      	for(int j=0; j<2; j++){
		         	cout << "  " << array2[i][j] << "  ";
		     	}
		      	cout << endl;
			}
		break;
		default:
			cout << "Pilihan Anda Tidak Valid!!!" << endl;
		break;
	}
}
