#include "Publication.hpp"
#include <string>
#include <utility>

Publication::Publication(string  title, float price): title(std::move(title)), price(price) {

}

string Publication::getTitle() {
    return this->title;
}

float Publication::getPrice() {
    return this->price;
}

void Publication::setTitle(string title) {
    this->title = std::move(title);
}

void Publication::setPrice(float price) {
    this->price = price;
}
