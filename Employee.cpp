#include "Employee.hpp"
#include <cstring>

using namespace std;

Employee::Employee() {
	Name = NULL;
	Position = NULL;
	Age = 0;
}

Employee::Employee(char* m_name,char* m_pos,unsigned int m_age) {
	Name = m_name;
	Position = m_pos;
	Age = m_age;
}

Employee::~Employee() {
}

std::ostream & operator << (std::ostream & s, const Employee & E)
{
  s << "employee: name: " << E.Name << ", position: " << E.Position << ", age: " << E.Age << "\n";
  return s;
}
