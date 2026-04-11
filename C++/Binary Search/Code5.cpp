//This is the way to write the "peak index in mountain array" using function for MY CODE
#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int start = 0;
    int end = arr.size() - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] < arr[mid + 1]) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }
    return start;
}

int main() {
    vector<int> arr = {0, 3, 9, 5, 2};
    int peakIndex = peakIndexInMountainArray(arr);
    cout << "Peak found at index = " << peakIndex << endl;
    return 0;
}
