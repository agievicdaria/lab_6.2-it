#include <iostream>
#include <climits>
#include <ctime> 
#include <iomanip>

using namespace std;

void generateArray(int a[], int size, int low, int high) {
    for (int i = 0; i < size; i++) {
        a[i] = low + rand() % (high - low + 1);
    }
}

void printArray(const int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << setw(4) << arr[i] << " ";
    }
    cout << endl;
}

void swapMinMax(int arr[], int n) {
    int maxIndex = 0;
    int minIndex = 0;

    for (int i = 1; i < n; ++i) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        } else if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;
}

int main() {
    int n, min, max;
    cout << "Введіть розмір масиву: "; cin >> n;
    cout << "Введіть мінімальне значення масиву: "; cin >> min;
    cout << "Введіть максимальне значення масиву: "; cin >> max;

    int arr[n];

    cout << "Початковий масив:" << endl;
    srand((unsigned)time(NULL));
    generateArray(arr, n, min, max);
    printArray(arr, n);

    swapMinMax(arr, n);

    cout << "Модифікований масив:" << endl;
    printArray(arr, n);

    return 0;
}