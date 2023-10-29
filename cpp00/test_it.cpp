#include <iostream>
#include <unistd.h>
#define EMPTY ""

using namespace std;

namespace iantar{
    int p;
    
    void    ara(const char *str)
    {
        int i;
        for(i = 0; i < strlen(str); i++)   
            write(1, &str[i], 1);
    }
}

namespace hbaddy{
    int p;
    void    ara(const char *str)
    {
        int i;
        for(i = 0; i < strlen(str); i++)   
            write(1, &str[i], 1);
        write(1, ".\n", 2);
    }
}

using namespace hbaddy;
using namespace iantar;

static int a = 2; 

int main(void)
{
    std::string str;

    if (str == EMPTY)
        std::cout << "hehe\n";
    return (0);
}