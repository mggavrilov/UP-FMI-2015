#include <iostream>

using namespace std;

int main()
{
    string input = "war is peace.freedom is slavery.ignorance is strength.";
    int sum = 0, isPrime = 1;

    for(int i = 0; i < input.length(); i++)
    {
        sum += (int)input[i];
    }

    cout << sum << " ";


    for(int i = 2; i < sum; i++)
    {
        if(sum % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    cout << isPrime;

    return 0;
}
