#include <bits/stdc++.h>
using namespace std;

string tostring(int x)
{
    return to_string(x);
}

struct Student
{
int age,standard;
string first_name,last_name;
void set_age(int x)
{
     age = x;
}
void set_standard(int x)
{
     standard = x;
}
void set_first_name(string x)
{
     first_name = x;
}
void set_last_name(string x)
{
     last_name = x;
}

int get_age(){
     return age;
}
int get_standard(){
     return standard;
}
string get_first_name(){
     return first_name;
}
string get_last_name(){
     return last_name;
}

string to_string()
{
  string ret = tostring(age) + "," + first_name + "," + last_name + "," + tostring(standard);
  return ret;
}

};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}

