#include "Employee.h"

using namespace std;

std::ostream & operator << (std::ostream & s, const Employee & M)
{
  cout << "\n";
  return s;
}
