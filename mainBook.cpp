#include <iostream>
#include <string>
#include "Book.cpp"
using namespace std;

int main()
{
    Books b{{"Titolo 1", "Autore 1", "Casa 1", 100, 9781863, 1468, 2009},
            {"Titolo 2", "Autore 2", "Casa 2", 200, 9780755, 57.4, 1997},
            {"Titolo 3", "Autore 3", "Casa 3", 300, 780552, 35.5, 2003}};

    for (bool again{true}; again;)
    {
        int ch{};

        cout << "\nBook Information\n";
        cout << "\n1. search the book by Book Title and by ISBN";
        cout << "\n2. show the number of copies in stock, set the number of copies in stock, update the number of copies in stock";
        cout << "\n3. Modify";
        cout << "\n4. print the information of the books";
        cout << "\n5. compare based on Publication Year";
        cout << "\n6. Exit";
        cout << "\n\nEnter Your Choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            search(b);
            break;

        case 2:
            copiesStock(b);
            break;

        case 3:
            modify(b);
            break;

        case 4:
            for (int i = 0; i < nob; i++)
                if (!b[i].getBook_Title().empty())
                    cout << b[i] << '\n';

            break;

        case 5:
            cout << "To do\n";
            break;

        case 6:
            again = false;
            break;

        default:
            cout << "\n wrong choice";
            break;
        }
    }
}