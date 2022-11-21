#ifndef Date_h
#define Date_h
#include <iostream>


class Date
{    public:
        class Invalid {};
        Date();
        Date(int g, int m, int a);
        int day();
        int month();
        int year();
        bool is_valid();
        static Date date_toDate(std::string CR);
    private:
        int giorno, mese, anno;
        
        bool is_leap_year();
};

#endif 
