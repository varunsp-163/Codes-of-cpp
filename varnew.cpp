#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    // cin >> n;
    // for (int i = 0; i <= 2 * n + 1; i++)
    //{
    //    if ((i == 0) || (i == 2 * n + 1))
    //    {
    //        // top and bottom
    //        for (int j = 0; j <= 2 * n + 1; j++)
    //        {
    //            if ((j == 0) || (j == 2 * n + 1))
    //            {
    //                cout << "+";
    //            }
    //            else
    //            {
    //                cout << "-";
    //            }
    //        }
    //        cout << endl;
    //    }
    //    else
    //    {
    //        for (int j = 0; j <= 2 * n + 1; j++)
    //        {
    //            if (j == 0 || j == 2 * n + 1)
    //            {
    //                cout << "|";
    //            }
    //            else
    //            {
    //                cout << " ";
    //            }
    //        }
    //        cout << endl;
    //    }
    //}

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            for (int j = 0; j <= 2 * n + 1; j++)
            {
                if (j == 0 || j == 2 * n + 1)
                {
                    cout << "+";
                }
                else
                {
                    cout << "-";
                }
            }
            cout << endl;
        }
        else
        {
            for (int j = 0; j <= n * 2 + 1; j++)
            {
                if (j == 0 || j == n * 2 + 1)
                {
                    cout << "|";
                }
                else
                {
                    for (int j=1; j < n-i; j++)
                    {
                        cout << "*";
                    }
                    
                }
            }
            cout << endl;
        }
    }

    return 0;
}