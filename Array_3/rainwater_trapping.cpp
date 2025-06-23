#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int trap(vector<int> &height)
{
    int n = height.size();
    //  prev greatest element
    int prev[n];
    prev[0] = -1;
    int max = height[0];
    for (int i = 1; i < n; i++)
    {
        prev[i] = max;
        if (max < height[i])
            max = height[i];
    }
    // mext greatest element

    prev[n - 1] = -1;
    max = height[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (max < prev[i])
            prev[i] = max;
        if (max < height[i])
            max = height[i];
    }
    // minimun array
    // calculating water
    int water = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (height[i] < prev[i])
        {
            water += (prev[i] - height[i]);
        }
    }
    return water;
}

int main()
{

    vector<int> v = {4, 5, 6, 7, 5, 6, 7, 4, 5, 6, 7};
    cout << "Trapped Water: " << trap(v) << endl;
    return 0;
}