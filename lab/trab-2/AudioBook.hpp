//
// Created by miguel on 05/03/2021.
//

#ifndef AUDIOBOOK_HPP
#define AUDIOBOOK_HPP

#include "Publication.hpp"
#include <string>

using std::string;

class AudioBook : public Publication {

public:
    struct duration {
        unsigned int hours;
        unsigned int minutes;
        unsigned int seconds;
    } typedef Duration;

    AudioBook(string title, float price, AudioBook::Duration duration);

    Duration getDuration();

    void setDuration(Duration duration);

    string toString() override;

private:
    Duration duration;
};

#endif //TRAB_2_AUDIOBOOK_HPP
