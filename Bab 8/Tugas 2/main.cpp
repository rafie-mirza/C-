#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int n, i, nilai, max;
	int *ptr_max;
	ptr_max=&max;

	cout << "Banyak nilai yang ingin diinput : "; cin >> n;

	for(i=1; i<=n; i++){
		cout << "Masukkan nilai ke-" << i << " : "; cin >> nilai;
		if(nilai>max){
			max=nilai;
		}
	}
	cout << endl;
	cout << "Nilai Maksimum = " << max << endl;

	getch();
}
