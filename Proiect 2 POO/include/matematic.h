#ifndef MATEMATIC_H
#define MATEMATIC_H
#include<iostream>
#include<cstring>
#include <informatii.h>
class matematic:public informatii
{   private:
        int re,im;
    public:
        void afisare()const
        {   if(im!=0 && re!=0)
               cout<<"Numarul este:"<<re<<"+"<<im<<"i"<<'\n';
            else
            {  if(re!=0)
                  cout<<"Numarul este:"<<re<<'\n';
               else
               {   if(im!=0)
                       cout<<"Numarul este:"<<im<<"i"<<'\n';
                   else
                       cout<<"Numarul este 0\n";
               }
            }

        }
        matematic();
        matematic(string nume=" ",int re=0,int im=0):informatii(nume),re(re),im(im){}
        ~matematic();
        friend istream & operator>>(istream &in,matematic &a);
        friend ostream & operator<<(ostream &out,matematic &a);
        string getnume();
        void setnume(string nume);
        friend class biblioteca;

};
#endif // MATEMATIC_H
