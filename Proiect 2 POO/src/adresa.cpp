#include "adresa.h"
istream & operator>>(istream &in,adresa &a)
{ in>>a.nume;
  in>>a.tara;
  in>>a.judet;
  in>>a.oras;
  in>>a.strada;
  in>>a.numar;
}
ostream & operator<<(ostream &out,adresa &a)
{ out<<a.nume;
  out<<a.tara;
  out<<a.judet;
  out<<a.oras;
  out<<a.strada;
  out<<a.numar;
}
string adresa::getnume()
{ return nume;
}
void adresa::setnume(string nume)
{ this->nume=nume;
}
adresa::~adresa()
{    tara="";
     judet="";
     oras="";
     strada="";
     numar=0;
}
