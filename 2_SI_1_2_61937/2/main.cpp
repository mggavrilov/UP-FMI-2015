#include <iostream>

using namespace std;

int main()
{
    int nArray [4][4] = {{5, 6, 2, 1},
                        {4, 12, 9, 33},
                        {15, 14, 0, 22},
                        {666, 100, 3, 10}};

    for(int k = 0; k < sizeof(nArray)/sizeof(nArray[0]) * 2; k++) {
        for(int i = 0; i <= k; i++)
        {
            int j = k - i;

            if( i < sizeof(nArray)/sizeof(nArray[0]) && j < sizeof(nArray)/sizeof(nArray[0]) )
            {
                cout << nArray[i][j] << " ";
            }
        }
    }

    return 0;
}
