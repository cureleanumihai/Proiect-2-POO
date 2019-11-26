#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#include <iostream>
#include "informatii.h"
#include "text.h"
#include "numeric.h"
#include "matematic.h"
#include "adresa.h"
#include <vector>
class biblioteca
{   private:
       vector<informatii*>inf;
       vector<int>id;
       int nr_inf=0;
    public:
        biblioteca();
        ~biblioteca();
        void afisare();
        void adaugare();
        void stergere(int n);
        void regasire(int n);
        void cautare();
};

#endif // BIBLIOTECA_H
