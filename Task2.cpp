#include <iostream>
#include <cstring>

using namespace std;

void printArray(char *arr, size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
};

void sortArray(char *arr, size_t size)
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
    char temp;
    char array[]{"TGP"};
    size_t size = strlen(array); //длинна char без учёта 0
    printArray(array, size);
    cout << "*********" << endl;
    sortArray(array, size);
    printArray(array, size);
    return 0;
}