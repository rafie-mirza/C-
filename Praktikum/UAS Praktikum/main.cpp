#include <conio.h>
#include <iostream>
#include <iomanip>
#include <fstream>
#define maks 5
using namespace std;

	struct mahasiswa
	{
		char nama[30],nim[15],fakultas[30],prodi[30],dosen[30],ketua[30];
		int jumlahmatkul;
		float total_akhir;
	};
	mahasiswa mhs;

	char matkul[30],jumlahsks[15],nilai[15],nmr[20];
	int bnilai[50],mutu[50],bsks[50];

main ()
{

	awal :
	cout<<"[            Progam Transkrip Sementara              ]"<<endl;
	cout<<"======================================================"<<endl;
	cout<<"\n";

	cout<<" Masukkan Nim Mahasiswa        : "; cin.getline (mhs.nim,15);
	cout<<" Masukkan Nama Mahasiswa       : "; cin.getline (mhs.nama,30);
	cout<<" Masukkan Nama Fakultas        : "; cin.getline (mhs.fakultas,30);
	cout<<" Masukkan Nama Prodi           : "; cin.getline (mhs.prodi,30);
	cout<<" Masukkan Nama Dosen Penasihat : "; cin.getline (mhs.dosen,30);
	cout<<" Masukkan Nama Ketua Jurusan   : "; cin.getline (mhs.ketua,30);
	cout<<" Masukkan Jumlah Mata Kuliah   : "; cin>>mhs.jumlahmatkul;
	cout<<"\n";
	cout<<"------------------------------------------------------"<<endl;

	for (int i=1;i<=mhs.jumlahmatkul;i++)
	{
		cout<<"         Mata Kuliah ke "<<i<<"           "<<endl;
		cout<<"=========================================="<<endl;
		cout<<" Nama Mata Kuliah	      : "; cin>>matkul;
		cout<<"	Jumlah SKS                : "; cin>>jumlahsks[i];
		cout<<" Nilai Mata Kuliah         : "; cin>>nilai[i];
		if(nilai[i]=='a' || nilai[i]=='A'){
		bnilai[i]=4;
		}
		else if(nilai[i]=='b' || nilai[i]=='B'){
		bnilai[i]=3;
		}
		else if(nilai[i]=='c' || nilai[i]=='C'){
		bnilai[i]=2;
		}
		else if(nilai[i]=='d' || nilai[i]=='D'){
		bnilai[i]=1;
		}
		else if(nilai[i]=='e' || nilai[i]=='E'){
		bnilai[i]=0;
		}
		else {
		cout<<"Masukkan HANYA A,B,C,D,E!!\n";
		}
  		cout<<"=========================================="<<endl;
 }

 cout<<"Nama File Nota	: "; cin>>nmr;
	ofstream file(nmr,ios::out);
	file<<"						TRANSKRIP NILAI					"<<endl;
	file<<"\n";
	file<<"NIM  :"<<setw(3)<<mhs.nim[15]<<setw(2); file<<" Fakultas :"<<setw(3)<<mhs.fakultas[30]<<setw(2);
	file<<"NAMA :"<<setw(3)<<mhs.nama[15]<<setw(2);
	file<<"==============================================="<<endl;
	file<<"| no | Nama MataKuliah |  SKS  |  Nilai  | NK |"<<endl;
	file<<"==============================================="<<endl;

}
