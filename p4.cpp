#include <bits/stdc++.h>

using namespace std;

unordered_map<int,string> word;
string parity(int n)
  {
       return (n ? "odd" : "even");
  }
int main()
{
    int a,b;
    cin >> a >> b;
    word[1] = "one";
    word[2] = "two";
    word[3] = "three";
    word[4] = "four";
    word[5] = "five";
    word[6] = "six";
    word[7] = "seven";
    word[8] = "eight";
    word[9] = "nine";
    for(int i = a ; i <= b ; i++)
      {
            if(i > 9)
              cout << parity(i & 1) << '\n';
            else
              cout << word[i] << '\n';
      }
    
       
    

    return 0;
}
