#ifndef PHAN_SO_H
#define PHAN_SO_H


class Phan_So
{
    public:
        Phan_So(int t=0,int m=1) {tuso=t;mauso=m;};
        Phan_So(const Phan_So &p)
        {
            tuso=p.tuso;
            mauso=p.mauso;
        };
        int LayTu();
        int LayMau();
        void GanTu(int t);
        void GanMau(int m);
        void Nhap();
        void Xuat();
        int UOC(int a,int b);
        void RG();
        friend bool operator>(const Phan_So &,const Phan_So &);
        friend Phan_So operator+(const Phan_So &,const Phan_So &);
        friend Phan_So operator-(const Phan_So &,const Phan_So &);
        friend class DS_Phan_So;
    protected:

    private:
        int tuso,mauso;
};

#endif // PHAN_SO_H
