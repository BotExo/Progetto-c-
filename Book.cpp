#include "Book.h"
#include "Date.h"
#include <iostream>
#include <vector>


Book::Book(std::string BAN, std::string BAL, std::string BT, std::string IS, std::string CR, bool S){
    Book_author_name = BAN;
    Book_author_lastname = BAL;
    Book_title = BT;
    ISBN = IS;
    copyright = Date::date_toDate(CR);
    isBorrowed = S;
};

Book::Book() {
}

void Book::setBook_title(const std::string BT) 
{ 
    Book_title = BT; 
}

std::string Book::getBook_title() const 
{ 
    return Book_title; 
}

void Book::setBook_author_name(const std::string BAN) 
{ 
    Book_author_name = BAN; 
}

std::string Book::getBook_author_name() const 
{ 
    return Book_author_name; 
}

void Book::setBook_author_lastname(const std::string BAL) 
{ 
    Book_author_lastname = BAL; 
}

std::string Book::getBook_author_lastname() const 
{ 
    return Book_author_lastname; 
}

void Book::setISBN(std::string IS) 
{ 
    ISBN = IS; 
}

std::string Book::getISBN() const 
{ 
    return ISBN; 
}

void Book::setCopyright(std::string CR) 
{ 
    copyright = Date::date_toDate(CR); 
}

Date Book::getCopyright() const 
{ 
    return copyright; 
}

/*bool Book::operator==(Book b)
{
    return copyright == b.copyright;
}*/

std::ostream& operator << ( std::ostream& os, const Book& b )
{
        os << "Titolo: " << b.getBook_title() << '\n';
        os << "Autore: " <<b.getBook_author_name() << '\n';
        os << "Cognome: " << b.getBook_author_lastname() << '\n';
        os << "ISBN: " << b.getISBN() << '\n';
        os << "Giorno :" << (b.getCopyright()).day() << '\n';
        os << "Mese: " << (b.getCopyright()).month() << '\n';
        os << "Anno: " << (b.getCopyright()).year() << '\n';
    return os;
}


/*void Book::search(std::vector<Book> biblioteca)
{
    std::string bt;
    int is{};

    std::cout << "Please Enter the ISBN of the book you want to search for: ";
    std::cin >> is;
    
    for (Book bk: biblioteca)
        if ((bt == bk.getBook_title()) && (is))
        {
            std::cout << "The book's info you searched for is:\n";
            return;
        }

    std::cout << "Not found\n";
}
*/