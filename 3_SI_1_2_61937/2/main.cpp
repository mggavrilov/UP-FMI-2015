#include <iostream>
#include <math.h>
#include <cstring>

using namespace std;

int sum_numbers(char* str)
{
    int sum = 0;

    for(int i = strlen(str)-1; i >= 0; i--)
    {
        int number = 0, npow = 0;
        if(str[i] >= 48 && str[i] <= 57)
        {
            while(str[i] >= 48 && str[i] <= 57)
            {
                number += (str[i]-48)*pow(10, npow);
                i--;
                npow++;
            }
            sum += number;
        }
    }

    return sum;
}

int main()
{
    char str[15];
    cout << "Vuvedete niz: ";
    cin >> str;

    cout << "Sborut na chislata v niza e: " << sum_numbers(str);

    return 0;
}
