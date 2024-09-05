#include "MutantStack.hpp"
#include <list>

int main()
{
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
std::cout << mstack.top() << std::endl;
mstack.pop();
std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
//[...]
mstack.push(0);
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}
std::stack<int> s(mstack);
std::cout << "same thing but with a list to show the result remains the same" << std::endl;
std::list<int> mlist;
mlist.push_back(5);
mlist.push_back(17);
std::cout << mlist.back() << std::endl;
mlist.pop_back();
std::cout << mlist.size() << std::endl;
mlist.push_back(3);
mlist.push_back(5);
mlist.push_back(737);
//[...]
mlist.push_back(0);
std::list<int>::iterator it2 = mlist.begin();
std::list<int>::iterator ite2 = mlist.end();
++it2;
--it2;
while (it2 != ite2)
{
std::cout << *it2 << std::endl;
++it2;
}
std::list<int> s2(mlist);

std::cout << "showing it works with char too (my test as asked by correction)" << std::endl;
MutantStack<char> mstackJL;
mstackJL.push('J');
mstackJL.push('o');
mstackJL.push('s');
mstackJL.push('e');
mstackJL.push('p');
mstackJL.push('h');
mstackJL.push(' ');
mstackJL.push('L');
mstackJL.push('a');
mstackJL.push('r');
mstackJL.push('u');
mstackJL.push('e');
std::cout << "size of mstackJL : " << mstackJL.size() << std::endl;
MutantStack<char>::iterator itJL = mstackJL.begin();
MutantStack<char>::iterator iteJL = mstackJL.end();
++itJL;
--itJL;
while (itJL != iteJL)
{
std::cout << *itJL << std::endl;
++itJL;
}
std::stack<char> sJL(mstackJL);


return 0;
}
