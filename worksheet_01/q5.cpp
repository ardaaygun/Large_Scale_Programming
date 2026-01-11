using namespace std;
#include <iostream>

int main () {
    double itemPrice , taxRate, taxAmount, finalParice;
    cout<<" Enter initial price :";
    cin>> itemPrice;
    cout<< "Enter tax rate:";
    cin>> taxRate;
    taxAmount = itemPrice *(taxRate / 100);
    finalParice = itemPrice - taxAmount;
    cout<< "Tax: " <<  taxAmount << " Final price : " << finalParice;

    return 0;


}