#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int m, int x) {
    int low = 0, high = m - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n, m, x;
    cin >> n >> m;

    int array_A[n];
    int array_B[m];

    // input array A
    for (int i = 0; i < n; i++) {
        cin >> array_A[i];
    }
    
    // input array B
    for (int i = 0; i < m; i++) {
        cin >> array_B[i];
    }
    
    // input nilai yang dicari
    cin >> x;

    // pencarian
    int index_A = linearSearch(array_A, n, x);
    int index_B = binarySearch(array_B, m, x);

    // output
    if (index_A != -1 && index_B != -1) {
        cout << "KEDUANYA " << index_A << " " << index_B << endl;
    } else if (index_A != -1) {
        cout << "BHASA " << index_A << endl;
    } else if (index_B != -1) {
        cout << "SENA " << index_B << endl;
    } else {
        cout << "TIDAK DITEMUKAN" << endl;
    }
    
    return 0;
}