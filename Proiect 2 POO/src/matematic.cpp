#include "matematic.h"
istream & operator>>(istream &in,matematic &a)
{ in>>a.nume;
  in>>a.re;
  in>>a.im;
}
ostream & operator<<(ostream &out,matematic &a)
{ out<<a.nume<<" ";
  out<<a.re<<"+"<<a.im<<'i'<<'\n';
}
string matematic::getnume()
{ return nume;
}
void matematic::setnume(string nume)
{ this->nume=nume;
}
matematic::~matematic()
{ re=NULL;
  im=NULL;
}

