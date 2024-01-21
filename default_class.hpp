#ifndef		DEFAULT_CLASS_HPP
# define	DEFAULT_CLASS_HPP
#include <iostream>

class	className
{

public:
	className(className const & src);
	className&	operator=(className const& rhs);

	className(void);
	~className(void);

private:

};

#endif
