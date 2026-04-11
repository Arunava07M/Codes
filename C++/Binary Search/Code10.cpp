// Book Allocation Problem
// My Code which works for 2 students but will not work for more than 2 students
// as for each new student coming extra for loop needs to be added
// which increases time complexity

#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> arr = {2, 1, 3, 4};
  int n = arr.size();

  int m = 2;

  int maximum = 0;
  int c = INT_MAX;

  for (int i = 0; i <= n - m; i++) {
    int a = 0;
    for (int j = 0; j <= i; j++) {
      a = a + arr[j];
      int b = 0;
      for (int k = j + 1; k <= n - 1; k++) {
        b = b + arr[k];
      }
      maximum = max(a, b);
    }
    c = min(maximum, c);
  }
  cout << "ans = " << c << endl;
  return 0;
}
