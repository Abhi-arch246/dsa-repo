#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Set - O(log(n)), Unordered Set - O(1), Multi Set - O(log(n))
    set<string> st;
    st.insert("abhi");
    st.insert("akhi");
    st.insert("two");

    for (string value : st)
    {
        cout << value << endl;
    }

    auto it = st.find("abhi");
    if (it != st.end())
    {
        cout << (*it);
    }
    else
    {
        cout << "Not found";
    }
    return 0;
}
