all: main

main: main.cpp Employee.cpp
	rm -f -- template-assoc-table
	g++ -g -Wall -pedantic -o template-assoc-table main.cpp Employee.cpp

.PHONY: clean

clean:
	rm template-assoc-table
