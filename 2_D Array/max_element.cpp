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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (max < arr[i][j])
                max = arr[i][j];
        }
        
    }
    cout << "the maximum element in an 2_d array is: " << max;
        return 0;
}