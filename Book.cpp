#include "Book.h"
#include <iostream>
#include <vector>

Book::Book(std::string Book_author_name, std::string Book_author_lastname, std::string Book_title, std::string ISBN, std::string copyright, bool isBorrowed){
    Book_author_name = Book_author_name;
    Book_author_lastname = Book_author_lastname;
    Book_title = Book_title;
    ISBN = ISBN;
    copyright = copyright;
    isBorrowed = isBorrowed;
};

Book::Book() {
    Book_author_name = "";
    Book_author_lastname = "";
    Book_title = "";
    ISBN = "";
    copyright = "";
    isBorrowed = "";
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

void Book::setCopyright(std::string PY) 
{ 
    copyright = PY; 
}

std::string Book::getCopyright() const 
{ 
    return copyright; 
}

/*void Book::printBooks(Book& b)
{
		std::cout << b.BookTitle << std::endl;
}*/

bool Book::operator>=(const Book &b)
{
    return copyright >= b.copyright;
}

bool Book::operator==(Book b)
{
    return copyright == b.copyright;
}

//using Books = Book[nob];

/*void Book::modify(Books b)
{
    // DA FARE
}*/

std::ostream &operator<<(std::ostream &os, const Book b)
{
    if (!b.getBook_title().empty())
    {
        os << b.getBook_title() << '\n';
        os << b.getBook_author_name() << '\n';
        os << b.getBook_author_lastname() << '\n';
        os << b.getISBN() << '\n';
        os << b.getCopyright() << '\n';
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

/*void Book::copiesStock(Books b)
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
}*/

/*void Book::my_favourite_book(Book& b,std::string Book_author_name, std::string Book_author_lastname, std::string Book_Title, std::string ISBN ){
    b.Book_author_name = Book_author_name;
    b.Book_author_lastname = Book_author_lastname;
    b.Book_Title = Book_Title;
    b.ISBN = ISBN ;
    nodi.push_back(b);
}*/

/*void Book::print_node(Book& b){
  std::cout << b.Book_author_name << " " << b.Book_author_lastname << " " << b.Book_Title << " " << b.ISBN << std::endl;
}*/