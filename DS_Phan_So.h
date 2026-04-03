#ifndef DS_PHAN_SO_H
#define DS_PHAN_SO_H
#include "Phan_So.h"
#include <vector>


class DS_Phan_So
{
    public:
        DS_Phan_So(){};
        void Nhap_DS();
        void Xuat_DS();
        Phan_So& operator[](int i);
        Phan_So Find_MAX();
        Phan_So Total_Sum();
    protected:

    private:
        std::vector<Phan_So> DS;
};

#endif // DS_PHAN_SO_H
