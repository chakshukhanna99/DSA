#include <iostream>
using namespace std;
#include <climits>

int main() {
  int n;
  cin >> n;
  int max = INT_MIN, secondMax = INT_MIN;
  int n2;
  int count = 1;

  while (count <= n) {
    cin >> n2;
    if (n2 > max) {
      secondMax = max;
      max = n2;
    } else if (n2 > secondMax && n2 != max) {
      secondMax = n2;
    }
    count++;
  }
  cout << secondMax << endl;
}
