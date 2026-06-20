#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int maxwater = 0;
    int height[] = {1,8,6,2,5,4,8,3,7};
    int n = sizeof(height) / sizeof(height[0]);
    int lp = 0;
    int rp = n - 1;
    while (lp < rp) {
        int mini = min(height[lp], height[rp]);
        int water = mini * (rp - lp);
        maxwater = max(maxwater, water);
        if (height[lp] < height[rp]) {
            lp++;
        } else {
            rp--;
        }
    }
    cout << maxwater;
    return 0;
}
