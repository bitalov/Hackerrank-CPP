#include <bits/stdc++.h>

using namespace std;

unordered_map<int,string> word;

int main()
{
    int n;
    cin >> n;
    word[1] = "one";
    word[2] = "two";
    word[3] = "three";
    word[4] = "four";
    word[5] = "five";
    word[6] = "six";
    word[7] = "seven";
    word[8] = "eight";
    word[9] = "nine";
    
    if(n > 9)
       cout << "Greater than 9";
    else
       cout << word[n];
       
    // Write Your Code Here

    return 0;
}
