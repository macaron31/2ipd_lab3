#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");

    int arr[10] = {
        -1, 6, 8, 2, 9, 0, 4, -4, -6
    };

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] >= 0)
            cout << arr[i] << endl;
    }

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < 0)
            cout << arr[i] << endl;
    }
}
