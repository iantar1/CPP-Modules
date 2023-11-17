#include <iostream>

class test
{
private:
    /* 
    data */
public:
    int a;
    void    fun(void);
    test(std::string str);
    test();
    ~test();
};

void    test::fun(void)
{
    std::cout <<"fun"  << std::endl;
}

test::test(void)
{
    a = 0;
   // std::cout <<"Constructor"  << std::endl;
}

test::~test()
{
   // std::cout << "destructor\n";
}

void    fun (test& obj)
{
    obj.a = 5;
}

int main(void)
{
    test    obj;

    std::cout << obj.a << std::endl;
    fun (obj);
    std::cout << obj.a << std::endl;
    return (0);
}
