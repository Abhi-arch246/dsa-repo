#include <iostream>
using namespace std;

int sumarray_sum(int arr[], int size)
{
    int largeNum = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            int subSum = 0;

            for (int k = i; k <= j; k++)
            {
                subSum += arr[k];
            }
            largeNum = max(largeNum, subSum);
        }
    }

    return largeNum;
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

    cout << sumarray_sum(arr, size);

    return 0;
}