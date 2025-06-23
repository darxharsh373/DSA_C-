// write a program to print the multiplication of two matricex given by the user

#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n, m, a, b;
    cout << "enter the rows and column of an 1st array:";
    cin >> n >> m;
    cout << "enter the rows and column of an 2nd array:";
    cin >> a >> b;
    if (m == a)
    {
        int arr[n][m];
        cout << "enter the elements of an array : ";
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }

        int arr2[a][b];
        cout << "enter the elements of an array : ";
        cout << endl;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cin >> arr2[i][j];
            }
        }
        int res[n][b];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < b; j++)
            {
                res[i][j] = 0;
                // res[i][j]=a[i][0]*b[0][j].........
                for (int k = 0; k < a; k++)
                {
                    res[i][j] += arr[i][k] * arr2[k][j];
                }
            }
        }
        cout<<"Multiplication of two matrices are.....\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else
    {
        cout << "The matrix cannot be multiplied.";
    }

    return 0;
}