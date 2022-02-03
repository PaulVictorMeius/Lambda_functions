#include <iostream>
#include <string>
int main()
{
	[](const std::string& name) {std::cout << "Hello " << name << '\n'; }("Paul");
}

