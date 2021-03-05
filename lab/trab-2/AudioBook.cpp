//
// Created by miguel on 05/03/2021.
//

#include "AudioBook.hpp"

#include <utility>

AudioBook::AudioBook(string title, float price, AudioBook::Duration duration): Publication(std::move(title), price), duration(duration) {

}

AudioBook::Duration AudioBook::getDuration() {
    return this->duration;
}

void AudioBook::setDuration(AudioBook::Duration duration) {
    this->duration = duration;
}

string AudioBook::toString() {
    string res = Publication::toString();

    res.append("Hours: ");
    res.append(std::to_string(getDuration().hours));
    res.append("\n");
    res.append("Minutes: ");
    res.append(std::to_string(getDuration().minutes));
    res.append("\n");
    res.append("Seconds: ");
    res.append(std::to_string(getDuration().seconds));
    res.append("\n");

    return res;
}
