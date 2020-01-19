#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> v;
    v.resize(n);
    for(int i = 0 ; i < n ; i++)
       cin >> v[i];
    int pos;
    cin >> pos;
    --pos;
    v.erase(v.begin()+pos);
    int l,r;
    cin >> l >> r;
    --l;
    --r;
    v.erase(v.begin()+l,v.begin()+r);
    cout << (int)v.size() << '\n';
    for(auto &el : v)
      cout << el << ' ';
    return 0;
}
