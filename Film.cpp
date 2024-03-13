//
// Created by Daria on 13.03.2024.
//

#include "Film.h"

void Film::performallGenre() {
    for (vector<igenre>::iterator it = items.begin(); it != items.end();
         it++) {
        (*it)->doGenre();
    }
}

void Film::addGenre(IGenre *newGenre) {
    items.push_back(newGenre);
}
