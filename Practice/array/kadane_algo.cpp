#include <iostream>
using namespace std;

int kadane_alog(int arr[], int size)
{
    int sum = 0, largeSum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        if (sum < 0)
            sum = 0;

        largeSum = max(largeSum, sum);
    }

    return largeSum;
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

    cout << kadane_alog(arr, size);

    return 0;
}