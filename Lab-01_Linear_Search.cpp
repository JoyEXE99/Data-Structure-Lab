#include <iostream>
using namespace std;

int main() {
    int n, search, found = 0;

    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> search;

    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            cout << search << " is present at location " << i + 1 << ".\n";
            found = 1;
            break;
        }
    }

    if (!found) {
        cout << search << " is not present in the array.\n";
    }

    return 0;
}