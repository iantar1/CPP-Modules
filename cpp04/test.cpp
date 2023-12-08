// virtual members
#include <iostream>
using namespace std;

class Base {
  protected:
    int var;
  public:
   virtual void area () { std::cout << "Base\n"; }

   ~Base(){std::cout << "Base destructotr\n";}
    Base(){std::cout << "Base Constructotr\n";}
};

class Child1: public Base {
  public:
    void area () { std::cout << "child1\n"; } 

    virtual ~Child1(){std::cout << "child1 destructotr\n";}
    Child1(){std::cout << "child1 Constructotr\n";}
};

class Child2: public Base {
  public:
     void area () { std::cout << "child1\n"; }
    void tt(){std::cout << "ll\n";}

    ~Child2(){std::cout << "Child2 destructotr\n";}
    Child2(){std::cout << "child2 Constructotr\n";}
};

int main () {
  Child1 ch1;
  //Base base1;

  Base * base1 = &ch1;
  base1->area();
  //Base * base3 = &base1;
  //Base * base2 = new Child1;
 // Base * base3 = new Base;

  
  // ch1.area();
  // base2->area();
  // base3->area();
  // delete base2;
  return 0;
}