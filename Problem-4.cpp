#include <bits/stdc++.h>
using namespace std;

int32_t main(void)
{
    std::vector<int> vec;
    std::map<int, int> ans;

    int in;
    for(int i = 0; i < 11; i++)
    {
        cin >> in;
        vec.push_back(in);
    }

    for(int i = 1; i < 10; i++)
    {
        int count = 0;
        for(unsigned int j = 0; j < vec.size(); j++)
        {
            if(!(vec[j] % i))
                count++;
        }
        ans.insert(std::pair<int, int>(i, count));
    }
    map<int, int>::iterator itr;
    cout << "[" << flush;
    for(itr = ans.begin(); itr != ans.end(); itr++){
        cout << itr -> first << ": " << itr -> second << ", " << flush;
    }
    cout << "]" << endl;

    return 0;
}