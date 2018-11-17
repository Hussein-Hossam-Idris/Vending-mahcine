#include "Money.h"
#include <iostream>
using namespace std;

Money::Money()
{
/// Empty constructor that has no benefit

}
Money::Money(double amount, double price){

    /// pass the two arguments the function to calculate the reminder -if exist-.
    calculate_remainder(amount,price);


}

void Money::calculate_remainder(double amount, double price){

    paid = amount;
    /// loop through the amount paid form user
    while((paid > 20) || (paid < 0.5)){
        cout << "Please enter valid amount " << endl;
        cin >> paid;
    }

    pprice = Product_price;


    /// loop until the user input valid price.
    while(paid < pprice){
        reminder = paid;
        cout << "your reminder is $" << reminder << endl;
        cout << "Your input is less than the price :), try again" << endl;
        cout << "Please enter valid amount" << endl;
        cin >> paid;
    }

    enugh_money = false;
    cout << "you have paid: " << paid << endl;
    cout << "product price: " << Product_price << endl;
    while(enugh_money == false){
/// if the user input amount greater than the price.
         if(paid > pprice){
            reminder = paid - pprice;
            cout << "your reminder is $" << reminder << endl;
            enugh_money = true;
            cout << "enjoy your food :),let's see you again" << endl;

        }
/// if the user input amount equal to the price.
        else if(paid == pprice){
            reminder = 0;
            cout << "your reminder is $" << reminder << endl;
            enugh_money = true;
            cout << "Thank you ,come again and enjoy your food 🙂" << endl;
        }

    }


}


