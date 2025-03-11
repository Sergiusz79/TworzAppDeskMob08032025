#include <iostream>

using namespace std;

int arr[];

void printArray(int *arr, size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
};

void sortArray(int *arr, size_t size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
};

int main()
{
    int temp;
    int array[]{9, 3, 5, 1, 7};
    size_t size = sizeof(array) / sizeof(array[0]);
    printArray(array, size);
    cout << "*********" << endl;

    sortArray(array, size);
    printArray(array, size);
    return 0;
}