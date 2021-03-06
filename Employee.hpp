#ifndef __Employee_hpp_
#define __Employee_hpp_
#include <iostream>

class Employee {
	public:
		char* Name;
		char* Position;
		unsigned int Age;
		Employee();
		Employee(char*,char*,unsigned int);
		~Employee();
		friend std::ostream & operator << (std::ostream & , const Employee &);
		Employee& operator=(const Employee&);
};

#endif // __Employee_hpp_
