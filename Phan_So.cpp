#include "Phan_So.h"
#include<iostream>


Phan_So operator+(const Phan_So &a,const Phan_So & b)
{
    Phan_So c;
    c.tuso = a.tuso*b.mauso+a.mauso*b.tuso;
    c.mauso = a.mauso*b.mauso;
    c.RG();
    return c;
}
Phan_So operator-(const Phan_So & a,const Phan_So & b)
{
    Phan_So c;
    c.tuso = a.tuso*b.mauso-a.mauso*b.tuso;
    c.mauso = a.mauso*b.mauso;
    c.RG();
    return c;
}
bool operator>(const Phan_So & a ,const Phan_So & b)
{
     return a.tuso*b.mauso>a.mauso*b.tuso;
}
int Phan_So::LayTu()
{
    return tuso;
}
int Phan_So::LayMau()
{
    return mauso;
}
void Phan_So::GanTu(int t)
{
    tuso=t;
}
void Phan_So::GanMau(int m)
{
    mauso=m;
}
void Phan_So::Nhap()
{
     std::cout<<"Nhap tu so: ";
     std::cin>>tuso;
     do{
        std::cout<<"Nhap mau so: ";
     std::cin>>mauso;
     }   while (mauso==0);
     this->RG();
}
void Phan_So::Xuat()
{
     std::cout<<tuso;
     if (mauso!=1) std::cout<<"/"<<mauso;
}

int Phan_So::UOC(int a,int b)
{
    a=abs(a);
    b=abs(b);
    if (b==0) return a;
    return UOC(b,a%b);
}
void Phan_So::RG()
{
    int k = UOC(tuso,mauso);
    if (mauso<0)
    {
        tuso=-tuso;
        mauso=-mauso;
    }
    tuso/=k;
    mauso/=k;
}
