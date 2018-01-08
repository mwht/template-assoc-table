#ifndef __Employee_h_
#define __Employee_h_
#include <iostream>

class Employee {
	private:
		char* name;
		char* position;
		unsigned int age;
	public:
		Employee();
		Employee(char*,char*,unsigned int);
		~Employee();
		friend std::ostream & operator << (std::ostream & , const Employee &);
};

#endif // __Employee_h_
