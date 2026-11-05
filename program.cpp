#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Podaj liczbe" << endl;
    cin >> number;
    if(number < 0) {
        cout << "Nalezy podac nieujemna liczbe" << endl;
    }
    else {
        cout << "Liczba: " << number <<  endl;
    }
    return 0;
}