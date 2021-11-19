#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void tukar(int x, int y);
main(){
	int a,b;
	system("cls");
	a=80;
	b=11;
	printf("Nilai Sebelum Pemanggilan Fungsi \n");
	printf("a = %i \nb = %i \n",a,b);
	tukar(a,b);
	printf("Nilai Setelah Pemanggilan Fungsi \n");
	printf("a = %i \nb = %i \n",a,b);
	getch();
}
void tukar(int px,int py)
{
	int z;
	z=px;
	px=py;
	py=z;
	printf("Nilai Diakhir Fungsi \n");
	printf("px = %i \npy = %i \n",px,py);
}
