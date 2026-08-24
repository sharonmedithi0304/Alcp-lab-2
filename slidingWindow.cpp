#include <iostream>
using namespace std;

int main() {
    int n, k;
    int arr[100];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter window size: ";
    cin >> k;

    cout << "Sliding Window Maximum: ";

    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];

        for (int j = i; j < i + k; j++) {
            if (arr[j] > max)
                max = arr[j];
        }

        cout << max << " ";
    }

    return 0;
}
