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
        virtual string getnume()=0;
        virtual void setnume(string nume)=0;
    friend class biblioteca;


};
#endif // INFORMATII_H
