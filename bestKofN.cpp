#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
  //best k of n
  //do someting....
  priority_queue<int> q;
  int n = 10;
  int k = 3;
  for (int i = 0;i < n;i++) {
    int tmp;
    cout << "Please enter data #" << i << ": ";
    cin >> tmp;
    q.push(tmp);
  }
  for (int i = 1;i <= k;i++ ) {
    cout<<q.top()<<" ";
    q.pop();
  }
  /// do something else....
  // that print  best K member of those n data
}
