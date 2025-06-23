// C++ program to find Majority elements in an array
// using nested loops

#include <iostream>
#include <vector>
using namespace std;

// Function to find Majority elements in an array
vector<int> findMajority(vector<int> &arr)
{
    int n = arr.size();
    vector<int> res;

    for (int i = 0; i < n; i++)
    {

        // Count the frequency of arr[i]
        int cnt = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[j] == arr[i])
                cnt += 1;
        }

        // Check if arr[i] is a majority element
        if (cnt > (n / 3))
        {

            // Add arr[i] only if it is not already
            // present in the result
            if (res.size() == 0 || arr[i] != res[0])
            {
                res.push_back(arr[i]);
            }
        }

        // If we have found two majority elements,
        // we can stop our search
        if (res.size() == 2)
        {
            if (res[0] > res[1])
                swap(res[0], res[1]);
            break;
        }
    }

    return res;
}

int findMaximum(vector<int> &arr)
{
    int n = arr.size();
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (mid > 0 && mid < n - 1)
        {
            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
            {
                return arr[mid];
            }
            else if (arr[mid] > arr[mid - 1] && arr[mid] < arr[mid + 1])
            {
                low = mid + 1; // move right
            }
            else
            {
                high = mid - 1; // move left
            }
        }
        else if (mid == 0)
        {
            return max(arr[0], arr[1]);
        }
        else if (mid == n - 1)
        {
            return max(arr[n - 1], arr[n - 2]);
        }
    }

    return -1; // fallback (should not happen for valid input)
}

int main()
{
    vector<int> arr = {2, 2, 3, 1, 3, 2, 1, 1};
    vector<int> res = findMajority(arr);
    for (int ele : res)
        cout << ele << " ";
    return 0;
}