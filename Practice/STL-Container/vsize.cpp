/* C++ code to demonstrate a 2D vector
with elements(vectors) inside it. */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
    Below we initialize a 2D vector
    named "vect" on line 12 and then
    we declare the values on
    line 14, 15 and 16 respectively.
    */

    vector<int> v;
    // vector<int> v(10,1) - 10 elements of one
    cout << "Enter num of elements" << endl;
    int n;
    cin >> n;
    cout << "Enter elements" << endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout << "Printing vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    // Nested vector of pairs
    vector<pair<int, int>> vp = {{1, 2}, {3, 4}, {5, 6}};
    cout << "Printing nested vector of pairs" << endl;
    for (int i = 0; i < vp.size(); i++)
    {
        cout << vp[i].first << " " << vp[i].second << endl;
    }

    // Nested vector of vector

    // vector<vector<int>> vect{
    //     {1, 2, 3, 4},
    //     {4, 5, 6},
    //     {7, 8, 9}};

    // cout << vect.size() << endl; 3
    // cout << vect[0].size();      4

    /*
    Now we print the values that
    we just declared on lines
    14, 15 and 16 using a simple
    nested for loop.
    */

    // for (int i = 0; i < vect.size(); i++)
    // {
    //     for (int j = 0; j < vect[i].size(); j++)
    //     {
    //         cout << vect[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}
