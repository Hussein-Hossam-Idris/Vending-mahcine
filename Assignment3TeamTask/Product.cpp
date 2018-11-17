#include "Product.h"
#include <iostream>
using namespace std;
double Product :: Product_price=0;
int Product::stock[10] = {10,10,10,10,10,10,10,10,10,10};

Product::Product()
{
    /// Empty constructor that has no benefit.

}

Product::Product(int number_of_Product){

/// pass the number of the product to function to display the price.
    return_price(number_of_Product);

}
void Product::curr_stock(int num){

/// The procedure goes like this:
///     1- check through the number of product.
///     2- minus one from the available quantity in stock "array".

    if(num == 1){

        cout << "The remaining quantity: " << --stock[0] << endl;
    }
    else if(num == 2){
        cout << "The remaining quantity: " << --stock[1] << endl;
    }
    else if(num == 3){
        cout << "The remaining quantity: " << --stock[2] << endl;
    }
    else if(num == 4){
        cout << "The remaining quantity: " << --stock[3] << endl;
    }
    else if(num == 5){
        cout << "The remaining quantity: " << --stock[4] << endl;
    }
    else if(num == 6){
        cout << "The remaining quantity: " << --stock[5] << endl;
    }
    else if(num == 7){
        cout << "The remaining quantity: " << --stock[6] << endl;
    }
    else if(num == 8){
        cout << "The remaining quantity: " << --stock[7] << endl;
    }
    else if(num == 9){
        cout << "The remaining quantity: " << --stock[8] << endl;
    }
    else if(num == 10){
        cout << "The remaining quantity: " << --stock[9] << endl;
    }


}
bool Product::Stock1(int num){

/// just check the availability of the product.

    if(num == 1){
        cout << "The available is: " << stock[0] << endl;
        return true;
    }
    else if(num == 2){
        cout << "The available is: " << stock[1] << endl;
        return true;
    }
    else if(num == 3){
        cout << "The available is: " << stock[2] << endl;
        return true;
    }
    else if(num == 4){
        cout << "The available is: " << stock[3] << endl;
        return true;
    }
    else if(num == 5){
        cout << "The available is: " << stock[4] << endl;
        return true;
    }
    else if(num == 6){
        cout << "The available is: " << stock[5] << endl;
        return true;
    }
    else if(num == 7){
        cout << "The available is: " << stock[6] << endl;
        return true;
    }
    else if(num == 8){
        cout << "The available is: " << stock[7] << endl;
        return true;
    }
    else if(num == 9){
        cout << "The available is: " << stock[8] << endl;
        return true;
    }
    else if(num == 10){
        cout << "The available is: " << stock[9] << endl;
        return true;
    }
    else{
        cout << "DOES NOT EXIT" << endl;
        return false;
    }

}

void Product::return_price(int Product_number){

/// check through the number of product in main menu and display the price.

    if(Product_number == 1){
        Product_price = 3;
        cout << "The price for " << Product_number << " will be $" << Product_price << endl;
        cout << endl;
    }
    else if(Product_number == 2){
        Product_price = 5;
        cout << "The price for " << Product_number << " will be $" << Product_price << endl;
        cout << endl;
    }
    else if(Product_number == 3){
        Product_price = 5;
        cout << "The price for " << Product_number << " will be $" << Product_price << endl;
        cout << endl;


    }
    else if(Product_number == 4){
        Product_price = 5;
        cout << "The price for " << Product_number << " will be $" << Product_price << endl;
        cout << endl;


    }
    else if(Product_number == 5){
        Product_price = 10;
        cout << "The price for " << Product_number << " will be $" << Product_price << endl;
        cout << endl;


    }
    else if(Product_number == 6){
        Product_price = 2;
        cout << "The price for " << Product_number << " will be $" << Product_price << endl;
        cout << endl;

    }
    else if(Product_number == 7){
        Product_price = 4.5;
        cout << "The price for " << Product_number << " will be $" << Product_price << endl;
        cout << endl;


    }
    else if(Product_number == 8){
        Product_price = 6;
        cout << "The price for " << Product_number << " will be $" << Product_price << endl;
        cout << endl;


    }
    else if(Product_number == 9){
        Product_price = 6;
        cout << "The price for " << Product_number << " will be $" << Product_price << endl;
        cout << endl;


    }
    else if(Product_number == 10){
        Product_price = 1;
        cout << "The price for " << Product_number << " will be $" << Product_price << endl;
        cout << endl;

    }
    else if(Product_number == 0){

        cout << "Thanks for shopping :)take your money" << endl;
    }else{

        cout << "does not exist, try again" << endl;

    }



}
