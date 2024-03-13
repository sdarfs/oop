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
            cout << "Vendor code: " << vendorCode << endl << "Order number: " << number << endl;
        if (check == number)
            cout << "Vendor code: " << vendorCode << endl << "Phone number: " << phoneNumber << endl;
        else cout << "No any orders" << endl;
    }
    OrderForBuyer(int num, int phone, int vendor) {
        number = num;
        phoneNumber = phone;
        vendorCode = vendor;
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
            cout << "Vendor code: " << prox->vendorCode << endl << "Order number: " << prox->number << endl;
        else cout << "No any orders" << endl;
    }
    ProxyOrder(int num, int phone, int vendor)
    {
        prox = new OrderForBuyer(num, phone, vendor);
    }
    ~ProxyOrder() { delete prox; }
};
#endif //OOP_ORDER_H
