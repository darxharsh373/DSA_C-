#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> mergeSorted_Array(vector<int> &arr1, vector<int> &arr2)
{
    int n = arr1.size();
    int m = arr2.size();
    vector<int> res(m + n);
    int i = 0;
    int j = 0;
    int k = 0;
    while (i <= n -1 && j <= m-1 )
    {
        if (arr1[i] < arr2[j])
        {
            res[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            res[k] = arr2[j];
            j++;
            k++;
        }
       
    }
    if (i == n)
    {
        while (j <= m - 1)
        {
            res[k] = arr2[j];
            k++;
            j++;
        }
    }
    if (j == m)
    {
        while (i <= n - 1)
        {
            res[k] = arr1[i];
            k++;
            i++;
        }
    }

    return res;
}
int main()
{
    vector<int> arr1;
    cout << "enter the elements of 1st array:";
    for (int i = 0; i < 4; i++)
    {
        int q;
        cin >> q;
        arr1.push_back(q);
    }
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    vector<int> arr2;
    cout << "entter the elements of an array :";
    for (int i = 0; i < 6; i++)
    {
        int q;
        cin >> q;
        arr2.push_back(q);
    }
    for (int i = 0; i < arr2.size(); i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
    vector<int> v = mergeSorted_Array(arr1, arr2);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}