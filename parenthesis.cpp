#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    int result[100];

    for (int i = 0; i < n; i++)
        result[i] = -1;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    stack<int> st;

    for (int i = 0; i < n; i++) {
        while (!st.empty() && arr[i] > arr[st.top()]) {
            result[st.top()] = arr[i];
            st.pop();
        }

        st.push(i);
    }

    cout << "Next Greater Elements: ";

    for (int i = 0; i < n; i++)
        cout << result[i] << " ";

    return 0;
}
