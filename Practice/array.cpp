#include <iostream>

using namespace std;

/* Arrays intro:
 int a[100],
 int a[100]={0},
 int a[100]={1,2,3},
 int a[] = {1,2,3}
 string fruits[4]={'abc','def','ghi'}
*/

void printArray(int arr[], int size)
{
    cout << "Inside print function" << endl;
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[100] = {0};
    int size;
    cout << "Enter the size of array" << endl;
    cin >> size;

    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Inside Main program" << endl;
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
    printArray(arr, size);

    return 0;
}