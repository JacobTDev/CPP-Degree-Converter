#include <iostream>
#include <string>

void PrintIntro();
void GetType();
void CToF();
void FToC();

int main()
{
	PrintIntro();
	GetType();

	return 0;
}

void PrintIntro()
{
	std::cout << "Welcome to my Celsius and Farenheit conversion program." << std::endl;
	std::cout << "What do you want to convert? (c for c to f & f for f to c)" << std::endl;
}

void GetType()
{
	std::string response = "";
	std::getline(std::cin, response);
	if (response[0] == 'c' || response[0] == 'C')
	{
		CToF();
	}
	else if (response[0] == 'f' || response[0] == 'F')
	{
		FToC();
	}
}

void CToF()
{
	std::string cString = "";
	std::string::size_type sz;
	std::cout << "Type the number you want to convert to F: " ;
	std::getline(std::cin, cString);
	
	float cFloat = std::stof(cString, &sz);
	cFloat = (cFloat * 9) / 5 + 32;

	std::cout << "Conversion: " << cFloat << "F " << "(C: " << cString << ')';
}

void FToC()
{
	std::string fString = "";
	std::string::size_type sz;
	std::cout << "Type the number you want to convert to C: ";
	std::getline(std::cin, fString);

	float fFloat = std::stof(fString, &sz);
	fFloat = (fFloat - 32) * 5 / 9;
	std::cout << "Conversion: " << fFloat << "C " << "(F: " << fString << ')';
}