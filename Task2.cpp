#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char temp;
    char array[]{"TGP"};
    int size = strlen(array); //длинна char без учёта 0
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << ' ';
    }
    cout<<endl;
    cout << "*********" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size-1; j++)
        {
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << ' ';
    }
    return 0;
}

//toascii