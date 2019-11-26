#ifndef NUMERIC_H
#define NUMERIC_H
#include<iostream>
#include<cstring>
#include <informatii.h>
class numeric:public informatii
{   private:
        int nr;
    public:
        void afisare()const
        {  cout<<"Numarul este:"<<nr<<'\n';

        }
        numeric();
        numeric(string nume=" ",int nr=0):informatii(nume),nr(nr){}
        ~numeric();
        friend istream & operator>>(istream &in,numeric &a);
        friend ostream & operator<<(ostream &out,numeric &a);
        string getnume();
        int getnr();
        void setnume(string nume);
        void setnumar(int nr);
        friend class biblioteca;

};

#endif // NUMERIC_H
