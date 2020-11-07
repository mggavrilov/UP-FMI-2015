#include <iostream>

using namespace std;

int P(int x)
{
    if(x == 0)
        return 0;

    if(x % 2 == 0)
        return x%3 + P(x-1);
    else
        return x%5 + P(x-1);
}

int main()
{
    int x;
    cout << "Vuvedete chislo: ";
    cin >> x;
    cout << "P(x) = " << P(x);

    return 0;
}
