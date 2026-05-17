#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n value:";
    cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     int num=1;
    //     for (int k = i; k > 0; k--)
    //     {
    //         cout << num;
    //         num++;
    //     }
    //     for (int l = i + 1; l > 0; l--)
    //     {
    //         cout << l;
    //     }

    //     cout << endl;
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int l = 1; l <= i+1; l++)
        {
            cout << l;
        }
        for (int k = i; k > 0; k--)
        {
            cout << k;
        }

        cout << endl;
    }
    return 0;
}