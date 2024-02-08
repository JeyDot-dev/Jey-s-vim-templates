#include "className.hpp"

//--------------Functions----------------//
//--------------Operators----------------//
className&	className::operator=(className const&  rhs)
{
	if (this != &rhs)
	{
		//copy
	}
	std::cout << "Assignation operator called (className)" << std::endl;
	return *this;
}
//--------------Constructors------------//
className::className(className const &src)
{
	*this = src;
	std::cout << "Copy constructor called (className)" << std::endl;
	return ;
}

className::className(void)
{
	std::cout << "Default constructor called (className)" << std::endl;
	return ;
}

className::~className(void)
{
	std::cout << "Destructor called (className)" << std::endl;
	return ;
}
//--------------Non-Member--------------//
