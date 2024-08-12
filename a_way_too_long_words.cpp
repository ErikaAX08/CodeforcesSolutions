#include <iostream>
#include <list> 
using namespace std;

int main() {
  int n;
  list<string> w;
  string s;

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> s;
    w.push_back(s);
  }

  for(auto it = w.begin(); it != w.end(); ++it) {
    if(it->length() > 10) {
      cout << it->front() << it->length() - 2 << it->back() << endl;
    } else {
      cout << *it << endl;
    }
  }

  return 0;
}