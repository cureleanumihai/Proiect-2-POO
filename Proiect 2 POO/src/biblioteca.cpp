#include "biblioteca.h"
#include <cstring>
#include <cstdlib>
#include <vector>
using namespace std;
biblioteca::biblioteca()
{ nr_inf=0;
}
biblioteca::~biblioteca()
{  inf.clear();
}
void biblioteca::adaugare()
{    string nume,sir,tara,judet,oras,strada;
     int numar,re,im,n;
     int c;
     cout<<"ID-ul este:";
     cin>>n;
     cout<<"Tipul de informatie este:";
     cin>>c;
     cout<<"Numele informatiei este:";
     cin>>nume;
     if(c==1)
     {   cout<<"Introduceti numarul:";
         cin>>numar;
         inf.push_back(new numeric(nume,numar));
     }
     if(c==2)
     {   cout<<"Introduceti sirul:";
         cin>>sir;
         inf.push_back(new text(nume,sir));
     }
     if(c==3)
     {  cout<<"Introduceti partea reala si partea imaginara:";
        cin>>re>>im;
        inf.push_back(new matematic(nume,re,im));
     }
     if(c==4)
     { cout<<"Introduceti tara, judetul, orasul, strada, numarul:\n";
       cin>>tara>>judet>>oras>>strada>>numar;
       inf.push_back(new adresa(nume,tara,judet,oras,strada,numar));
     }
     id.push_back(n);
     nr_inf++;
}
void biblioteca::regasire(int n)
{ int i,ok=0;
  for(i=0;i<nr_inf;i++)
  {   if(id[i]==n)
      {   inf[i]->afisare();
          ok=1;
      }
  }
  if(ok==0)
    cout<<"Nu exista o informatie cu acest ID.\n";
}
void biblioteca::stergere(int n)
{  int i;
   for(i=0;i<nr_inf;i++)
   {  if(id[i]==n)
      {  inf.erase(inf[i]);
         nr_inf--;
      }
   }
}
void biblioteca::afisare()
{ int i;
  for(i=0;i<nr_inf;i++)
     inf[i]->afisare();
}
