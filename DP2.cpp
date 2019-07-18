#include <bits/stdc++.h>

using namespace std;

int equal(vector<int> arr)
{
    // Complete this function
    vector<int> temp;
    sort(arr.begin(), arr.begin() + arr.size());
    temp.push_back(arr[0]);
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] != temp.back())
        {
            temp.push_back(arr[i]);
        }
    }
    
}

int main()
{
    int t;
    cin >> t;
    for (int a0 = 0; a0 < t; a0++)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int arr_i = 0; arr_i < n; arr_i++)
        {
            cin >> arr[arr_i];
        }
        int result = equal(arr);
        cout << result << endl;
    }
    return 0;
}
