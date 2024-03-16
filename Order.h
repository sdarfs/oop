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
    int vendorCode;
    void getTicketForFilm(int check) override
    {
        if (check == phoneNumber)
            cout <<  "Order number: " << number << endl;
        else cout << "No any orders" << endl;
    }
    OrderForBuyer(int num, int phone) {
        number = num;
        phoneNumber = phone;
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
            cout  << "Order number: " << prox->number << endl;
        else cout << "No any orders" << endl;
    }
    ProxyOrder(int num, int phone, int vendor)
    {
        prox = new OrderForBuyer(num, phone);
    }
    ~ProxyOrder() { delete prox; }
};
#endif //OOP_ORDER_H
