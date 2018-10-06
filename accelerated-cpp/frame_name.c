#include <iostream>
#include <string>
// frame_name.c asks for your first name and prints it in a frame. 
// It's a bit rude. 

int main()
{
	std::cout << "What\'s your name? ";
	std::string name;
	std::cin >> name;

	{const std::string greeting = name + "? Your parents didn\'t like you!";

	const std::string spaces(greeting.size(), ' ');
	const std::string blank_line = "* "+ spaces + " *";
	
	const std::string stars(blank_line.size(), '*');

	std::cout << std::endl;	
	std::cout << stars << std::endl;
	std::cout << blank_line << std::endl;
	std::cout << "* " << greeting << " *" << std::endl;
	std::cout << blank_line << std::endl;
	std::cout << stars << std::endl;

	{
		const std::string greeting = "soz.";
		std::cout << "* " << greeting << " *" << std::endl;
	}
}
return 0;
}