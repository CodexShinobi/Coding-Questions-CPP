#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int>& height) {
    int left = 0, right = height.size() - 1;
    int max_area = 0;

    while (left < right) {
        int h = min(height[left], height[right]);
        int width = right - left;
        int area = h * width;
        max_area = max(max_area, area);

        // Move the pointer with the smaller height
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return max_area;
}

int main() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "Max Water Container Area: " << maxArea(height) << endl;
    return 0;
}
