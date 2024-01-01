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
#include <string>
int main()
{
	std::string str = "hello";
	//std::string str = "azul";

//	temp = literal.c_str() + (literal[0] == '+' || literal[0] == '-');

	std::string s = str.c_str() + 1;
	std::cout << s << std::endl;
	return (0);
}