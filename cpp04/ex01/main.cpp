/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 11:45:36 by jozy              #+#    #+#             */
/*   Updated: 2023/10/23 12:17:05 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const Animal* c(j);
const WrongAnimal* z = new WrongCat();


std::cout << PURPLETITLE << "Test 1 : check the types of animals, and make sound post standard constructors" << WHITE << std::endl;
std::cout << "Sound of i, a Cat : " << std::endl;
i->makeSound();
std::cout << "Sound of j, a Dog : " << std::endl;
j->makeSound();
std::cout << "Sound of Z, a WrongCat : " << std::endl;
z->makeSound();
std::cout << "Sound of meta, an Animal : " << std::endl;
meta->makeSound();


std::cout << PURPLETITLE << "Test 2 : check the types of animals, and make sound post copy constructors" << WHITE << std::endl;
std::cout << "j = " << j->getType() << std::endl;
std::cout << "c = " << c->getType() << std::endl;
j->makeSound();
c->makeSound();
std::cout << "we perform j = i, i being a Cat" << std::endl;
j = i;
std::cout << "i adress " << &i << std::endl;
std::cout << "j adress " << &j << std::endl;
std::cout << "j = " << j->getType() << std::endl;
if (&j != &i && i->getType() == j->getType())
	std::cout << GREEN << "SUCCESS : same value but not the same addresses" << WHITE << std::endl;
std::cout << "c = " << c->getType() << std::endl;
j->makeSound();
c->makeSound();

std::cout << PURPLETITLE << "Test 3 : turning a Cat into a Dog via the = operator" << WHITE << std::endl;
delete i;
const Animal* k = new Dog();
i = k;
std::cout << "i adress " << &i << std::endl;
std::cout << "k adress " << &k << std::endl;
std::cout << "i->type = " << i->getType() << std::endl;
if (&k != &i && i->getType() == k->getType())
	std::cout << GREEN << "SUCCESS : the former cat turned into a dog" << WHITE << std::endl;

std::cout << PURPLETITLE << "Test 4 : leak check post copy constructor" << WHITE << std::endl;
Animal p(*i);
std::cout << "p->type = " << p.getType() << std::endl;
std::cout << "i->type = " << i->getType() << std::endl;
std::cout << "i adress = " << i << std::endl;
std::cout << "p adress = " << &p << std::endl;
if (&p != i && i->getType() == p.getType())
	std::cout << GREEN << "SUCCESS : same value but not the same addresses" << WHITE << std::endl;
delete i;
std::cout << "after I deleted i, p = " << p.getType() << std::endl;
delete meta;
delete z;
delete c;

std::cout << PURPLETITLE << "Test 5 : leak check for an array of cats and dogs stored in a Animal tab" << WHITE << std::endl;
const Animal* tab[4] = {new Cat(), new Dog(), new Cat(), new Dog()};
int iterator = 0;
while (iterator < 4)
{
	delete tab[iterator];
	iterator++;
}
std::cout << GREEN << "TO CHECK SUCCESS JUST RUN VALGRIND (it won't leak)" << WHITE << std::endl;

std::cout << PURPLETITLE << "Test 6 : Cloning dogs, the dream, check that the former badDoggy now wants to lick ur face" << WHITE << std::endl;
Dog goodDoggy;
Dog badDoggy;
goodDoggy.get_brain()->ideas[0] = "I WANT TO LICK YOUR FACE";
badDoggy.get_brain()->ideas[0] = "I WANT TO EAT YOUR FACEE";
std::cout << "Address of badDoggy = " << &badDoggy << std::endl;
std::cout << "Address of goodDoggy = " << &goodDoggy << std::endl;
std::cout << "Address of badDoggy brain = " << badDoggy.get_brain() << std::endl;
std::cout << "Address of goodDoggy brain = " << goodDoggy.get_brain() << std::endl;
std::cout << PURPLE << "BEFORE COPY" << WHITE << std::endl;
std::cout << GREEN << "badDoggy first idea = " << WHITE << badDoggy.get_brain()->ideas[0] << std::endl;
std::cout << GREEN << "goodDoggy first idea = " << WHITE <<  goodDoggy.get_brain()->ideas[0] << std::endl;
std::cout << PURPLE << "AFTER COPY" << WHITE << std::endl;
badDoggy = goodDoggy;
std::cout << "Address of badDoggy = " << &badDoggy << std::endl;
std::cout << "Address of goodDoggy = " << &goodDoggy << std::endl;
std::cout << "Address of badDoggy brain = " << badDoggy.get_brain() << std::endl;
std::cout << "Address of goodDoggy brain = " << goodDoggy.get_brain() << std::endl;
std::cout << GREEN << "goodDoggy first idea = " << WHITE <<  goodDoggy.get_brain()->ideas[0] << std::endl;
std::cout << GREEN << "badDoggy first idea = " << WHITE <<  badDoggy.get_brain()->ideas[0] << std::endl;
if (goodDoggy.get_brain()->ideas[0] == badDoggy.get_brain()->ideas[0] && badDoggy.get_brain() != goodDoggy.get_brain())
	std::cout << GREEN << "SUCCESS BOTH HAVE THE SAME IDEA BUT NOT THE SAME ADDRESS GOOD JOB" << WHITE << std::endl;
if (goodDoggy.get_brain()->ideas[0] == badDoggy.get_brain()->ideas[0] && badDoggy.get_brain() == goodDoggy.get_brain())
	std::cout << ROUGE << "FAILURE, BOTH SHARE THE SAME ADRESS, A DEEP COPY IS A COPY OF THE CONTENT OF AN OBJECT\nNOT OF THE ADDRESS" << WHITE << std::endl;
if (goodDoggy.get_brain()->ideas[0] != badDoggy.get_brain()->ideas[0])
	std::cout << ROUGE << "FAILURE, THE CONTENT ISNT COPIED" << WHITE << std::endl;
return 0;
}
