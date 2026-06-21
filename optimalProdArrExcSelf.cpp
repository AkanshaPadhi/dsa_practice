
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int pre[4];
    pre[0] = 1;
    for (int i = 1; i < n; i++) {
        pre[i] = pre[i - 1] * arr[i - 1];
    }

    int post[4];
    post[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--) {
        post[i] = post[i + 1] * arr[i + 1];
    }

    int ans[4];
    for (int i = 0; i < n; i++) {
        ans[i] = pre[i] * post[i];
        cout << ans[i] << " ";
    }
    return 0;
}