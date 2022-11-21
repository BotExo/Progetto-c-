#include <iostream>
#include <string>
#include "Book.h"
#include "Date.h"
using namespace std;

int main()
{
    std::vector<Book> shelf(10);

    Book book1("David1", "Foster Wallace1", "Una cosa divertente che non farò mai piu1", "1", "ciao1", true);
    book1.setBook_author_lastname("CambioCognome1");
    Book book2("David2", "Foster Wallace2", "Una cosa divertente che non farò mai piu2", "2", "ciao2", false);
    book2.setBook_author_name("CambioNome2");
    Book book3("David3", "Foster Wallace3", "Una cosa divertente che non farò mai piu3", "3", "ciao3", true);
    book3.setBook_title("CambioTitolo3");
    Book book4("David4", "Foster Wallace4", "Una cosa divertente che non farò mai piu4", "4", "ciao4", false);
    book4.setISBN("CambioISBN4");
    try
    {
        Book book5("David5", "Foster Wallace5", "Una cosa divertente che non farò mai piu5", "5", "50-50-5000", true);
        shelf.push_back(book5);
    }
    catch(Date::Invalid())
    {
        cout<<"Data non valida" <<endl;
    }
    
    

    

    shelf.push_back(book1);
    shelf.push_back(book2);
    shelf.push_back(book3);
    shelf.push_back(book4);
    
    
    try
    {
        for (Book bk : shelf) {
        cout << bk.getBook_author_name() << ", " << bk.getBook_author_lastname() << ", " << bk.getBook_title() << ", " << bk.getISBN() << ", " << bk.getCopyright() << std::endl;
        }
    }
    catch(Date::Invalid)
    {
        cout<<"Data non valida" <<endl;
    }

    return 0;
    /*Book my_favourite_book("David", "Foster Wallace", "Una cosa divertenteche non farò mai più", "887-521-837-4");*/
}