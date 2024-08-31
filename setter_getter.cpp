#include <iostream>
using namespace std;
class Student {
    private:
        string name;
        string course;
        int marks;
    public:
        void setName(string newName) {
            name = newName;
        }
         void setCourse(string newCourse) {
            course = newCourse;
        }
        void setMarks(int newMarks){
             marks = newMarks;
       }
        void Student_Info() {
            cout << "Name: " << name << endl;
            cout << "Course: " << course << endl;
            cout << "Marks: " << marks << endl;
        }
};
int main() {
    Student obj;
    obj.setName("Akansha");
    obj.setMarks(89);
    obj.setCourse("OOPs in C++");
    obj.Student_Info();
    return 0;
}