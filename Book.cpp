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

/*void Book::setISBN(std::string IS) 
{ 
    ISBN = IS; 
}*/

void Book::setISBN(std::string IS) 
{ 
    if(IS.at(3) != '-' || IS.at(7) != '-' || IS.at(11) != '-')
        throw Invalid_ISBN();
    for(int i = 0; i < IS.length()-2; i++)
    {   if(i == 3 || i == 7)
            i++;
        if(std::isdigit(IS.at(i)) == 0)
            throw Invalid_ISBN();
    }
    if(std::isdigit(IS.at(IS.length()-1)) == 0 && tolower(IS.at(IS.length()-1)) != 'a' && tolower(IS.at(IS.length()-1)) != 'b' && tolower(IS.at(IS.length()-1)) != 'c' && tolower(IS.at(IS.length()-1)) != 'd' && tolower(IS.at(IS.length()-1)) != 'e' && tolower(IS.at(IS.length()-1)) != 'f' && tolower(IS.at(IS.length()-1)) != 'g' && tolower(IS.at(IS.length()-1)) != 'h' && tolower(IS.at(IS.length()-1)) != 'i' && tolower(IS.at(IS.length()-1)) != 'j' && tolower(IS.at(IS.length()-1)) != 'k' && tolower(IS.at(IS.length()-1)) != 'l' && tolower(IS.at(IS.length()-1)) != 'm' && tolower(IS.at(IS.length()-1)) != 'n' && tolower(IS.at(IS.length()-1)) != 'o' && tolower(IS.at(IS.length()-1)) != 'p' && tolower(IS.at(IS.length()-1)) != 'q' && tolower(IS.at(IS.length()-1)) != 'r' && tolower(IS.at(IS.length()-1)) != 's' && tolower(IS.at(IS.length()-1)) != 't' && tolower(IS.at(IS.length()-1)) != 'u' && tolower(IS.at(IS.length()-1)) != 'v' && tolower(IS.at(IS.length()-1)) != 'w' && tolower(IS.at(IS.length()-1)) != 'x' && tolower(IS.at(IS.length()-1)) != 'y' && tolower(IS.at(IS.length()-1)) != 'z')
        throw Invalid_ISBN();
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

bool Book::operator!=(const Book &b)
{
    bool different = false;
    for(int i = 0; i < ISBN.length(); i++)
    {   if(ISBN.at(i) == b.getISBN().at(i))
            different = false;
        else
            return true;
    }
    return different;
}

bool Book::operator==(Book b)
{
    bool equal = false;
    for(int i = 0; i < ISBN.length(); i++)
    {   if(ISBN.at(i) == b.getISBN().at(i))
            equal = true;
        else
            return false;
    }
    return equal;
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