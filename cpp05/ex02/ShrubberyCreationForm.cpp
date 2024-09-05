/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonShrubberyCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 10:30:02 by jlarue            #+#    #+#             */
/*   Updated: 2024/01/04 10:30:13 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("DEFAULT")
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& src ) : AForm("ShrubberyCreationForm", 145, 137), _target(src.getTarget())
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm desstructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm& rhs ) {
	if ( this == &rhs )
		return *this;
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	int	i;

	i = 0;
	try
	{
		if (executor.getGrade() > 137)
		{
			throw Bureaucrat::GradeTooLowException();
		}
		else if (this->isSigned() == false)
		{
			std::cout << "Cannot exec form is not signed" << std::endl;
		}
		else
		{
			std::ofstream jardinet (this->getTarget().append("_shrubbery").c_str());
			if (jardinet.is_open())
			{
				jardinet << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWNXKKXNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNKkxddxkKNMMWKkoc;,,,,,,;;cd0WMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMNkc;;;:clccccll:;;cdxkO0KK0Oko:,:0WMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMMMMMMMMMMMMMMMMMMMMNd;,oOXWMMMMMW0ookXWMMMMMMMMMMMMWO,'cllodOXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMMMMMMMMMMMMMMMMMMM0;'dXMWWWMMMMMMWWMMMMMMMMMMMMMMMMMNkkOOkxocclkNMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMMMMMMMMMMMMMMMMMM0,'ONKXWKKNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNx;;OWMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMMMMMMMMMMMMMMMMMNc.xW0kNMWNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWMMO.:KOdlllllokXWMMMMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMMMMMMMMMMMMMMMMMX;'ONNNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWX0KWMK,.cldkO00Oxolo0WMMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMMMMMMMMMWKOxooodo;ckXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWkokNMMMMMMMMMNd,dNMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMMMMMMNOl;,,:loolcxWMMMMMMMMMMMMWX00KNWMMMMMMMMMMMMMMMMMMMMMMMMNXWMMMMMW0OXWMMWo.xMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMMMMNx:;lkKNMMMWMWWMMMMMMMMMMMMMWKkkxdokWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWK0XWMMMO'oMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMMW0:;xNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWk;dWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMk'oMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMWO,cXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWo:KWWWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNc'OMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMK;;XMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWl'o0XXKOodKNNNWN0kx0WMMMMMMMMMMMMMMMWWXl.'dONMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMk.lMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNx';c:ldxd,.;coddl,.lXWWWKOXMMMMMMMMMMMWKoldoc:xNMMMMMMM" << std::endl;
				jardinet << "MMMMMMMM0':XMMMMMMMMMMMMMXOkkOXMMMMMMWMMKxoc,'.,x: .,;cxxlccccoo:lxxl,dNWWXkKWMMMMMMXXWMMWO;cXMMMMMM" << std::endl;
				jardinet << "MMMMMMMMWx'cKWMMMMMMMMMMWKOOkdcxXN0dkKNNXk;.;;,.lKkccOK0xx0KOxOKkoccc:clod:'dXX0x0WMMMMMMMMk'lNMMMMM" << std::endl;
				jardinet << "MMMMMMMMMW0l::lxONMMMMMMMMMMMMk,;ll;..c:;llx00O;,OXKl;lxxk00Odx00Kkdxo,';clclooloOXWMMMMMMMX;,0MMMMM" << std::endl;
				jardinet << "MMMMMMMMMMM0:;;ckNMMMMMMMMMMMMO;'.'c:.cx,l00000l,oxKWOc,'';:,,x0Oxc;c:,;,,xKKK0OOK0XK0KWWWWx.cNMMMMM" << std::endl;
				jardinet << "MMMMMMMMMMK;:XWWMMMMMMMMMMMMMXlc::kK0,,0O;;dO0O::xxKMMN0xlcl:,;loollc;c0Xx:::cc;cxkkc.ckkdc,cKMMMMMM" << std::endl;
				jardinet << "MMMMMMMMMNo.xMMMMMMMMMMMMWOdo;,:';olc:oKWXo;,;'.:O0KXKKXNXXXX0kxdc;:o0WMMWXOkk00xllclolccld0WMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMXl..lNMWKKWMMMMMMMN0:.:codddOXXKKXWNOl;;lxk0X0kkkxdocccccd0NMMMMMMMMMMMMMMWMMMMMMMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMWo'dxclooc:lxOXMMMW0l:dxlcloxxdolldOKXXXKOdokX0o',ldkOKNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMWM0,c000xdxOOxoc;lolc:lk00K0:.:odOOololcokO0OxO0Oko;oNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMk.cK0kdO0000O:.cddk00Oo;:c:xNMMMMMWN0;.cOKKKKXOokx'oWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMXc'o00000Oxc;cc;;:cc:::oOKNMMMMMMMMMMO..c0NXK00dxNl'kMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMXd:::::::co0WW0xdddxOXWMMMMMMMMMMMW0c.,okNMMk:lKMk.lMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMMMWK0OO0XWMMMMMMMMMMMMMMMMMMMMMWKd;..;dk0KOxdkOXWl.xMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNOoc;,cdkkdodddo0NKKd'oNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNOocloxOkxxxkk0KklkNOl;;xNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNkccdKNOodkOXNWMWOoldl..;kWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMx;xKOdddkKXNXOxolclooddxxooKMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd'ok::kKKKkoolld0WNXOocoko,xMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXl.,cxKNOllkKXXWXx,.,ccll;lXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd.c000dcxKXXNKx:cc,,oXNKXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWc.cKKcckKXWNkc;o0KKx':XMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWd..dkldKWWOlcx000KKXx.oWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXl .,lOWWOlxOO0XKkxkk,'0MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNd..:oNNOk00XXONWNK0kl:dXMMMMMMMMMMMMMN0KMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMMMMMMMMMMWX0XWMMMMMWWMMMMMK,.',d0O0XOKN0KWWW00NO;:KMMMMMMMMMMMXclXMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMMMMMMMMMMW0l;;cd0NMkoXMMMMWk. .dXNWW00N000kOKKKNk.cNMMMMMMMMMKc,OMWXXWMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMMMMMMMMMMMMWKd;.':dx;lXOkOXWk..cOXXXKOOOOOkOOKXOo.:XMMMMMMMMKc,dKxld0WMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMMMMMMMMMMMMMMMW0o;,:;';cdocoocokKXNX0xokOOOKKO00xc,clloONMMXl,:c;'cxXMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMMMMMMMMMMMMMMMWkloodl..OMKkOK00KX0KWk:d0KKKKkldKXXkxkxoc:dXd;lllc;.cXMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMMMMMMMMMMMMWNXKd,'cllc',locllllc::lo'.;oddddc.,olooddool'...,oodo,'oxkkOO0KXNWMMMMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMMMMMMMMMMMMN0xolccccccclloooooooooooooooooooooooooooooooooooooddddddxxxkOO0KNWMMMMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
				jardinet << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
				jardinet.close();
				std::cout << this->getTarget() << " Shrubbery has been created, check your files" << std::endl;
			}
			else
			{
				std::cout << "Cannot open your file, access right problem" << std::endl;
			}

		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
    }
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

std::ostream& operator<<( std::ostream& o, const ShrubberyCreationForm& rhs )
{
	o << rhs.getName() << ", ShrubberyCreationForm grade to sign : " << rhs.getGradeS() << " || grade to exec : " << rhs.getGradeE() << "|| is signed : " << rhs.isSigned();
	return o;
}

