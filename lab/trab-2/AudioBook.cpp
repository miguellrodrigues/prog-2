//
// Created by miguel on 05/03/2021.
//

#include "AudioBook.hpp"

#include <utility>
#include <sstream>

AudioBook::AudioBook(string title, float price, AudioBook::Duration duration): Publication(std::move(title), price), duration(duration) {

}

AudioBook::Duration AudioBook::getDuration() {
    return this->duration;
}

void AudioBook::setDuration(AudioBook::Duration duration) {
    this->duration = duration;
}

string AudioBook::toString() {
    std::stringstream res;

    res << Publication::toString()
        << "Hours: " << getDuration().hours << "\n"
        << "Minutes: " << getDuration().minutes << "\n"
        << "Seconds: " << getDuration().seconds << "\n";

    return res.str();
}
