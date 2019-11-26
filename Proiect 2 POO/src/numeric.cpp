#include "numeric.h"
istream & operator>>(istream &in,numeric &a)
{ in>>a.nume;
  in>>a.nr;
}
ostream  &operator<<(ostream &out,numeric &a)
{ out<<a.nume<<" ";
  out<<a.nr<<'\n';
}
string numeric::getnume()
{ return nume;
}
int numeric::getnr()
{ return nr;
}
void numeric::setnume(string nume)
{ this->nume=nume;
}
void numeric::setnumar(int nr)
{  this->nr=nr;

}
numeric::~numeric()
{ nr=NULL;
}

