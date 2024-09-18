#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& arr, int n) {
    for (int i = 1; i < n; i++) {
        int current = arr[i];
        int j = i - 1;
        
        // Shift elements of arr[0..i-1] that are greater than current
        while (j >= 0 && arr[j] > current) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current; // Place current at its correct position
    }
}

int main() {
    vector<int> v = {1, 4, 7, 2, 34, 12};
    insertionSort(v, v.size());

    // Output the sorted vector
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
