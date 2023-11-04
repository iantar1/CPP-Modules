#include <iostream>

class test
{
private:
    /* data */
public:
    test(int a);
    ~test();
};

test::test(int a)
{
    std::cout <<"hello" << a << std::endl;
}

test::~test()
{
    std::cout << "destructor\n";
}


int main(void)
{
    test    *t;
    test    b(2);

    t = new test(21);
    return (0);
}