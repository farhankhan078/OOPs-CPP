#include<iostream>
using namespace std;

class Car{
public:
    string carName;
    string Model;
    string Colour;
    int EnginePower;

    Car(string CarName,string model,string colour,int engPower){
        carName = CarName;
        Model = model;
        Colour = colour;
        EnginePower = engPower;
    }

    void getInfo(){
        cout<<"Car Name: "<<carName<<endl;
        cout<<"Car Model: "<<Model<<endl;
        cout<<"Car colour: "<<Colour<<endl;
        cout<<"Engine Power: "<<EnginePower<<endl<<"\n";
    }
};
int main(){
    Car carDetail("KIA","Seltos","Black",3000);
    Car carDetail2("KIA","SL6","White",2800);
    Car carDetail3("MAHINDRA","Thar","Black",3100);

    carDetail.getInfo();
    carDetail2.getInfo();
    carDetail3.getInfo();
return 0;
}