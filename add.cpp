//adding two number in c++ using class.
//You can run this program on online c++ compiler

#include <iostream>
using namespace std;

class add{
public:
    int n1, n2;

    void input(){
        cin >> n1 >> n2;
    }
    void get(){
        cout << "Sum is: " << n1 + n2;
    }
};

int main(){
    add a;
    a.input();
    a.get();
}
