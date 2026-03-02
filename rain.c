#include <stdio.h>

int maxWater(int arr[], int n) {
    int left = 0;
    int right = n - 1;
    int leftMax = 0, rightMax = 0;
    int water = 0;

    while (left <= right) {
        
        if (arr[left] <= arr[right]) {
            
            if (arr[left] >= leftMax)
                leftMax = arr[left];
            else
                water += leftMax - arr[left];
            
            left++;
        }
        else {
            
            if (arr[right] >= rightMax)
                rightMax = arr[right];
            else
                water += rightMax - arr[right];
            
            right--;
        }
    }

    return water;
}

int main() {
    int arr[] = {3, 0, 1, 0, 4, 0, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Total Water Trapped: %d", maxWater(arr, n));

    return 0;
}
