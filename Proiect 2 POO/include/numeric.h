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
        void setre(int re){}
        void setim(int im){}
        void setsir(string sir){}
        void setnumar(int numar){nr=numar;}
        int getre(){}
        int getim(){}
        int getnumar(){return nr;}
        string getsir(){}
        void setnume(string nume);
        friend class biblioteca;

};

#endif // NUMERIC_H
