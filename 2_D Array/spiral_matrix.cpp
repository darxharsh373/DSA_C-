#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n, m;
    cout << "enter the rows and column of an array:";
    cin >> m>> n;

    int arr[m][n];
    cout << "enter the elements of an array : ";
    cout << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout<<endl;
    //spiral

    int minr=0,minc=0;
    int maxr=m-1,maxc=n-1;
    while(minr<=maxr&&minc<=maxc){
        //right
        for(int j=minc;j<=maxc;j++){
            cout<<arr[minr][j]<<" ";
        }
        minr++;
        if(minr>maxr||minc>maxc)break;
       //down
       for(int i=minr;i<=maxr;i++){
        cout<<arr[i][maxc]<<" ";
       }
       maxc--;
       if(minr>maxr||minc>maxc)break;
       //left
       for(int j=maxc;j>=minc;j--){
        cout<<arr[maxr][j]<<" ";
       }
       maxr--;
       if(minr>maxr||minc>maxc)break;
       //up
       for(int i=maxr;i>=minr;i--){
        cout<<arr[i][minc]<<" ";
       }
       minc++;
    }
    return 0;
}