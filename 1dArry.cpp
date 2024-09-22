#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr;
    int n, element;
    cout << "Enter the number of elements to insert: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> element;
        arr.push_back(element);
    }
    cout << "Array elements: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
