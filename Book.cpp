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

void Book::setCopyright(Date CR) 
{ 
    copyright = CR; 
}

Date Book::getCopyright() const 
{ 
    return copyright; 
}

/*bool Book::operator>=(const Book &b)
{
    return copyright >= b.copyright;
}*/

/*bool Book::operator==(Book b)
{
    return copyright == b.copyright;
}*/

std::ostream &operator<<(std::ostream &os, const Book b)
{
    if (!b.getBook_title().empty())
    {
        os << b.getBook_title() << '\n';
        os << b.getBook_author_name() << '\n';
        os << b.getBook_author_lastname() << '\n';
        os << b.getISBN() << '\n';
        /*os << b.getCopyright() << '\n';*/
    }

    return os;
}


/*void Book::search(const Books b)
{
    string bt;
    int is{};

    cout << "Please Enter the ISBN of the book you want to search for: ";
    cin >> is;

    cout << "Please Enter the Book title you want to search for: ";
    getline(cin >> ws, bt);

    for (size_t i = 0; i < nob; ++i)
        if ((bt == b[i].getBook_Title()) && (is == b[i].getISBN()))
        {
            cout << "The book's info you searched for is:\n";
            cout << b[i] << '\n';
            return;
        }

    cout << "Not found\n";
}*/
