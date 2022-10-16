#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
  // best k of n
  
  // TODO: read from STDIN
  int n = 10;
  int k = 3;
  
  priority_queue<int> q;

  // get input data 
  for (int i = 0;i < n;i++) {
    int tmp;
    cout << "Please enter data #" << i << ": ";
    cin >> tmp;
    q.push(tmp);
  }
  
  // print best K member(s) from given n data
  for (int i = 1;i <= k;i++ ) {
    cout<<q.top()<<" ";
    q.pop();
  } 
}
