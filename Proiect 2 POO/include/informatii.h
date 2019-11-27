#ifndef INFORMATII_H
#define INFORMATII_H
#include<iostream>
#include <stdexcept>
using namespace std;
class informatii
{   protected:
        string nume;
    public:
        virtual void afisare()const=0;
        informatii(string nume=" "):nume(nume){}
        informatii();
        ~informatii();
        virtual void setre(int re)=0;
        virtual void setim(int im)=0;
        virtual void setsir(string sir)=0;
        virtual void setnumar(int numar)=0;
        virtual int getre()=0;
        virtual int getim()=0;
        virtual int getnumar()=0;
        virtual string getsir()=0;
        virtual string getnume()=0;
        virtual void setnume(string nume)=0;
    friend class biblioteca;


};
#endif // INFORMATII_H
