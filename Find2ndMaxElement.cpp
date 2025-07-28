#include <iostream>
#include <climits>
using namespace std;

int findSecondMax(int arr[], int n) {
    int max1 = INT_MIN, max2 = INT_MIN;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] < max1) {
            max2 = arr[i];
        }
    }
    if (max2 == INT_MIN)
        return -1; // Not found
    return max2;
}

int main() {
    int arr[] = {10, 5, 20, 20, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findSecondMax(arr, n);
    if (result == -1)
        cout << "2nd maximum element not found." << endl;
    else
        cout << "2nd Maximum Element: " << result << endl;

    return 0;
}
