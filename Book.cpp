#include "Book.h"
#include <iostream>


const size_t nob{25};

Book::Book() {}

Book::Book(const string &bt, const string &ba, const string &bp, int noc, long ISB, double pr, int py) : Book_Title(bt), Book_author(ba), Book_publisher(bp), Number_Of_Copies(noc), ISBN(ISB), price(pr), Publication_Year(py) {}

Book::Book(const Book &BI)
{
    Book_Title(BI.Book_Title);
    Book_author(BI.Book_author); 
    Book_publisher(BI.Book_publisher);
    Number_Of_Copies(BI.Number_Of_Copies); 
    ISBN(BI.ISBN); 
    price(BI.price); 
    Publication_Year(BI.Publication_Year)
}

void Book::setBook_Title(const string &BT) 
{ 
    Book_Title = BT; 
}
    
void Book::setBook_author(const string &BA) 
{ 
    Book_author = BA; 
}

void Book::setBook_publisher(const string &BP) 
{ 
    Book_publisher = BP; 
}

void Book::setNumber_Of_Copies(int NOC) 
{ 
    Number_Of_Copies = NOC; 
}

void Book::setISBN(int IS) 
{ 
    ISBN = IS; 
}

void Book::setprice(double pr) 
{ 
    price = pr; 
}

void Book::setPublication_Year(int PY) 
{ 
    Publication_Year = PY; 
}

string Book::getBook_Title() const 
{ 
    return Book_Title; 
}

string Book::getBook_author() const 
{ 
    return Book_author; 
}

string Book::getBook_publisher() const 
{ 
    return Book_publisher; 
}

int Book::getNumber_Of_Copies() const 
{
    return Number_Of_Copies; 
}

int Book::getISBN() const 
{ 
    return ISBN; 
}

double Book::getprice() const 
{
    return price; 
}

int Book::getPublication_Year() const 
{ 
    return Publication_Year; 
}

bool Book::operator>=(const Book &b)
{
    return Publication_Year >= b.Publication_Year;
}

bool Book::operator==(Book b)
{
    return Publication_Year == b.Publication_Year;
}

using Books = Book[nob];

void Book::modify(Books b)
{
    // DA FARE
}

ostream &operator<<(ostream &os, const Book bi)
{
    if (!bi.getBook_Title().empty())
    {
        os << bi.getBook_Title() << '\n';
        os << bi.getBook_author() << '\n';
        os << bi.getBook_publisher() << '\n';
        os << bi.getNumber_Of_Copies() << '\n';
        os << bi.getISBN() << '\n';
        os << bi.getprice() << '\n';
        os << bi.getPublication_Year() << '\n';
    }

    return os;
}


void Book::search(const Books b)
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
}

void Book::copiesStock(Books b)
{
    string bt;
    int newC{};

    cout << "Enter the book title: ";
    getline(cin >> ws, bt);

    for (size_t i = 0; i < nob; ++i)
        if (bt == b[i].getBook_Title())
        {
            cout << "Number of copies in stock: ";
            cout << b[i].getNumber_Of_Copies();

            cout << "\nPlease Set the number of copies in stock: ";
            cin >> newC;

            b[i].setNumber_Of_Copies(newC);

            cout << "\nUpdated the number of copies in stock: " << b[i].getNumber_Of_Copies() << '\n';
            return;
        }

    cout << "Not found\n";
}