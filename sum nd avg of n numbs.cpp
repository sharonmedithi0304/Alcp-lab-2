#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[100];
    int sum = 0;
    float avg;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int j = 0; j < n; j++) {
        sum = sum + arr[j];
    }

    avg = (float)sum / n;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << avg << endl;

    return 0;
}