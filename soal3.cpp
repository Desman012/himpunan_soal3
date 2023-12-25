#include <iostream>
using namespace std;
int main () {
    string itmCode, itmName;
    int itmPrice, itmofNumber;
    cout << "Item Code : ";
    cin >> itmCode;
    cout << "Item Name : ";
    cin >> itmName;
    cout << "Item Price : ";
    cin >> itmPrice;
    cout << "Number of Items : ";
    cin >> itmofNumber;
    int total = itmPrice * itmofNumber;
    cout << "Total Price : "<< total;
}