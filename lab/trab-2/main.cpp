#include "Book.hpp"
#include "Publication.hpp"
#include "AudioBook.hpp"

#include <iostream>

using std::cout;
using std::endl;

int main() {
    auto *tlp = new Book("O Pequeno Príncipe", 22.9, 112);

    auto *hdg = new AudioBook("O homem de giz", 31.12, {10, 11, 5});

    cout << tlp->toString() << endl;

    cout << hdg->toString() << endl;

    return 0;
}