#include<iostream>
using namespace std;
class employee{
    protected:
    string name;
    int salary;
    public:
    void input(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter salary: ";
        cin>>salary;
    }
    void emp(){
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
class manager: public employee{
    string dept;
    public:
    void department(){
        cout<<"Enter department name: ";
        cin>>dept;
    }
    void show(){
        cout << "--- Manager Details ---" << endl;
        emp();
        cout<<"Manager Department is: "<<dept<<endl<<endl;
    }
};
class engineer:public employee{
    public:
    string specialization;
    void speci(){
        cout<<"Enter specialization name: ";
        cin>>specialization;
    }
    void show2(){
        cout << "--- Engineer Details ---" << endl;
        emp();
        cout<<"Engineer specialization is: "<<specialization;
    }
};
int main(){
    manager m;
    engineer e;
    cout << "--- Enter Manager Details ---" << endl;
    m.input();
    m.department();
    m.show();

    cout << "--- Enter Engineer Details ---" << endl;
    e.input();
    e.speci();
    e.show2();

    return 0;
}