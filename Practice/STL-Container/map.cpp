#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<int, string> m;
    m[1] = "hp"; // O(log(n))
    m[2] = "dell";
    m.insert({3, "lenovo"});

    // for (auto it = m.begin(); it != m.end(); ++it)
    // {
    //     cout << (*it).first << " " << (*it).second << endl;
    // }

    cout << m.size() << endl;
    for (auto &it : m)
    {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}