#include <bits/stdc++.h>
using namespace std;

int main()
{

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