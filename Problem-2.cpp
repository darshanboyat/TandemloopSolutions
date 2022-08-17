#include <bits/stdc++.h>
using namespace std;

int32_t main(void)
{
    int x;
    cin >> x;

    for(int a = 1; a <= x*2; a++)
    {
        if(a%2)
            cout << a << "    " << flush;
    }
    return 0;
}