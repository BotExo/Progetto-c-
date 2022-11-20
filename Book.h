#include <iostream>
#ifndef Book_h
#define Book_h
#include <string>

class Book
{
    public:
        Book();
        Book(const string &bt, const string &ba, const string &bp, int noc, long ISB, double pr, int py);
        Book(const Book &BI);
        void modify(Book b);
        void setBook_Title(const std::string &BT);
        void setBook_author(const std::string &BA);
        void setBook_publisher(const std::string &BP);
        void setNumber_Of_Copies(int NOC);
        void setISBN(int IS);
        void setprice(double pr);
        void setPublication_Year(int PY);
        std::string getBook_Title() const;
        std::string getBook_author() const;
        std::string getBook_publisher() const;
        int getNumber_Of_Copies() const; 
        int getISBN() const; 
        double getprice() const; 
        int getPublication_Year() const;
        bool operator>=(const Book &b);
        bool operator==(Book b);
    private:
        std::string Book_Title;
        std::string Book_author;
        std::string Book_publisher;
        int Number_Of_Copies{};
        long ISBN{};
        double price{};
        int Publication_Year{};
};

#endif