#include <iostream>
#include <string>

int main()
{
	int i = 0;
	while (i < 10)
	{
	std::cout << "num" << (1 << i) << std::endl;
	i++;
	}
	return 0;
}
