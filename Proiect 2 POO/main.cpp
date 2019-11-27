#include <iostream>
#include <text.h>
#include <informatii.h>
#include <numeric.h>
#include <text.h>
#include <biblioteca.h>
#include <adresa.h>
#include <cassert>
using namespace std;
int main()
{   int n,c;
    biblioteca b;
    cout<<"1-Adaugare\n2-Stergere dupa id\n3-Cautare dupa id\n4-Cautare dupa valoare\n5-Afisare\n0-STOP\n";
    cin>>c;
    while(c!=0)
    {  if(c==1)
          b.adaugare();
       if(c==2)
       {  cin>>n;
          b.stergere(n);
       }
       if(c==3)
       {  cin>>n;
          b.regasire(n);
       }
       if(c==4)
       {  cin>>n;
          b.cautare(n);
       }
       if(c==5)
          b.afisare();
       cin>>c;
    }
    return 0;
}
