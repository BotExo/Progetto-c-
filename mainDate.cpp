
#include <iostream>
#include "Date.cpp"
using namespace std;

int main()
{
    int d = 0;
    int m = 0;
    int y = 0;
    cout << "inserire data" << endl;
    cin >> d;
    cin >> m;
    cin >> y;
    try
    {   Date a = Date(d, m, y);
        cout << "il giorno è: " << a.day() <<endl;
        cout << "il mese è: " << a.month() <<endl;
        cout << "l'anno è: " << a.year() <<endl;
    }
    catch(Date::Invalid)
    {
        cout<<"Data non valida" <<endl;
    }
}
