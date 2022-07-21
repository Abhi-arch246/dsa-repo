#include <iostream>

using namespace std;

int linear_search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return i;
    }

    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70}, size, key;
    size = sizeof(arr) / sizeof(int);

    cout << "Enter the num to search" << endl;
    cin >> key;

    int check = linear_search(arr, size, key);

    if (check == -1)
        cout << "Element not found in array";
    else
        cout << "Element fount at " << check + 1;

    return 0;
}