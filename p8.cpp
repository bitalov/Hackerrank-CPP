#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 5;

vector<int> g[MAXN];

int main() {
    
    int n,q;
    cin >> n >> q;
    for(int i = 0 ; i < n ; i++)
    {
       int len;
       cin >> len;
       g[i].resize(len);
       for(int j = 0 ; j < len ; j++)
            cin >> g[i][j];
    }

    while(q--)
    {
      int i,j;
      cin >> i >> j;
      cout << g[i][j] << '\n';
    }

    return 0;
}
