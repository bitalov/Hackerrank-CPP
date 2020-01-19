#include <bits/stdc++.h>

using namespace std;

//The Constraints Are Very Strict
// Even O(NLogK) Solution Couldn't Pass
// You Need An O(N) Solution :( 

int main(){
    ios::sync_with_stdio();
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int> v;
        v.resize(n);
        deque<int> q;
        for(int i = 0 ; i < n ; i++)
          cin >> v[i];
        
        for(int i = 0 ; i < k ; i++)
        {
            while(!q.empty() and v[i] >= v[q.back()])
                   q.pop_back();
            q.push_back(i);
        }
        cout << v[q.front()] << ' ';
        for(int i = k ; i < n ; i++)
        {
            while((int)q.size() and q.front() <= (i - k))
                   q.pop_front();
                   
            while((int)q.size() and v[i] >= v[q.back()])
                   q.pop_back();
                   
            q.push_back(i);
            cout << v[q.front()] << ' ';
        }
        cout << '\n';
        
        
           

    }
    
      return 0;
}

