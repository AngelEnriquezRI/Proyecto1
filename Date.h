#pragma once
#include<string>

using namespace std;

class Date{
    private:
        int day, month, year;
    public:
        Date( int inMonth, int inDay, int inYear): month(inMonth), day(inDay), year(inYear){};
    int formatDay(){
        return month,day,year;
    }
    void increment(){
        day = day++;
    }

    //Esto es para Prefix
    Date& operator ++(){
        ++day;
        
        if(day>31){
            day=1;     //el día es 1
            ++month;   //y el mes es el siguiente
            //si después de incrementar el mes es mayor a 12
            if(month>12){
                month=1;  //el mes es enero
                ++year;  //del año siguiente
            }
        }
        //si es febrero y después de incrementar el día es 29
        else if(day==29 && month == 2){
            day=1;             //es el día 1
            ++month;             //del mes siguiente
        }
        //si el día es 31 y es un mes de 30 días
        else if(day==31 && (month==4 || month==6 || month==9 || month==11)){
            day=1;             //es el día 1
            ++month;             //del mes siguiente
        }
        
        return *this;
    }
    Date& operator --(){
        --day;
        
        if(day<1){
            day=31;         //el día es 31
            --month;        //y el mes es el anterior
            //si después de disminuir el mes es menor a 1
            if(month<1){
                month=12;   //el mes es diciembre
                --year;     //del año pasado
            }
        }
        //si es febrero
        else if(day==31 && month == 3){
            day=28;             //es el día 1
            --month;            //del mes febrero
        }
        //si el día es 1 y es un mes de 30 días
        else if(day==31 && (month==4 || month==6 || month==9 || month==11)){
            day=31;              //es el día 31
            --month;            //del mes anterior
        }

        return *this;
    }

    //Esto es para Profix
    Date operator ++(int){
        Date copy(month,day,year);
        ++day;
        
        if(day>31){
            day=1;     //el día es 1
            ++month;   //y el mes es el siguiente
            //si después de incrementar el mes es mayor a 12
            if(month>12){
                month=1;  //el mes es enero
                ++year;  //del año siguiente
            }
        }
        //si es febrero y después de incrementar el día es 29
        else if(day==29 && month == 2){
            day=1;             //es el día 1
            ++month;             //del mes siguiente
        }
        //si el día es 31 y es un mes de 30 días
        else if(day==31 && (month==4 || month==6 || month==9 || month==11)){
            day=1;             //es el día 1
            ++month;             //del mes siguiente
        }

        return copy;
    }
    Date operator --(int){
        Date copy(month,day,year);
        --day;

        if(day<1){
            day=31;         //el día es 31
            --month;        //y el mes es el anterior
            //si después de disminuir el mes es menor a 1
            if(month<1){
                month=12;   //el mes es diciembre
                --year;     //del año pasado
            }
        }
        //si es febrero
        else if(day==31 && month == 3){
            day=28;             //es el día 1
            --month;            //del mes febrero
        }
        //si el día es 1 y es un mes de 30 días
        else if(day==31 && (month==4 || month==6 || month==9 || month==11)){
            day=31;              //es el día 31
            --month;            //del mes anterior
        }

        return copy;
    }
};