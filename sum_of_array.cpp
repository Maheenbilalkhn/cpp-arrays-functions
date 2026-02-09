#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter size of array: ";
    cin >> size;

    int arr[size], sum = 0;

    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum of array = " << sum << endl;

    return 0;
}

