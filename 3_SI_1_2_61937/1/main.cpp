#include <iostream>

using namespace std;

int find_max_span(int* arr, int size)
{
    int max_span = 1;

    for(int i = 0; i < size; i++)
    {
        for(int j = i+1; j < size; j++)
        {
            if(arr[i] == arr[j] && max_span < j-i+1)
                max_span = j-i+1;
        }
    }

    return max_span;
}

int main()
{
    int size;
    cout << "Razmer na masiva: ";
    cin >> size;
    int arr[size];

    for(int i = 0; i < size; i++)
    {
        cout << "Stoinost za element " << i << ": ";
        cin >> arr[i];
    }

    cout << "Nai-golemiqt promejdutuk e " << find_max_span(arr, size);

    return 0;
}
