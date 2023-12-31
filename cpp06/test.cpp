 #include <iostream>
#include <ctime>
#include <cstdlib>
// class VBase
// {
// public:
//     virtual ~VBase()
//     {

//     }
// };

// class Base
// {
// public:
//     int a;
//     //Base(){std::cout << "constr: " << &a << std::endl;}
// };

// class Drived : public VBase, public Base
// {
//     public:
//     Drived(){std::cout << "constr: " << &a << std::endl;}

// };


#include <iostream>

// int main(void)
// {
//     const int a = 4;

//     int&    ref = (int&)(a);
//     ref = 2;
//     std::cout << "a = " << a << std::endl;
//     std::cout << "ref = " << ref << std::endl;
//     return (0);

// }
#include <iostream>
#include <string>
#include <string_view>

class Base
{
protected:
	int m_value{};

public:
	Base(int value)
		: m_value{value}
	{
	}

	virtual ~Base() = default;
};

class Derived : public Base
{
protected:
	std::string m_name{};

public:
	Derived(int value, std::string name)
		: Base{value}, m_name{name}
	{
	}

	const std::string& getName() const { return m_name; }
};

Base* getObject(bool returnDerived)
{
	if (returnDerived)
		return new Derived{1, "Apple"};
	else
		return new Base{2};
}

int main()
{
	Base* b{ getObject(0) };

	Derived* d{ dynamic_cast<Derived*>(b) }; // use dynamic cast to convert Base pointer into Derived pointer

	std::cout << "The name of the Derived is: " << d << '\n';
    //std::cout << "The name of the Derived is: " << b->getName() << '\n';
	delete b;

	return 0;
}