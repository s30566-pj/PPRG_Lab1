#include <iostream>

using namespace std;

int number;

int main()
{
    cout << "Podaj liczbe calkowita\n";
    cin >> number;
    cout << "Podana liczba to: " << number << endl;
    if (!cin)
    {
        cout << "Czy aby napewno wpisujesz odpowiedni parametr?" << endl << "Blad, podana liczba nie jest lcizba calkowita";
    }
    else if ((number % 2) == 0 && number != 0)
    {
        cout << "Liczba " << number << " jest parzysta";
    }
    else if ((number % 2) != 0 && number != 0)
    {
        cout << "Liczba " << number << " nie jest parzysta";
    }
    else if (number == 0)
    {
        cout << "Liczba " << number << " jest zerem";
    }
}

