#include <iostream>

class test
{
private:
    /* data */
public:
    test(std::string str);
    test();
    ~test();
};

test::test(std::string str)
{
    std::cout <<"Constructor:" << str << std::endl;
}

test::test(void)
{
    std::cout <<"copyConstructor"  << std::endl;
}

test::~test()
{
    std::cout << "destructor\n";
}


int main(void)
{
    test    t;
    //test    b("stack");

    std::cout << t << std::endl;
    //t = new test("heap");
    return (0);
}
