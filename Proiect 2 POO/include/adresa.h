#ifndef ADRESA_H
#define ADRESA_H
#include<iostream>
#include<cstring>
#include <informatii.h>
using namespace std;

class adresa:public informatii
{   private:
        string tara,judet,oras,strada;
        int numar;
    public:
        void afisare()const
        {  cout<<"Tara este:"<<tara<<", judetul este:"<<judet<<", orasul este:"<<oras<<", strada este:"<<strada<<", iar numarul este:"<<numar<<'\n';

        }
        adresa();
        adresa(string nume=" ",string tara=" ",string judet=" ",string oras=" ",string strada=" ",int numar=0):informatii(nume),tara(tara),judet(judet),oras(oras),strada(strada),numar(numar){}
        ~adresa();
        friend istream & operator>>(istream &in,adresa &a);
        friend ostream & operator<<(ostream &out,adresa &a);
        string getnume();
        void setnume(string nume);
        friend class biblioteca;
};
#endif // ADRESA_H
