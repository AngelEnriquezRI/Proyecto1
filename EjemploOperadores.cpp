#include<iostream>
#include"Date.h"

using namespace std;

int main (){
    Date a(04,07,2022);
    //Usando funciones
    a.increment();
    cout<< a.formatDay();
    a.increment();
    cout<< a.formatDay();
    //Usando un Prefix
    ++a;
    cout<< a.formatDay();
    --a;
    cout<< a.formatDay();
    //Usando un Profix
    a++;
    cout<< a.formatDay();
    a--;
    cout<< a.formatDay();
}