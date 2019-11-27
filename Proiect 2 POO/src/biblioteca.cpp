#include "biblioteca.h"
#include <cstring>
#include <cstdlib>
#include <vector>
#include <typeinfo>
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
     int c,i,ok=0;
     cout<<"Tipul de informatie este:";
     cin>>c;
     cout<<"Numele informatiei este:";
     cin>>nume;
     if(c==1)
     {   cout<<"Introduceti numarul:";
         cin>>numar;
         for(i=0;i<nr_inf;i++)
         {  if(inf[i]->getnume()==nume)
            {  if(typeid(*inf[i])==typeid(numeric))
               {  inf[i]->setnumar(inf[i]->getnumar()+numar);
                  ok=1;
                  break;
               }
               else
               { ok=1;
                 cout<<"eroare(2 informatii cu acelasi nume de tip diferit)\n";
               }
            }
         }
         if(ok==0)
         {   inf.push_back(new numeric(nume,numar));
            cout<<"ID-ul este:";
            cin>>n;
            id.push_back(n);
            nr_inf++;
         }
     }
     if(c==2)
     {   cout<<"Introduceti sirul:";
         cin>>sir;
         string sir2;
         for(i=0;i<nr_inf;i++)
         {  if(inf[i]->getnume()==nume)
          {  if(typeid(*inf[i])==typeid(text))
             {  sir2=inf[i]->getsir();
                inf[i]->setsir(sir);//aici am de rezolvat
                ok=1;
             }
             else
             {  ok=1;
                cout<<"eroare(2 informatii cu acelasi nume de tip diferit)\n";
             }
             break;
          }
         }
         if(ok==0)
        {   inf.push_back(new text(nume,sir));
            cout<<"ID-ul este:";
            cin>>n;
            id.push_back(n);
            nr_inf++;
        }
     }
     if(c==3)
     { cout<<"Introduceti partea reala si partea imaginara:";
       cin>>re>>im;
       for(i=0;i<nr_inf;i++)
       {     if(inf[i]->getnume()==nume)
             {  if(typeid(*inf[i])==typeid(matematic))
                {    inf[i]->setre(re+inf[i]->getre());
                     inf[i]->setim(im+inf[i]->getim());
                     ok=1;
                }
                else
                {  ok=1;
                   cout<<"eroare(2 informatii cu acelasi nume de tip diferit)\n";
                }
                break;
              }


       }
        if(ok==0)
        {   inf.push_back(new matematic(nume,re,im));
            cout<<"ID-ul este:";
            cin>>n;
            id.push_back(n);
            nr_inf++;
        }
     }
     if(c==4)
     { for(i=0;i<nr_inf;i++)
       {  if(inf[i]->getnume()==nume)
          {  if(typeid(*inf[i])==typeid(adresa))
             {  cout<<"Eroare.\n";
                ok=1;
                break;
             }
             else
             {  ok=1;
                cout<<"eroare(2 informatii cu acelasi nume de tip diferit)\n";
             }
          }
       }
       if(ok==0)
       {    cout<<"Introduceti tara, judetul, orasul, strada, numarul:\n";
            cin>>tara>>judet>>oras>>strada>>numar;
            inf.push_back(new adresa(nume,tara,judet,oras,strada,numar));
            cout<<"ID-ul este:";
            cin>>n;
            id.push_back(n);
            nr_inf++;
       }
    }
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
      {  id.erase(id.begin()+i);
         inf.erase(inf.begin()+i);
         nr_inf--;
      }
   }
}
void biblioteca::cautare(int n)
{ int i,ok=0;
  for(i=0;i<nr_inf;i++)
     if(typeid(*inf[i])==typeid(numeric))
     { if( inf[i]->getnumar()==n)
       {   inf[i]->afisare();
           ok=1;
       }
     }
  if(ok==0)
      cout<<"Nu exista o informatie cu aceasta valoare.\n";
}
void biblioteca::afisare()
{ int i;
  for(i=0;i<nr_inf;i++)
  {  inf[i]->afisare();
  }
}
