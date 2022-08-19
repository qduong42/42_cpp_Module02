## cpp ex00 Program flow:

1. Fixed a is declared
2. Fixed b(a); calls copy constructor with param of class instance a
3. fixed c is declared. c is equated to b with overloaded assignment operator.
4. std::cout on raw bits of all classes.
5. ???
6. profit

TODO:
1. Code copy constructor
2. code overload for = operator
3. ???
4. profit(hopefully)

Problems:
- Order of prints are wrong... Also should we code setRawBits for ex00 if its not used anyway?

Explorations:
- Possible to print instance name? Possible solution below:

#define SHOW(a) std::cout << #a << ": " << (a) << std::endl
// ...
int i = 2;
SHOW (i);
source: https://stackoverflow.com/questions/1795816/can-a-c-class-constructor-know-its-instance-name