#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Funkcja porównania
bool customCompare(char a, char b) {
    if (isdigit(a) && isdigit(b)) return a < b;
    if (isupper(a) && isupper(b)) return a < b;
    if (islower(a) && islower(b)) return a < b;

    if (isdigit(a)) return true;   // Liczby
    if (isdigit(b)) return false;

    if (isupper(a)) return true;   // Litery duże
    if (isupper(b)) return false;

    return false;  // Litery male
}

// Sortowanie bąbelkowe
void bubbleSort(string &s) {
    int n = s.length();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (!customCompare(s[j], s[j + 1])) {
                swap(s[j], s[j + 1]);  // Wymiana
            }
        }
    }
}

int main() {
    string input;
    cout << "Input data: ";
    getline(cin, input);

    // Удаляем пробелы
    input.erase(remove_if(input.begin(), input.end(), ::isspace), input.end());

    // Сортируем пузырьковой сортировкой
    bubbleSort(input);

    cout << "Sorted string: " << input << endl;
    return 0;
}
