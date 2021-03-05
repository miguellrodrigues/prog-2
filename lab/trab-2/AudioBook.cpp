//
// Created by miguel on 05/03/2021.
//

#include "AudioBook.hpp"

#include <utility>

AudioBook::AudioBook(string title, float price, AudioBook::Duration duration): Publication(std::move(title), price) {

}

AudioBook::Duration AudioBook::getDuration() {
    return this->duration;
}

void AudioBook::setDuration(AudioBook::Duration duration) {
    this->duration = duration;
}
