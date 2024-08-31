
/*Multilevel inheritance is a type of inheritance in object-oriented programming where a class is derived from another derived class, creating a chain of inheritance.
In this hierarchy, each derived class inherits properties and behaviors from its immediate base class, and indirectly, from all its ancestor classes.*/

#include <iostream>
using namespace std;

class A{
protected:
    int a = 5;

public:
    void input(){
        cout << "First no.: " << a << endl;
    }
};
class B : public A{
public:
    int b = 5;
    void input2(){
        cout << "Second no. : " << b << endl;
    }
};
class C : public B{
public:
    int c = 5;
    void input3(){
        cout << "third no. : " << c << endl;
    }
    void result(){
        cout << "sum : " << a + b + c << endl;
    }
};
int main(){
    C obj;
    obj.input();
    obj.input2();
    obj.input3();
    obj.result();
}
