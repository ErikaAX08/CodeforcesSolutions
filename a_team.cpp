#include <iostream>

using namespace std;

int main() {
  int n = 0;
  cin >> n;
  long long sum = 0;

  for(int i = 0; i < n; i++) {
    int a, b, c;
    cin >> a >> b >> c;

    if(a + b + c >= 2) {
      sum++;
    }
  }

  cout << sum << endl;
}