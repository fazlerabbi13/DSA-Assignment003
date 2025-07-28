#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;
    long long A[N];
    long long sum = 0;
    
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        sum += A[i];
    }
    
    cout << abs(sum) << endl;
    
    return 0;
}