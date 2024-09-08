#include<iostream>
using namespace std;

  int printFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm = 0;
      for (int i = 1; i <= n; ++i) {
        
        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }

        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }

        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        if (i != n) {
        cout << nextTerm << ", ";
        } else {
        cout << nextTerm ;
        }
        
    }
}

int main() {

    printFibonacci(10);

    return 0;
}