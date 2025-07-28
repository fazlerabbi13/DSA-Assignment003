#include <iostream>
#include <cmath> // For abs function

using namespace std;

int main() {
    int N;
    cin >> N;
    int matrix[N][N];
    
    // Reading the matrix
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> matrix[i][j];
        }
    }
    
    int primary_sum = 0, secondary_sum = 0;
    
    // Calculating the sums of the primary and secondary diagonals
    for (int i = 0; i < N; ++i) {
        primary_sum += matrix[i][i];
        secondary_sum += matrix[i][N - 1 - i];
    }
    
    // Output the absolute difference
    cout << abs(primary_sum - secondary_sum) << endl;
    
    return 0;
}