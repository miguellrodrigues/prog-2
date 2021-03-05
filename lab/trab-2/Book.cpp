#include "Book.hpp"

#include <utility>

Book::Book(string title, float price, unsigned int pages) : Publication(std::move(title), price), pages(pages) {

}

unsigned int Book::getPages() const {
    return this->pages;
}

void Book::setPages(unsigned int pages) {
    this->pages = pages;
}

string Book::toString() {
    string res = Publication::toString();

    res.append("Pages: ");
    res.append(std::to_string(getPages()));
    res.append("\n");

    return res;
}
