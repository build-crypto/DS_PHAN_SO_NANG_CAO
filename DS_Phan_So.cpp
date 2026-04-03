#include "DS_Phan_So.h"
#include <iostream>
#include <vector>

Phan_So& DS_Phan_So::operator[](int i)
{
    return DS[i];
}
void DS_Phan_So::Nhap_DS()
{
    int n;
    std::cin>>n;
    DS.resize(n);
    for (int t=0;t<n;t++)
    {
        DS[t].Nhap();
    }
}
void DS_Phan_So::Xuat_DS()
{
    std::cout<<"[ ";
    for (auto &x: DS)
    {
        x.Xuat();
        std::cout<<" ";
    }
    std::cout<<"]";
    std::cout<<'\n';
}
Phan_So DS_Phan_So::Find_MAX()
{
    Phan_So Max = DS[0];
    for (int t=1;t<DS.size();t++)
    {
        Max = Max > DS[t]?Max:DS[t];
    }
    return Max;
}
Phan_So DS_Phan_So::Total_Sum()
{
    Phan_So S;
    for (auto x: DS)
    {
        S= S+x;
    }
    return S;
}
