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
    int arr2[n][m];
    cout << "enter the elements of an array : ";
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr2[i][j];
        }
    }
    
    cout << "the sum of two matrix is: ";
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<< arr[i][j] + arr2[i][j]<<" ";
        }
        cout<<endl;

    }
    

    return 0;
}