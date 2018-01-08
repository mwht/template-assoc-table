#include "Employee.hpp"

using namespace std;

Employee::Employee(char* m_name,char* m_pos,unsigned int m_age) {
	name = m_name;
	position = m_pos;
	age = m_age;
}

std::ostream & operator << (std::ostream & s, const Employee & M)
{
  cout << "employee: name: " << name << ", position: " << position << ", age: " << age << "\n";
  return s;
}
