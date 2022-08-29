#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Map - O(log(n)), Unordered Map - O(1)
    map<int, string> m;
    m[1] = "hp"; // O(log(n))
    m[2] = "dell";
    m.insert({3, "lenovo"});

    // for (auto it = m.begin(); it != m.end(); ++it)
    // {
    //     cout << (*it).first << " " << (*it).second << endl;
    // }

    // auto it=m.find(3)
    // if(it == m.end()){
    //     cout<<"Value not found"<<endl;
    // }else{
    //     cout<<(*it).first << " "<<(*it).second<<endl;
    // }

    cout << m.size() << endl;
    for (auto &it : m)
    {
        cout << it.first << " " << it.second << endl;
    }

    // Find unique strings and their occurence.
    int num;
    cin >> num;
    map<string, int> ustring;
    for (int i = 0; i < num; i++)
    {
        string s;
        cin >> s;
        ustring[s]++;
    }

    for (auto &it : ustring)
    {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}