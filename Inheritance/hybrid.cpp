
// hybrid inheritance Using Multilevel Inheritance and Hierarchical Inheritance
  
#include <iostream> 
using namespace std; 
  
class Meal { 
public: 
    void print() 
    { 
        cout << "Different types of meals are served :"
             << endl; 
    } 
}; 
   
class Breakfast : public Meal { 
public: 
    void print() 
    { 
        cout << "\nBreakfast is a type of meal." << endl; 
    } 
}; 
   
class Milk : public Breakfast { 
public: 
    void print() 
    { 
        cout << "Milk served in breakfast." << endl; 
    } 
}; 
   
class Yoghurt : public Milk { 
public: 
    void print() 
    { 
        cout << "Yoghurt made from milk." << endl; 
    } 
}; 
   
class Dessert : public Meal { 
public: 
    void print() 
    { 
        cout << "\nDessert is a type of meal." << endl; 
    } 
}; 
  
class Sweets : public Dessert { 
public: 
    void print() 
    { 
        cout << "Sweets served in Dessert." << endl; 
    } 
}; 
  
class Pastry : public Sweets { 
public: 
    void print() 
    { 
        cout << "Pastry is a type of sweet." << endl; 
    } 
}; 
  
int main() 
{ 
    Meal types; 
    Breakfast servedBreakfast; 
    Milk milk; 
    Yoghurt yoghurt; 
    Dessert servedDessert; 
    Sweets sweet; 
    Pastry pastry; 
  
    types.print(); 
    servedBreakfast.print(); 
    milk.print(); 
    yoghurt.print(); 
    servedDessert.print(); 
    sweet.print(); 
    pastry.print(); 
  
    return 0; 
}