//This is the way to write the "peak index in mountain array" using function for 
//Ma'am 's Code
#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int n = arr.size();
    int start = 1;
    int end = n - 2;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        // Peak condition
        if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]) {
            return mid;  // Found peak, return index
        }

        // Move right if slope is increasing
        if (arr[mid - 1] < arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return -1;  // Just in case, though for valid mountain arrays, this won't be reached
}

int main() {
    vector<int> arr = {0, 3, 9, 5, 2};
    int peakIndex = peakIndexInMountainArray(arr);
    cout << "Peak found at index = " << peakIndex << endl;
    return 0;
}