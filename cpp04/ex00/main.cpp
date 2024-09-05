/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 11:45:36 by jozy              #+#    #+#             */
/*   Updated: 2023/10/23 13:53:24 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void )
{
std::cout << PURPLE << "CONSTRUCTORS :" << WHITE << std::endl;
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const WrongAnimal* x = new WrongCat();
std::cout << PURPLE << "TYPE CHECK : " << WHITE << std::endl;
std::cout << "supposed Wrongcat type : " << x->getType() << " " << std::endl;
std::cout << "supposed Dog type : "<< j->getType() << " " << std::endl;
std::cout << "supposed Cat type : "<< i->getType() << " " << std::endl;
std::cout << "supposed Default Animal type : "<< meta->getType() << " " << std::endl;
std::cout << PURPLE << "SOUND CHECK : " << WHITE << std::endl;
std:: cout << GREEN << "supposed Default Animal sound : " << WHITE << std::endl;
meta->makeSound();
std:: cout << GREEN << "supposed Cat sound : " << WHITE << std::endl;
i->makeSound();
std:: cout << GREEN << "supposed Dog sound : " << WHITE << std::endl;
j->makeSound();
std:: cout << GREEN << "supposed WrongCat sound : " << WHITE << std::endl;
x->makeSound();
std::cout << PURPLE << "DESTRUCTORS :" << WHITE << std::endl;
delete meta;
delete x;
delete j;
delete i;
return 0;
}
