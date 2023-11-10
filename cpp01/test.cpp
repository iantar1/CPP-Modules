#include <iostream>

class test
{
private:
    /* 
    data */
public:
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
    std::cout <<"Constructor"  << std::endl;
}

test::~test()
{
    std::cout << "destructor\n";
}


int main(void)
{
    test    t;
    //test    b("stack");

    //std::cout << t << std::endl;
    //t.~test();
    t.fun();
    return (0);
}
