#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> v;
    v.resize(n);
    for(int i = 0 ; i < n ; i++)
       cin >> v[i];
   int q;
   cin >> q;
   while(q--)
      {
         int x;
         cin >> x;
         auto idx = lower_bound(v.begin(),v.end(),x) - v.begin();
         if(v[idx] == x)
              cout << "Yes ";
         else
              cout << "No ";

         cout << idx + 1 << '\n';
      }
}
