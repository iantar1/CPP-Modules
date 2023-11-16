# include <iostream>

class test
{
private:
    int _a;
    int _b;
    /* data */
public:
    test(/* args */);
    test(int a);
    ~test();
};

test::test(/* args */)
{
    _b = 0;
    std::cout << "def conster\n";
}

test::test(int a)
{
    _a = a;
    std::cout << "conster\n";
}

test::~test()
{
    std::cout << "destructor\n";
}

class M
{
private:
    test    att;
public:
    M(/* args */);
    ~M();
};

M::M(/* args */)//:att(4)
{
    test att(4);
    //std::cout << "M_def_constr\n";
}

M::~M()
{
    //std::cout << "M_destructor\n";
}

int main(void)
{
    M    obj;


    return (0);
}