#include <iostream>
using namespace std;

int findMax(int arr[], int n) {
    int maxVal = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
    return maxVal;
}

int main() {
    int arr[] = {10, 25, 7, 39, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum Element: " << findMax(arr, n) << endl;

    return 0;
}
