#include "Book.hpp"

#include <utility>

Book::Book(string title, float price, unsigned int pages) : Publication(std::move(title), price), pages(pages) {

}

unsigned int Book::getPages() {
    return this->pages;
}

void Book::setPages(unsigned int pages) {
    this->pages = pages;
}
