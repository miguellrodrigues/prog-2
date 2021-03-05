#ifndef BOOK_HPP
#define BOOK_HPP

#include "Publication.hpp"
#include <string>

using std::string;

class Book : public Publication {

public:
    Book(string title, float price, unsigned int pages);

    unsigned int getPages();

    void setPages(unsigned int pages);

private:
    unsigned int pages;
};

#endif