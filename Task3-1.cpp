#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool customSort(char a, char b) {
    if (isdigit(a) && isdigit(b)) return a < b;
    if (isupper(a) && isupper(b)) return a < b;
    if (islower(a) && islower(b)) return a < b;

    if (isdigit(a)) return true;   // Цифры идут первыми
    if (isdigit(b)) return false;

    if (isupper(a)) return true;   // Затем заглавные буквы
    if (isupper(b)) return false;

    return false;  // Нижний регистр идёт последним
}

int main() {
    string input;
    cout << "Input data: ";
    getline(cin, input);

    // Удаляем пробелы
    input.erase(remove_if(input.begin(), input.end(), ::isspace), input.end());

    sort(input.begin(), input.end(), customSort);

    cout << "Sorted string: " << input << endl;
    return 0;
}