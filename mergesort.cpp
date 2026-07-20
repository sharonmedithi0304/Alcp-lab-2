#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high) {
    int b[100];
    int i = low;
    int j = mid + 1;
    int k = low;

    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            b[k] = arr[i];
            i++;
        } else {
            b[k] = arr[j];
            j++;
        }
        k++;
    }

    while (i <= mid) {
        b[k] = arr[i];
        i++;
        k++;
    }

    while (j <= high) {
        b[k] = arr[j];
        j++;
        k++;
    }

    for (int x = low; x <= high; x++) {
        arr[x] = b[x];
    }
}

void mergesort(int arr[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;

        mergesort(arr, low, mid);
        mergesort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];

    cout << "Enter numbers for sorting:\n";
    for (int c = 0; c < n; c++) {
        cin >> arr[c];
    }

    mergesort(arr, 0, n - 1);

    cout << "Sorted array:\n";
    for (int c = 0; c < n; c++) {
        cout << arr[c] << " ";
    }

    return 0;
}