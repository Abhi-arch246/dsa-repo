#include <iostream>
using namespace std;

/*Bubble sort - Swapping repeatedly with the adjacent elements to attain sort.

For n elements we will get result in n-1 iterations.

Will check one element less at the last for every iteration.
*/
void bubble_sort(int arr[], int size)
{
    int count = 1;
    while (count < size)
    {
        for (int i = 0; i < size - count; i++)
        {
            if (arr[i] > arr[i + 1])
                swap(arr[i], arr[i + 1]);
        }

        count++;
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

    bubble_sort(arr, size);

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}