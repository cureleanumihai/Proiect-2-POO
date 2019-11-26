#include "text.h"
istream & operator>>(istream &in,text &a)
{ in>>a.nume;
  in>>a.sir;
}
ostream  &operator<<(ostream &out,text &a)
{ out<<a.nume<<" ";
  out<<a.sir<<'\n';
}
string text::getnume()
{ return nume;
}
void text::setnume(string nume)
{ this->nume=nume;
}
text::~text()
{    sir="";
}
