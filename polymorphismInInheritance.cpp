#include <bits/stdc++.h>
using namespace std;

class Parent {
public:
    void GeeksforGeeks_Print() {
        cout << "Base Function" << endl;
    }
};

class Child : public Parent {
public:
    void GeeksforGeeks_Print() {
        cout << "Derived Function";
    }
};

int main() {
    Child Child_Derived;
    Child_Derived.GeeksforGeeks_Print();
    return 0;
}