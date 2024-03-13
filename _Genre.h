//
// Created by Daria on 13.03.2024.
//

#ifndef OOP__GENRE_H
#define OOP__GENRE_H
#include <iostream>
using namespace std;

//Интерфейс жанра
class IGenre{
public:
    virtual void doGenre() = 0;

};
//Конкретные делегаты
class HorrorGenre: public  IGenre{
public:
    void doGenre(){
        cout << "It is Horror Genre of Film\n";
    }


};
class DramaGenre: public  IGenre{
public:
    void doGenre(){
        cout << "It is Drama Genre of Film\n";
    }

};

class FantasyGenre: public  IGenre{
public:
    void doGenre(){
        cout << "It is Fantasy Genre of Film\n";
    }


};


#endif //OOP__GENRE_H
