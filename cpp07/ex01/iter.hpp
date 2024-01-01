# pragma once

# include <iostream>
# include <cstdlib>

template <typename T>

void    iter(A* addr, size_t len, (void)(*fun)(T&))
{
    if (static_cast<int>(len) < 0 || fun == NULL || addr == NULL)
        return ;
    for (L i = 0; i < len; i++)
    {
        fun(addr[i]);
    }
}
