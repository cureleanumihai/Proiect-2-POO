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
void numeric::setnume(string nume)
{ this->nume=nume;
}
numeric::~numeric()
{ nr=NULL;
}

