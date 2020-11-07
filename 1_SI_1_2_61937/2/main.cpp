#include <iostream>

using namespace std;

int main()
{
    float temperature;
    char choice = '\0';
    char degrees = char(248);
    cout << "Vuvedete temperatura v gradusi po Celzii: ";
    cin >> temperature;

    cout << "V koq skala jelaete da konvertirate " << temperature << degrees << "C?" << endl;
    cout << "\tFahrenheit (F)" << endl;
    cout << "\tKelvin (K)" << endl;
    cout << "\tRankine (R)" << endl;
    cout << "Izbor: ";
    cin >> choice;

    switch(choice)
    {
        case 'F':
            cout << temperature << degrees << "C = " << temperature * 1.8 + 32 << degrees << "F";
            break;
        case 'K':
            cout << temperature << degrees << "C = " << temperature + 273.15 << degrees << "K";
            break;
        case 'R':
            cout << temperature << degrees << "C = " << temperature * 1.8 + 32 + 459.67 << degrees << "Ra";
            break;
        default:
            cout << "Nevalidni danni! Krai na programata.";
    }

    return 0;
}
