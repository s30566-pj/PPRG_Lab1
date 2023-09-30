#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Podaj liczbe calkowita" << endl;
    cin >> number;

    if (!cin)
    {
        cout << "Czy aby napewno wpisujesz odpowiedni parametr?" << endl << "Blad, podana liczba nie jest lcizba calkowita";
    }
    else if (number == 0)
    {
        cout << endl << "Podana liczba to: " << number << endl;
        cout << "Podana przez ciebie liczba jest zerem." << endl;
    }
    else if (number < 0)
    {
        cout << endl << "Podana liczba to: " << number << endl;
        cout << "Podana przez ciebie liczba jest ujemna";
    }
    else if (number > 0)
    {
        cout << endl << "Podana liczba to: " << number << endl;
        cout << "Podana przez ciebie liczba jest dodatnia";
    }
    else
    {
        cout << endl << "Podana liczba to: " << number << endl;
        cout << "Czy aby napewno wpisujesz odpowiedni parametr?" << endl << "Blad, podana liczba nie jest lcizba calkowita";
    }
    return 0;
}
