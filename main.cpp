#include "DS_Phan_So.h"
#include<iostream>

using namespace std;
void foo(bool a)
{
    if (a) cout<<"YES\n";
    else cout<<"NO\n";
}
int main()
{
    DS_Phan_So A;
    cout<<"Nhap so Phan tu mang: ";
    A.Nhap_DS();
    A.Xuat_DS();
    cout<<"Phan So lon nhat trong mang la: ";
    A.Find_MAX().Xuat();
    cout<<"\nTong cac Phan So trong mang la: ";
    A.Total_Sum().Xuat();
}
