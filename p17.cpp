#include <bits/stdc++.h>

using namespace std;


int main() {
      int n;
      cin >> n;
      vector<int >v;
      v.resize(n);
      for(int i = 0 ; i < n ; i++)
        cin >> v[i];
      sort(v.begin(),v.end());
      for(auto &el : v)
        cout << el << ' ';
    return 0;
}
