#include <iostream>

using namespace std;

int main()
{
    int x = 0, n = 0, result = 0;

    while(x <= 0 || n <= 0)
    {
        cout << "Vuvedete cqlo polojitelno chislo x: ";
        cin >> x;
        cout << "Vuvedete cqlo polojitelno chislo n: ";
        cin >> n;
        if(x <= 0 || n <= 0)
        {
            cout << "Nevalidni stoinosti, molq opitaite otnovo!" << endl << endl;
        }
    }

    cout << x << " * " << n << " = ";

    while(n > 0)
    {
        if(n % 2 == 0)
        {
            result += x * (n / 2);
            n = n / 2;
        }
        else
        {
            result += x;
            n = n - 1;
        }
    }

    cout << result;

    return 0;
}
