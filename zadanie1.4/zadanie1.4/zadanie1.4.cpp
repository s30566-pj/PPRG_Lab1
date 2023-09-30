#include <iostream>

using namespace std;

double number1, number2, number3;

int main()
{
    cout << "Witaj, zostaniesz poproszony o podanie trzech liczb." << endl;
    cout << "Podaj pierwsza liczbe: ";
    if (!(cin >> number1))
    {
        cout << "\nCos poszlo nie tak. Program zostanie zakonczony.";
        return 0;
    }
    cout << "\nPierwsza liczba to: " << number1;

    cout << "\nPodaj druga liczbe: ";
    if (!(cin >> number2))
    {
        cout << "\nCos poszlo nie tak. Program zostanie zakonczony.";
        return 0;
    }
    cout << "\nDruga liczba to: " << number2;

    cout << "\nPodaj trzecia liczbe: ";
    if (!(cin >> number3))
    {
        cout << "\nCos poszlo nie tak. Program zostanie zakonczony.";
        return 0;
    }
    cout << "\nTrzecia liczba to: " << number3;

    double biggest = number1;

    if (number2 > biggest) {
        biggest = number2;
    }

    if (number3 > biggest) {
        biggest = number3;
    }

    cout << "\nNajwieksza liczba jest: " << biggest;
    return 0;
}
