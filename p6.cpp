#include <bits/stdc++.h>
using namespace std;
void update(int *a,int *b) {
    int tmp = *a;
    *a += *b;
    *b =  abs(*b - tmp);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    cin >> a >> b;
    update(pa, pb);
    cout << a << '\n' << b ;

    return 0;
}

