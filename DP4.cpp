    #include <bits/stdc++.h>

    using namespace std;

    long long int candies(int n, vector<int> arr)
    {
        int val[n] = {0};
        val[0] = 1;
        long long int sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i + 1] > arr[i])
            {
                val[i + 1] = val[i] + 1;
            }
            else
            {
                val[i + 1] = 1;
            }
        }
        for (int i = n - 1; i > 0; i--)
        {
            if(arr[i-1]>arr[i]){
                val[i-1]=max(val[i]+1,val[i-1]);
            }
        }
        printf("\n");
        for (int x : val)
        {
            // printf("%d ",x);
            sum += x;
        }
        return sum;
    }

    int main()
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int arr_i = 0; arr_i < n; arr_i++)
        {
            cin >> arr[arr_i];
        }
        long long int result = candies(n, arr);
        cout << result << endl;
        return 0;
    }
