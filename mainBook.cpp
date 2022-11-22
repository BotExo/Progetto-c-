#include <iostream>
#include <string>
#include "Book.h"
#include "Date.h"
using namespace std;

int main()
{
    std::vector<Book> shelf(10);

    Book book1("David1", "Foster Wallace1", "Una cosa divertente che non faro' mai piu1", "887-521-837-4", "16/12/1998", true);
    book1.setBook_author_lastname("CambioCognome1");
    Book book2("David2", "Foster Wallace2", "Una cosa divertente che non faro' mai piu2", "887-521-837-4", "16/12/1998", false);
    book2.setBook_author_name("CambioNome2");
    Book book3("David3", "Foster Wallace3", "Una cosa divertente che non faro' mai piu3", "887-521-837-4", "16/12/1998", true);
    book3.setCopyright("01/01/2001");
    Book book4("David4", "Foster Wallace4", "Una cosa divertente che non faro' mai piu4", "887-521-837-4", "16/12/1998", false);
    book4.setISBN("100-000-000-4");
    Book book5("David5", "Foster Wallace5", "Una cosa divertente che non faro' mai piu5", "887-521-837-4", "16-12-1998", true);
    Book my_favourite_book("David", "Foster Wallace", "Una cosa divertenteche non faro' mai piu'", "887-521-837-4");
    shelf.push_back(book1);
    shelf.push_back(book2);
    shelf.push_back(book3);
    shelf.push_back(book4);
    shelf.push_back(book5);
    shelf.push_back(my_favourite_book);
   
    /*for (Book bk : shelf) {
        cout << "Nome autore: " << bk.getBook_author_name() << ", Cognome: " << bk.getBook_author_lastname() << ", Titolo: " << bk.getBook_title() <<
        ", ISBN: " << bk.getISBN() << ", Giorno/Mese/Anno di pubblicazione:" << (bk.getCopyright()).day() << " " << (bk.getCopyright()).month() << " " <<
        (bk.getCopyright()).year() << std::endl;
    }*/
    
    std::cout << "prova stampa con overload operatore<<: \n" ;
    std::cout << my_favourite_book;
    std::cout << book3;

    
    std::cout << "prova confronto con operatore ==: \n" ;
    if(book1 == book4){
        std::cout << "vero, sono uguali \n";
    } else {
        std::cout << "falso, sono diversi \n";
    }
    
    std::cout << "prova confronto con operatore !=: \n" ;
    if(book1 != book4){
        std::cout << "vero, sono diversi \n";
    } else {
        std::cout << "falso, sono uguali \n";
    }


    
    return 0;
}