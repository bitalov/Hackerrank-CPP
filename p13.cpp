#include <bits/stdc++.h>

using namespace std;


int main() {
    int q;
    cin >> q;
    set<int> s;
    while(q--)
    {
      int t,x;
      cin >> t >> x;
      if(t == 1)
      {
          s.insert(x);
      }
      else if(t == 2)
      {
          if(s.count(x))
              s.erase(x);
      }
      else
      {
         if(s.count(x))
            cout << "Yes\n";
         else
            cout << "No\n";
      }
    }


}
