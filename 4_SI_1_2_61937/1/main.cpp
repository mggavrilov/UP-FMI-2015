#include <iostream>

using namespace std;

void calc(int* arr1, int* arr2, int nSize, int &sum)
{
    for(int i = 0; i < nSize; i++)
    {
        sum += arr1[i]*arr2[i];
    }
}

int main()
{
    int arr1[] = {10,5,1,3,6}, arr2[] = {7,2,3,5,7}, sum = 0, nSize = sizeof(arr1)/sizeof(arr1[0]);

    calc(arr1, arr2, nSize, sum);

    cout << sum;

    return 0;
}
