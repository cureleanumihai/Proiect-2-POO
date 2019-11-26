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
{   int n;
    biblioteca b;
    b.adaugare();
    b.adaugare();
    b.afisare();
    cin>>n;
    b.regasire(n);
    return 0;
}
