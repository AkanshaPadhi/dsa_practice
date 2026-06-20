#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int height[] = {1,8,6,2,5,4,8,3,7};
    int n = sizeof(height)/sizeof(height[0]);
    int maxwater = 0;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            int mini = min(height[i], height[j]);
            int water = mini * (j - i);
            maxwater = max(maxwater, water);
        }
    }
    cout << maxwater;
    return 0;
}
