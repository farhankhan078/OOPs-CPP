#include <iostream>
using namespace std;
class A{
protected:
    string First_name;
public:
    void input(){
        cout<<"Enter First Name: ";
        cin>>First_name;
    }
};
class B: public A{
    string Last_name;
    public:
    void input2(){
        cout <<"Enter Last name: ";
        cin>>Last_name;
    }

    void get(){
        cout<<"Full name is: "<<First_name <<" "<< Last_name;
    }
};
int main(){
    B obj;
    obj.input();
    obj.input2();
    obj.get();
return 0;
}