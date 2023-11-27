# include <iostream>

class test
{
private:
    int a;
public:
    test(/* args */);
    ~test();
    test(test& obj);
    void    fun1(test obj);
    void    fun2(test& obj);
};


test::test(test& obj)
{
    std::cout << "copy\n";
}

void    fun1(test obj)
{

}
void    fun2(test& obj)
{

}

test::test(/* args */)
{
}

test::~test()
{
}

int main()
{
    test    obj;

    fun1(obj);
    fun2(obj);
    return (0);
}