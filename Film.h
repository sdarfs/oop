//
// Created by Daria on 13.03.2024.
//

#ifndef OOP_FILM_H
#define OOP_FILM_H
#include "_Genre.h"
#include "iostream"
using namespace std;


//В классе Фильм реализуется подписка и выполнение действий
// с помощью делегирования
typedef IGenre *igenre;
class Film{
private:
    vector<igenre> items;
public:
    void performallGenre();
    void addGenre(IGenre *newGenre);
    Film(){
        items.clear();
    }
    ~Film();
};


#endif //OOP_FILM_H
