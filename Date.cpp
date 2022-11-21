#include "Date.h"
#include "Book.h"
#include <iostream>

bool Date::is_leap_year()
{    if(anno % 4 == 0)
    {    if(anno % 100 == 0)
        {    if(anno % 400 == 0)
                return true;
            else
                return false;
        }
        else
            return true;
    }
    return false;
}

bool Date::is_valid()
{    if(giorno < 0 || giorno > 31 || mese >12)
        return false;
    if(!is_leap_year())
    {    if(mese == 2 && giorno > 28)
            return false;
    }
    if((mese == 4 || mese == 6 || mese == 9 || mese == 11) && giorno > 30)
        return false;
    return true;
}

Date::Date()
{   giorno = 0;
    mese = 0;
    anno = 0;
}

Date::Date(int g, int m, int a)
{
    giorno = g;
    mese = m;
    anno = a;
    if(!is_valid()) throw Invalid();
}


Date Date::date_toDate(std::string CR){
    int entered_giorno = stoi(CR.substr(0,2));
    int entered_mese = stoi(CR.substr(3,2));
    int entered_anno = stoi(CR.substr(6));
    std::cout << "creata data" << std::endl;
    Date data(entered_giorno,entered_mese,entered_anno);
    /*if(data.is_valid()){
        return data;
    } throw Invalid();*/
    return data;
};

int Date::day()
{    return giorno;
}

int Date::month()
{    return mese;
}

int Date::year()
{    return anno;
}
