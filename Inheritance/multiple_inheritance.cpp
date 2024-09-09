/*

*/

//Without Constructor
#include<iostream>
using namespace std;

class Person {
protected:
    string name = "Saldina";
    int age = 25;

public:
    void personName() {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }
};

class Profession {
protected:
    string professionName = "YouTuber"; 

public:
    void profession() {
        cout << "Profession : " << professionName << endl;
    }
};

class Follower : public Person, public Profession {
protected:
    string followerCount = "2.3 Million"; 

public:
    void personFollower() {
        cout << "Follower: " << followerCount << endl;
    }
};

int main() {
    Follower obj;
    obj.personName();
    obj.profession();
    obj.personFollower();

    return 0;
}




//USing constructor.

/*
#include<iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:

    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void personName() const {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }
};

class Profession {
protected:
    string professionName;

public:
    Profession(string professionName) {
        this->professionName = professionName;
    }

    void profession() const {
        cout << "Profession : " << professionName << endl;
    }
};

class Follower : public Person, public Profession {
protected:
    string followerCount;

public:
    Follower(string name, int age, string professionName, string followerCount) : Person(name, age), Profession(professionName) {
        this->followerCount = followerCount;
    }

    void personFollower() const {
        cout << "Follower: " << followerCount << endl;
    }
};

int main() {
    Follower obj("Saldina", 25, "YouTuber", "2.3 Million");

    obj.personName();
    obj.profession();
    obj.personFollower();

return 0;
}
*/
