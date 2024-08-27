#include <iostream>
using namespace std;

class ConvertTemp{
public:
    float f;

    void fahrenheit(){
        cout<<"Enter Fahrenheit to convert in celcius: "<<endl;
        cin>>f;
    }

    void Celcius(){
        float celcius = ((f-32)*5/9);
        cout<<"Celcius is: "<<celcius;
    }
};
int main(){
    ConvertTemp tmp;
    tmp.fahrenheit();
    tmp.Celcius();
return 0;
}