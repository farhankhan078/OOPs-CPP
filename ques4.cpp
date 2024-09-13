#include <iostream>
using namespace std;

class A{
public:
    int n;
     A(){
        n = 10;
        cout<<"value of n: "<<n<<endl;;
     }

     A(int num){
        n = num;
        cout<<"value of n: "<<n<<endl;
     }

     ~A(){
      cout<<"Destructor called: num = "<<n<<endl;
     }


};
int main(){
    A obj;

    A obj2(20);


    return 0;
}