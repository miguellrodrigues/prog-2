#ifndef PUBLICATION_HPP
#define PUBLICATION_HPP

#include <string>

using std::string;

class Publication {

public:
    Publication(string  title, float price);

    string getTitle();

    float getPrice();

    void setTitle(string title);

    void setPrice(float price);

private:
    string title;
    float price;
};

#endif