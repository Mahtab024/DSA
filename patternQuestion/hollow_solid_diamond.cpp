#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - (1 + i); j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            // if the fist charectors or last charector
            if (j == 0)
            {
                cout << "* ";
            }
            else if (j == 2 * i)
            {
                cout << "* ";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - 2 * i - 1; j++)
        {
            // starting and last
            if (j == 0 || j == 2 * n - 2 * i - 2)
            {
                cout << "* ";
            }
            else
            {
                cout << " ";
            }
            
        }
        cout<<endl;
    }
}   