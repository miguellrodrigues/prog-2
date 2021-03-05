#include "Publication.hpp"
#include <string>
#include <utility>
#include <sstream>
#include <iomanip>

Publication::Publication(string  title, float price): title(std::move(title)), price(price) {

}

string Publication::getTitle() {
    return this->title;
}

float Publication::getPrice() const {
    return this->price;
}

void Publication::setTitle(string t) {
    this->title = std::move(t);
}

void Publication::setPrice(float d) {
    this->price = d;
}

string Publication::toString() {
    std::stringstream res;

    res << "\nTitle: " << getTitle()
        << "\nPrice: R$ " << std::fixed << std::setprecision(2) << getPrice() << "\n";

    return res.str();
}
