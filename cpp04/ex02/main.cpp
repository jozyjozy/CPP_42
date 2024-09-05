/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 11:45:36 by jozy              #+#    #+#             */
/*   Updated: 2023/10/23 13:45:04 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
// Uncomment the line below if you wanna check that the base constructor for Animal objects CANNOT be used outside of derived functions.
//const Animal *II = new Animal();
std::cout << PURPLE << "CONSTRUCTORS FOLLOWED BY DESTRUCTORS : should do base constructore -> derived constructor -> derived destructors -> base destructors" << WHITE << std::endl;
std::cout << YELLOW << "DOG : " << WHITE << std::endl;
const Animal* j = new Dog();
delete j;
std::cout << YELLOW << "CAT : " << WHITE << std::endl;
const Animal* i = new Cat();
delete i;
std::cout << PURPLETITLE << "Test : leak check for an array of cats and dogs stored in a Animal tab" << WHITE << std::endl;
const Animal* tab[4] = {new Cat(), new Dog(), new Cat(), new Dog()};
int iterator = 0;
while (iterator < 4)
{
	delete tab[iterator];
	iterator++;
}
std::cout << PURPLETITLE << "Test : Cloning dogs, the dream, check that the former badDoggy now wants to lick ur face" << WHITE << std::endl;
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

return 0;
}
