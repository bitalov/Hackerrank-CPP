#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
   stringstream ss;
    ss << str;
    vector<int> ret;
    bool i = 1;
    while(ss)
    {
       if(i)
          {
              int a;
              ss >> a;
              ret.push_back(a);
          }
        else
        {
            char c;
            ss >> c;
        }
        i^=1;
    }

    return ret;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

