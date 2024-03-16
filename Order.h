//
// Created by Daria on 13.03.2024.
//

#ifndef OOP_ORDER_H
#define OOP_ORDER_H

#include <iostream>
using namespace std;

class IOrder
{
public:
    virtual void getTicketForFilm(int) = 0;
};

class OrderForBuyer : public IOrder
{
public:
    int number;
    int phoneNumber;
    int Code;
    void getTicketForFilm(int check) override
    {
        if (check == phoneNumber)
            cout << "Film code: " << Code << endl << "Order number: " << number << endl;
        if (check == number)
            cout << "Film code: " << Code << endl << "Phone number: " << phoneNumber << endl;
        else cout << "No any orders" << endl;
    }
    OrderForBuyer(int num, int phone, int code) {
        number = num;
        phoneNumber = phone;
        Code = code;
    }
};

class ProxyOrder : public IOrder
{
private:
    OrderForBuyer* prox;
    void log() { cout << "It is clear logs for Proxy" << endl; }
public:
    void getTicketForFilm(int check) override
    {
        log();
        if (check == prox->phoneNumber)
            cout << "Film code: " << prox->Code << endl << "Order number: " << prox->number << endl;
        else cout << "No any orders" << endl;
    }
    ProxyOrder(int num, int phone, int code)
    {
        prox = new OrderForBuyer(num, phone, code);
    }
    ~ProxyOrder() { delete prox; }
};
#endif //OOP_ORDER_H
