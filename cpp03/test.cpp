# include <iostream>

// class x
// {
// public: 
//    x()
//     {
// 	std::cout << "x\n";
//     }
// };

class Base
{
public:
	virtual void	fun()
	{
		std::cout << "Base\n";
	}
	virtual void	fun_()
	{
		std::cout << "Base\n";
	}
};
 
class Drived :public Base
{
public:
	void	fun()
	{
		std::cout << "Drived\n";
	}

};
 
int main()
{
	Drived	obj;
	Base	*ptr;

	std::cout << "Drived: " << sizeof(Drived) << std::endl;
	std::cout << "Base: " <<  sizeof(Base) << std::endl;
	ptr = new Drived;
	//obj.fun();
	ptr->fun();
	return (0);       
}