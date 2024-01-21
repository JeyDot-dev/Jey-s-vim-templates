#include "className.hpp"

//--------------Functions----------------//
//--------------Operators----------------//
className&	className::operator=(className const&  rhs)
{
	if (this != &rhs)
	{
		//copy
	}
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}
//--------------Constructors------------//
className::className(className const &src)
{
	*this = src;
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

className::className(void)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

className::~className(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}
//--------------Non-Member--------------//
