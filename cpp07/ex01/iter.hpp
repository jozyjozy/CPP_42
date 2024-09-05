#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <cctype>
# include <string>
# include <cstring>

template <class T>
void iter(T *a, int i, void (*f)(T &))
{
    int j = 0;
    while (j < i)
    {
        f(a[j]);
        j++;
    }
}

template <class T>
void iter(T *a, int i, void (*f)(T const &))
{
    int j = 0;
    while (j < i)
    {
        f(a[j]);
        j++;
    }
}

#endif
