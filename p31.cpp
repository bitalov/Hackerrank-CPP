#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
// it gives TLE if you pass by value however even passing by reference in C++ 14
// will give you TLE idk why actually , but it passes with C++ (Wthiout 14) ~.B1L4L
template <class T>
class AddElements{
    T x;
    public:
        AddElements(const T &a){x=a;}
        T add(const T &b){return x+b;}
};

template<>
class AddElements<string>{
    string x;
    public:
        AddElements(const string &a){x=a;}
        string concatenate(const string &b){return x+b;}
};

int main () {
  int n,i;
  cin >> n;
  for(i=0;i<n;i++) {
    string type;
    cin >> type;
    if(type=="float") {
        double element1,element2;
        cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        cout << myfloat.add(element2) << endl;
    }
    else if(type == "int") {
        int element1, element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }
    else if(type == "string") {
        string element1, element2;
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}
