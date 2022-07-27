#include <iostream>
using namespace std;

/*Insertion sort - Like playing card we will passthrough every card to place in right position.

Insert an element form unsort array to correct positon in sorted array

1st element is always sorted, rest of the elements are unsorted.

check elements from unsorted to sorted if element in sorted is greater then swap

*/
void ins_sort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp)
        // If j is +ve and sorted array element is greater then move 1 position of sorted array
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = temp;
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

    ins_sort(arr, size);

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}