#include <bits/stdc++.h>

using namespace std;


int main() {
    int q;
    cin >> q;
    map<string,int> mp;
    while(q--)
    {

      int t;
      cin >> t;
      if(t == 1)
      {
         int y;
         string x;
         cin >> x >> y;
         mp[x]+=y;
      }
      else if(t == 2)
      {
         string x;
         cin >> x;
         mp[x] = 0;
      }
      else
      {
         string x;
         cin >> x;
         cout << mp[x] << '\n';

      }

    }


}
