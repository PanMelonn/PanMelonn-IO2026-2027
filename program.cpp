#include <iostream>

using namespace std;

int factorial(int number) {
    if(number == 0 || number == 1) return 1;
    return number * factorial(number - 1);
}

int main() {
    int number;
    cout << "Podaj liczbe" << endl;
    cin >> number;
    cout << "Silnia liczby: " << factorial(number) <<  endl;

    return 0;
}