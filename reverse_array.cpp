#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];

    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Reversed array: ";
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}

