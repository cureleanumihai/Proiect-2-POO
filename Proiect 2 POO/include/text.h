#ifndef TEXT_H
#define TEXT_H
#include<iostream>
#include<cstring>
#include <informatii.h>
using namespace std;

class text:public informatii
{   private:
        string sir;
    public:
        void afisare()const
        {  cout<<"Sirul de caractere este:"<<sir<<'\n';

        }
        text();
        text(string nume=" ",string sir=" "):informatii(nume),sir(sir){}
        ~text();
        friend istream & operator>>(istream &in,text &a);
        friend ostream & operator<<(ostream &out,text &a);
        string getnume();
        void setre(int re){}
        void setim(int im){}
        void setsir(string sir){this->sir=sir;}
        void setnumar(int numar){}
        int getre(){}
        int getim(){}
        int getnumar(){}
        string getsir(){return sir;}
        void setnume(string nume);
        friend class biblioteca;
};

#endif // TEXT_H
