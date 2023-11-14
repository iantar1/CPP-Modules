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
   // std::cout <<"Constructor"  << std::endl;
}

test::~test()
{
   // std::cout << "destructor\n";
}


int main(void)
{
    test    obj;

    void    (test::*ptr)(void);
    return (0);
}
