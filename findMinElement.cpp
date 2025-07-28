#include <iostream>
using namespace std;

int findMin(int arr[], int n) {
    int minVal = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] < minVal)
            minVal = arr[i];
    }
    return minVal;
}

int main() {
    int arr[] = {20, 5, 13, 8, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Minimum Element: " << findMin(arr, n) << endl;

    return 0;
}
