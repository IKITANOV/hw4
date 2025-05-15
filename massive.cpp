#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main() {
    srand(time(0));

    int size;
    cout << "Ведите размер(5-100.000 ";
    cin >> size;

    if (size <= 0) size = 5;
    if (size > 100000) size = 100000;

    int* ar = new int[size];

    for (int i = 0; i < size; i++) {
        ar[i] = rand() % 100;
        cout << ar[i] << ", ";
    }
    cout << "\n";

    if (size > 0) {
        int* temp = new int[size - 1];
        for (int i = 0; i < size - 1; i++) {
            temp[i] = ar[i];
        }
        delete[] ar;
        ar = temp;
        size--;

        cout << "поле после изменения\n";
        for (int i = 0; i < size; i++) {
            cout << ar[i] << ", ";
        }
        cout << "\n";
    }

    int value;
    cout << "ведите номер для начала ";
    cin >> value;

    int* temp = new int[size + 1];
    temp[0] = value;
    for (int i = 0; i < size; i++) {
        temp[i + 1] = ar[i];
    }
    delete[] ar;
    ar = temp;
    size++;

    cout << "поле после замены удаления \n";
    for (int i = 0; i < size; i++) {
        cout << ar[i] << ", ";
    }
    cout << "\n";

    cout << "ведите число в центре ";
    cin >> value;

    int middle = size / 2;
    temp = new int[size + 1];
    for (int i = 0; i < middle; i++) {
        temp[i] = ar[i];
    }
    temp[middle] = value;
    for (int i = middle; i < size; i++) {
        temp[i + 1] = ar[i];
    }
    delete[] ar;
    ar = temp;
    size++;

    cout << "после после добавлении мидл точки\n";
    for (int i = 0; i < size; i++) {
        cout << ar[i] << ", ";
    }
    cout << "\n";

    delete[] ar;
}
