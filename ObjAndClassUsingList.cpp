#include<iostream>
#include<list>
using namespace std;

class YouTUbe{
    public:
    string name;
    string Owner;
    int subscriber;
    list<string> title;
};
int main(){
    YouTUbe yt;
    yt.name = "Code Beauty";
    yt.Owner = "Saldina";
    yt.subscriber = 2000;
    yt.title = {"1. OOPS in C++","2. DSA in C/C++","3. Python","4. FrontEnd using React"};

    cout<<"Name: "<<yt.name<<endl;
    cout<<"Owner: "<<yt.Owner<<endl;
    cout<<"Subscriber count: "<<yt.subscriber<<endl;
    cout<<"Title: "<<endl;
    for(string ytTitle:  yt.title){
        cout<< ytTitle <<endl;
    }
    return 0;
}