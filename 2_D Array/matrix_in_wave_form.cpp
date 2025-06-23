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
    // print matrix in waveform
    //  for (int i = 0; i < n; i++)
    //  {
    //      if(i%2==0){
    //          for (int j = 0; j < m; j++)
    //      {
    //          cout<< arr[i][j]<<" ";
    //      }
    //      }
    //      else{
    //          for(int j=n-1;j>=0;j--){
    //              cout<<arr[i][j]<<" ";
    //          }
    //      }
    //  }
    // reverse waveform
    // for (int i = 0; i < n; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         for (int j = n - 1; j >= 0; j--)
    //         {

    //             cout << arr[i][j] << " ";
    //         }
    //     }
    //     else
    //     {

    //         for (int j = 0; j < m; j++)
    //         {
    //             cout << arr[i][j] << " ";
    //         }
    //     }
    // }
    // reverse waveform from bottom to top
    // for (int i = n-1; i >=0; i--)
    // {
    //     if (i % 2 == 0)
    //     {
    //         for (int j = 0; j < m; j++)
    //         {
    //             cout << arr[i][j] << " ";
    //         }
    //     }
    //     else
    //     {
    //         for (int j = n - 1; j >= 0; j--)
    //         {
    //             cout << arr[i][j] << " ";
    //         }
    //     }
    // }

    // column wave printing
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //column wise wave printing
    for(int j=0;j<n;j++){
        if(j%2==0){
            for(int i=0;i<m;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=m-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    } 
}