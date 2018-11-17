
#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
using namespace std;

class Product
{
    public:
        Product();/// Empty Constructor.
        Product(int number_of_Product); /// parameterize
        int Product_number; /// will receive the number of the product in the main menu.
        static double Product_price; /// Make it static to change depend on the number of the product.
        void return_price(int Product_number); /// function that take the number of product in the menu and return the price of it
        static int stock[10]; /// static array to change the value of quantities everywhere.

        bool Stock1(int pnum);/// Boolean function to check the availability of the product.

        void curr_stock(int pnum);/// to display the number of remaining elements.


    protected:


    private:
};

#endif // PRODUCT_H
