 #include <iostream>

class Base
{
public:
    void    fun()
    {
        std::cout << "Base\n";
    }
};

class Drived : public Base
{
public:
    void    fun()
    {
        std::cout << "Drived\n";
    }
};

int main(void)
{
    // Drived  drived;
    // Base    base;

    // base.fun();
    // drived.fun();
    std::cout << (char)(-1);
    try
    {
        std::string str = "nam";
        std::cout << std::stof(str);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    //(static_cast<char>(str));
    return (0);

 }
