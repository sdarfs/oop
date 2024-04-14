#include <iostream>
#include "Order.h"
int main() {
    cout << "1 - Proxy" << endl;
    int type = 0;

    cin >> type;
    switch (type){

        case(1):{
            cout << "Order - 102030, 89996541965" << endl << endl
                 << "Usual:" << endl;
            cout << "1 - 102030" << endl << "2 - 89996541965" << endl;
            IOrder* o1 = new OrderForBuyer(102030, 79110218963, 127245614);
            cout << "1:" << endl;
            o1->getTicketForFilm(102030);
            cout << "2:" << endl;
            o1->getTicketForFilm(79110218963);
            cout << "3:" << endl;
            o1->getTicketForFilm(123);
            cout << endl << "Proxy:" << endl;
            cout << "1 - 102030" << endl << "2 - 89996541965" <<  endl;
            IOrder* po1 = new ProxyOrder(102030, 79110218963, 127245614);
            cout << "1:" << endl;
            po1->getTicketForFilm(102030);
            cout << "2:" << endl;
            po1->getTicketForFilm(79110218963);

            break;


        }



    }

}
