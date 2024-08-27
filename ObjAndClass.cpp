#include<iostream>
using namespace std;

class Phone{
    public:
    string name;
    string model;
    int manufacture;

};
int main(){
    Phone phn;
    phn.name = "Vivo";
    phn.model = "vivo 1909";
    phn.manufacture = 2019;
    cout<<"Name: "<<phn.name<<endl;
    cout<<"Model Name: "<<phn.model<<endl;
    cout<<"Manufacture: "<<phn.manufacture<<endl;
return 0;  
}