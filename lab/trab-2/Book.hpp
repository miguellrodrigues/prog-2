#ifndef BOOK_HPP
#define BOOK_HPP

#include "Publication.hpp"
#include <string>

using std::string;

class Book : public Publication {

public:
    Book(string title, float price, unsigned int pages);

    unsigned int getPages() const;

    void setPages(unsigned int pages);

    string toString() override;

private:
    unsigned int pages;
};

#endif