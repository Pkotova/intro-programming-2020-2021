#include <iostream>
using namespace std;
int main()
{
    
    double price;
    int maxSpeed, USBports;
    bool has802_11ac, goingToBuy;

    cout << "Price: ";
    cin >> price;

    cout << "Max speed: ";
    cin >> maxSpeed;

    cout << "USB ports: ";
    cin >> USBports;

    cout << "Has 802-11ac: ";
    cin >> has802_11ac;

    bool goingToBuyFirstOne = (price >= 80 && price <= 130)
        && maxSpeed >= 200
        && USBports >= 2
        && has802_11ac;
    bool goingToBuySecondOne = (!has802_11ac || maxSpeed < 200)
        && price <= 70;

     goingToBuy = goingToBuyFirstOne || goingToBuySecondOne;
     cout << "Traicho is going to buy the router: " <<boolalpha
         << goingToBuy << endl;

}

