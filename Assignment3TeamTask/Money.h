#include <iostream>
#ifndef MONEY_H
#define MONEY_H
#include "Product.h"

using namespace std;


class Money : public Product
{
    public:

        Money();/// Empty Constructor.
        Money(double amount, double price);/// parameterize
        double paid; /// Will accept the amount that the user will pay
        double reminder = 0; /// initial value for the reminder of the process
        double pprice; /// will accept the price of product that the user buy.
        void calculate_remainder(double amount, double price); /// function that has two argument , the first for the user money , second for price of product.
        bool enugh_money; /// will use to determine if the input of user valid or not.



    protected:

    private:
};

#endif // MONEY_H
