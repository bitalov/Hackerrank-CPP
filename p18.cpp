#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string a,b;
    cin >> a >> b;
    cout << (int)a.size() << ' ' << (int)b.size() << '\n';
    cout << a + b << '\n';
    swap(a[0],b[0]);
    cout << a << ' ' << b << '\n';
  
  
    return 0;
}

