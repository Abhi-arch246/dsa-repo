#include <iostream>

using namespace std;

int binary_search(int arr[], int size, int key)
{
    int s = 0, e = size - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            e = mid - 1;
        else
            s = mid + 1;
    }

    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70}, size, key;
    size = sizeof(arr) / sizeof(int);

    cout << "Enter the num to search" << endl;
    cin >> key;

    int check = binary_search(arr, size, key);

    if (check == -1)
        cout << "Element not found in array";
    else
        cout << "Element fount at " << check + 1;

    return 0;
}