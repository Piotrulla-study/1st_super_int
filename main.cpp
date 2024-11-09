#include <iostream>

using namespace std;

bool isFirst(int amount) {
    if (amount < 2) {
        return false;
    }
    for (int i = 2; i * i <= amount; i++) {
        if (amount % i == 0) {
            return false;
        }
    }
    return true;
}

int sumOf(int amount) {
    int suma = 0;
    while (amount > 0) {
        suma += amount % 10;
        amount /= 10;
    }
    return suma;
}

bool isSuperFirst(int amount) {
    return isFirst(amount) && isFirst(sumOf(amount));
}

int main() {
    int amount;
    cout << "Podaj liczbe: ";
    cin >> amount;

    if (isSuperFirst(amount)) {
        cout << amount << " jest liczba super pierwsza." << endl;
    }
    else {
        cout << amount << " nie jest liczba super pierwsza." << endl;
    }

    return 0;
}