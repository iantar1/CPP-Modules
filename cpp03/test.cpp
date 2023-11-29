# include <iostream>

class test
{
private:
    int a;
public:
    test(/* args */);
    ~test();
    test(int);
    //
    //test(test& obj);
    //void    fun1(test obj);
    //void    fun2(test& obj);
    test(test&);
	test& operator=(const test);
};

test::test(test& other)
{
    std::cout << "copy cnst\n";
    a = other.a;
    //*this = other;
}

test& test::operator=(const test other)
{
    std::cout << "copy assgi\n";
    a = other.a;
    return (*this);
}

test::test(int val)
{
    std::cout << "constructor\n";
    a = val;
}

// void    test::fun1(test obj)
// {

// }
// void    test::fun2(test& obj)
// {

// }

test::test(/* args */)
{
}

test::~test()
{
}

class A 
{
    public:
       int x;
       void set(int i)
       {
        y = i;
       }
       int get()
       {
        return (y);
       }
       A()
       {
            y = 0;
            std::cout << "A const\n";
       }
    protected:
       int y;
    private:
       int z;
};

class B : public A, public std::string
{
public:
    B()
       {
            y = 0;
            std::cout << "B const\n";
       }
    // x is public
    // y is protected
    // z is not accessible from B
};

class C : protected A
{
    // x is protected
    // y is protected
    // z is not accessible from C
};

class D : private A    // 'private' is default for classes
{
    // x is private
    // y is private
    // z is not accessible from D
};







#include<iostream>
using namespace std;
class Person {
   // Data members of person 
public:
    Person(int x)  { cout << "Person::Person(int ) called" << endl;   }
};
 
class Faculty : public Person {
   // data members of Faculty
public:
    Faculty(int x):Person(x)   {
       cout<<"Faculty::Faculty(int ) called"<< endl;
    }
};
 
class Student : public Person {
   // data members of Student
public:
    Student(int x):Person(x) {
        cout<<"Student::Student(int ) called"<< endl;
    }
};
 
class TA : public Faculty, public Student  {
public:
    TA(int x):Student(x), Faculty(x)   {
        cout<<"TA::TA(int ) called"<< endl;
    }
};
 
int main()  {
    TA ta1(30);
}