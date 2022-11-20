#include <iostream>
#ifndef Date_h
#define Date_h

class Date
{    public:
        class Invalid {};
        Date();
        Date(int g, int m, int a);
        int day();
        int month();
        int year();
    private:
        int giorno, mese, anno;
        bool is_valid();
        bool is_leap_year();
};

#endif /* Date_hpp */
