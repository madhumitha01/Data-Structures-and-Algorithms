#include <bits/stdc++.h>
using namespace std;
int main()
{
    int dat;
    printf("Enter the string to input:");
    cin >> dat;
    string data;
    data = to_string(dat);
    int i, j;
    for (i = 0, j = data.size() - 1; i < j; i++, j--)
    {
        if (data[i] != data[j])
        {
            if (data[i] == data[j - 1])
            {
                cout << "not matching at index:" << j << " char :" << data[i] - 'a' + '0' << endl;
                break;
            }
            else if (data[i - 1] == data[j])
            {
                cout << "not matching at index:" << i << " char :" << data[j] - 'a' + '0' << endl;
                break;
            }
        }
    }
    return 0;
}