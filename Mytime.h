#ifndef MYTIME_H
#define MYTIME_H
#include <iostream>
using namespace std;
class Mytime
{
public:
    explicit Mytime():hour(),mins(){}
    explicit Mytime(int h,int m):hour(h),mins(m){}
    Mytime (const Mytime &t){hour=t.hour;mins=t.mins;}
    Mytime operator+(Mytime&);
    void reduction(Mytime &);
    friend ostream &operator<<(ostream &os,const Mytime &t)
    {
        if(t.hour<1&&t.mins<1)
        os<<t.hour<<"_"<<"hour"<<"_"<<t.mins<<"_"<<"minute";

        else if (t.hour>=1&&t.mins>=1)
        {
            os<<t.hour<<"_"<<"hours"<<"_"<<t.mins<<"_"<<"minutes";
        }
        else if(t.hour>=1 && t.mins<=1)
        {
            os<<t.hour<<"_"<<"hours"<<"_"<<t.mins<<"_"<<"minute";
        }
        else if(t.hour<=1 && t.mins>=1)
        {
           os<<t.hour<<"_"<<"hour"<<"_"<<t.mins<<"_"<<"minutes";
        }
        return os;
    }
    friend Mytime operator*(int m,const Mytime t);
    friend Mytime operator*(const Mytime t,int m);
    Mytime& operator++()//prefix
    {
       ++mins;
       if(mins>=60)reduction(*this);
       return *this;
    }
    Mytime operator++(int)//postfix
    {
       Mytime t(*this);
       mins++;
       return t;
    }
    int hour,mins;
};
void Mytime::reduction(Mytime &t1)
{
    while(t1.mins>=60)
    {
        t1.hour=t1.hour+1;
        t1.mins=t1.mins-60;
    }
}
Mytime Mytime::operator+(Mytime&t1)
{
    Mytime t;
    t.hour=this->hour+t1.hour;
    t.mins=this->mins+t1.mins;
    reduction(t);
    return t;
}

Mytime operator *(int m,Mytime t1)
{
    Mytime temp;
    temp.hour=m*t1.hour;
    temp.mins=m*t1.mins;
    while(temp.mins>=60)
    {
        temp.hour=temp.hour+1;
        temp.mins=temp.mins-60;
    }
    return temp;
}
Mytime operator *(Mytime t1,int m)
{
    Mytime temp;
    temp.hour=t1.hour*m;
    temp.mins=t1.mins*m;
    while(temp.mins>=60)
    {
        temp.hour=temp.hour+1;
        temp.mins=temp.mins-60;
    }
    return temp;
}
#endif
