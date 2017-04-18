// Structures.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>


struct personalData
{
	std::string name;
	std::string surname;
	std::string telephoneNumber;
	short age;
};

int main()
{

	personalData person;

	person.name = "Tomasz";
	person.surname = "Breza";
	person.telephoneNumber = "123";
	person.age = 43;
    return 0;
}

