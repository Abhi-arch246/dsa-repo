#include <iostream>
using namespace std;

void reverse_array(int arr[], int size)
{
    int s = 0, e = size - 1;
    while (s < e)
    {
        swap(arr[s], arr[e]);
        s += 1;
        e -= 1;
    }
}

int main()
{

    int size;
    cout << "Enter size of the array" << endl;
    cin >> size;

    int arr[size];
    cout << "Enter elements into the array" << endl;
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    reverse_array(arr, size);

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}