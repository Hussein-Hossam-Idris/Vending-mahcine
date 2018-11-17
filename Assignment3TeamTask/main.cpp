#include <iostream>
#include <string>
#include <iomanip>
#include "Money.h";
#include "Product.h";




using namespace std;

int main()
{
    bool condition = true;
    int choice;


    while(condition){
    int pnum;
    double pAmount;

    cout << setw(2) << "Product's Available are ... " << endl;
    cout << setw(2) << "1- candy" << endl;
    cout << setw(2) << "2- chocolate" << endl;
    cout << setw(2) << "3- Pepsi" << endl;
    cout << setw(2) << "4- Fanta" << endl;
    cout << setw(2) << "5- Pringles" << endl;
    cout << setw(2) << "6- Water" << endl;
    cout << setw(2) << "7- Domti sandwich" << endl;
    cout << setw(2) << "8- Apple Juice" << endl;
    cout << setw(2) << "9- Juhayna mix" << endl;
    cout << setw(2) << "10- M3mool" << endl;

    cout << setw(2) << "Pleas enter the number of the product that you would like to buy: " << endl;
    cout << endl;
    cin >> pnum;
    Product p(pnum);
    if(p.stock[pnum-1]){
        cout << "Pleas enter the amount: " << endl;
        cin >> pAmount;
        Money m(pAmount, p.Product_price);
        p.curr_stock(pnum);

    }else{

        cout << "choose another product" << endl;

    }
    cout << "Press 1 to pick another item, and 0 to exit" << endl;
    cin >> choice;
    if(choice==1){
        condition = true;

    }else{
        cout << "Thanks for visit";
        condition = false;
    }
}







    return 0;
}
