#include <iostream>
#include <string>
int main()
{
	[](const std::string& name) {std::cout << "Hello " << name << '\n'; }("Paul");
	auto lambda1 = [](int x) { return x % 3 == 0; };
	bool divByThree = lambda1(33);
	std::cout << std::boolalpha << divByThree << '\n';
}

