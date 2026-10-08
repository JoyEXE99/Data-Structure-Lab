#include <iostream>
using namespace std;

int main() {
    int n, search;

    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter " << n << " sorted integers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter value to find: ";
    cin >> search;

    int first = 0, last = n - 1;
    int middle = (first + last) / 2;

    while (first <= last) {
        if (arr[middle] < search) {
            first = middle + 1;
        } else if (arr[middle] == search) {
            cout << search << " found at location " << middle + 1 << ".\n";
            break;
        } else {
            last = middle - 1;
        }
        middle = (first + last) / 2;
    }

    if (first > last) {
        cout << "Not found! " << search << " isn't present in the list.\n";
    }

    return 0;
}