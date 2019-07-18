#include <bits/stdc++.h>

using namespace std;
int counter;
int n;
bool fun(int x,int i);
int powerSum(int X, int N)
{
    double max = pow(X, 1.0 / N);
    int no = (int)max;
    // cout<<max<<endl;
    // cout<<no<<endl;
    fun(X,no);
}
bool fun(int x, int i)
{
    if (x == 0)
    {
        counter = counter + 1;
        return true;
    }
    else if (x < 0 || i < 1)
    {
        return false;
    }
    bool choice2 = fun(x - pow(i, n), i - 1);
    bool choice1 = fun(x, i - 1);
}

int main()
{
    int X;
    cin >> X;
    counter=0;
    cin >> n;
    int result = powerSum(X, n);
    cout << counter << endl;
    return 0;
}
