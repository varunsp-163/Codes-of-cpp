#include <iostream>
using namespace std;

int main()
{
    int n = 10;

    for (int i = 0; i <= 2 * n + 1; i++)
    {
        if (i == 0 || i == 2 * n + 1)
        {
            cout << "+";
        }
        else
        {
            cout << "-"; // first section
        }
    }
    cout << endl;
    // pyramid
    for (int i = 0; i < n - 1; i++)
    {
        cout << "|";
        for (int j = n - i - 1; j > 0; j--)
        {
            cout << " ";
        }

        for (int j = 0; j <= i; j++)
        {

            cout << "/";
        }
        for (int j = n - i; j <= n; j++) // first half
        {
            cout << (char)92;
        }
        for (int j = i; j < n - 1; j++)
        {
            cout << " ";
        }
        cout << "|";
        cout << endl;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << "|";
        for (int j = n - i - 1; j > 0; j--)
        {
            cout << " ";
        }

        for (int j = 0; j <= i; j++)
        {
            if (i == n - 1 && j == 0)
            {
                cout << "<";
            }
            if (i == n - 1 && j < n)
            {
                cout << "-";
            }
            else if (i != n - 1)
            {
                cout << (char)92;
            }
        }
        for (int j = n - i; j <= n; j++)
        {
            if (i == n - 1 && j < n - 1)
            {
                cout << "-";
            }
            if (i == n - 1 && j == n) // second half
            {
                cout << ">";
            }

            else if (i != n - 1)
            {
                cout << "/";
            }
        }
        for (int j = i; j < n - 1; j++)
        {
            cout << " ";
        }
        cout << "|";
        cout << endl;
    }
    // it ends
    for (int i = 0; i <= 2 * n + 1; i++)
    {
        if (i == 0 || i == 2 * n + 1) // first section
        {
            cout << "+";
        }
        else
        {
            cout << "-";
        }
    }

    return 0;
}