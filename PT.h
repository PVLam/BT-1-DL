#include <iostream>
using namespace std;
#include <fstream>
#include <stdlib.h>
#include <ctime>

void menu()
{
	cout<<"1. Them 1 so: \n";
	cout<<"2. Hien thi: \n";
	cout<<"3. Nap kho so tu file: \n";
	cout<<"4. Luu vao file: \n";
	cout<<"5. Sinh so ngau nhien: \n";
	cout<<"0. An phim bat ky de ket thuc chuong trinh \n";
	return;
}

void Themso(int &a[], int &n)
{
	cout<<"Nhap so: ";
	int f; cin>>f;
	a[n++] = f;
}

void Hienthi(int &a[], int &n)
{
	for (int i = 0; i<n ; i++)
	{
		cout<<a[i]<<' ';
	}
}

/*void Docfile(int a[], int&n)
{
	string s;
	cout<<"Nhap ten file: ";
	cin.ignore();
	cin.getline(s,100);
	fstream fin(s);

	do
	{

	}while(!eof());
}

void Ghifile(int a[], int &n)
{ 
	string t;
	cout<<"Nhap ten file: ";
	cin.ignore();
	cin.getline(t,100);
	ofstream fout(t);
	for (int i = 0; i<n; ++i)
	{
		fout<<a[i];
	}
}*/

void Sinhso(int &a[], int &n)
{
	int j;
	cout<<"Nhap so luong so: ";
	cin>>j;
	srand(time(NULL));
	for(int i = n; i<n+j-1; i++)
	{
		a[i] = rand()%1000;
	}
}