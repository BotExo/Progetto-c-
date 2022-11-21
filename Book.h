#ifndef BOOK_H
#define BOOK_H
#include "Date.h"
#include <iostream>
#include <vector>
#include <string>

class Book
{
    public:
        Book() ; //costruttore
        Book(std::string Book_author_name, std::string Book_author_lastname, std::string Book_title, std::string ISBN, std::string copyright, bool isBorrowed);
        void setBook_title(const std::string BT); //imposta titolo
        std::string getBook_title() const; //ritorna titolo
        void setBook_author_name(const std::string BAN); //mposta autore nome
        std::string getBook_author_name() const; //ritorna nome autore
        void setBook_author_lastname(const std::string BAL); //imposta cognome autore
        std::string getBook_author_lastname() const; //ritorna cognome autore
        void setISBN(std::string IS); //imposta isbn 
        std::string getISBN() const; //ritorna isbn
        void setCopyright(Date CR); //imposta anno copyright
        Date getCopyright() const; //ritorna anno copyright
        //Book(const string &bt, const string &ban, const string &bal, long ISB, int py);
        //Book(const Book &BI);
        //void modify(Book b);
        bool operator>=(const Book &b);
        bool operator==(Book b);
        /*void modify(Book b);*/
        void printBooks(Book& b);

    private:

        std::string Book_title;
        std::string Book_author_lastname; //cognome autore
        std::string Book_author_name; //nome autore
        std::string ISBN; //isbn DA IMPLEMENTARE CONTROLLO
        Date copyright; //anno copyright
        bool isBorrowed; //se in noleggio o libero
};
#endif