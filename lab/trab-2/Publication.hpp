#ifndef PUBLICATION_HPP
#define PUBLICATION_HPP

#include <string>

using std::string;

class Publication {

public:
    Publication(string  title, float price);

    string getTitle();

    float getPrice() const;

    void setTitle(string t);

    void setPrice(float d);

    virtual string toString();

private:
    string title;
    float price;
};

#endif