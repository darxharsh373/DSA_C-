#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n, m;
    cout << "enter the rows and column of an array:";
    cin >> n >> m;

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
    int t[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j< n; j++)
        {
           t[i][j]=arr[j][i];
        }
        
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << t[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}