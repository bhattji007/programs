//Nikita12200
//square root of a number without using STL in cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, p; //N=number whose sqrt have to find , p=number of digits after decimal
    cin >> N >> p;
    float ans = 0;
    float inc = 1.0;
    for (int times = 0; times <= p; times++)
    {
        while (ans * ans <= N)
        {
            ans = ans + inc;
        }
        ans = ans - inc;
        inc = inc / 10;
    }
    cout << ans << endl;
    return 0;
}