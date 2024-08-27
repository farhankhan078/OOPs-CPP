/* This is the simple program which demonstrate the defualt argument in c++.

    During the calling of function, the values are copied from left to right.

    All the values that will be given default value will be on the right.

        i.e: datatype function_name (argument1, argument2, argument3 = value) //argument3 must be default, if not then it shows error

        eg. int data(int a,int b, int c=50)
*/

#include <iostream>
using namespace std;
class defaultArg
{
public:
    int l, b;
    void get(int x, int y = 50)
    {
        cout << "Perimeter of rectangle is : " << 2 * (x + y);
    }
};
int main()
{
    defaultArg p;
    p.get(30);
}