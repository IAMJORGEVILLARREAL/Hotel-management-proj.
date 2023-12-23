#include<iostream>

using namespace std;

int main()
{
    int quant;
    int choice;
    //Quantity
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshakes = 0, Qchicken = 0;
    //Food items sold
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshakes = 0, Schicken = 0;
    //Total price of items
    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shakes = 0, Total_chicken = 0; 


    cout << "\n\t Quantity of items we have";
    cout << "\n Rooms available";
    cin >> Qrooms;

    cout << "\n Quantity of pasta :";
    cin >> Qpasta;
    cout << "\n Quantity of burger :";
    cin >> Qburger;
    cout << "\n Quantity of noodles :";
    cin >> Qnoodles;
    cout << "\n Quantity of shakes :";
    cin >> Qshakes;
    cout << "\n Quantity of chicken-roll :";
    cin >> Qchicken;

    cout << "\n\t\t\t Please select from the menu options ";
    cout << "\n\n1) Rooms";
    cout << "\n2) Pasta";
    cout << "\n3) burger";
    cout << "\n4) noodles";
    cout << "\n5) shakes";
    cout << "\n6) chicken-roll";
    cout << "\n7) Information regarding sales and collection ";
    cout << "\n8) Exit";

    cout << "\n\n Please Enter your Choice! ";
    cin >> choice;




    return 0;
}