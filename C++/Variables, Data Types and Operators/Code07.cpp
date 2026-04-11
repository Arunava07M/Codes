#include <iostream>
using namespace std;

int main() {
  int a = 5;
  double b = 2;
  cout << "Division = " << (a / b) << endl;

  cout << "Division = " << (7 / (double)3) << endl; // Nice example of Type Casting

  // But now below you will see big data type getting converted to small data
  // type
  int c = (7 / (double)3);
  cout << "division = " << c << endl; // Prints 2 not 2.33333
  return 0;
}
