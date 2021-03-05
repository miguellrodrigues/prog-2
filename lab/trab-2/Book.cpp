#include "Book.hpp"

#include <utility>
#include <sstream>

Book::Book(string title, float price, unsigned int pages) : Publication(std::move(title), price), pages(pages) {

}

unsigned int Book::getPages() const {
    return this->pages;
}

void Book::setPages(unsigned int i) {
    this->pages = i;
}

string Book::toString() {
    std::stringstream res;

    res << Publication::toString()
        << "Pages: " << getPages() << "\n";

    return res.str();
}
