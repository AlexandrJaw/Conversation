#pragma once
#include "Person.h"
#include <iostream>

class Informals : public Person
{
	virtual std::string taleOfYourself()
	{
		std::string tale = "Меня зовут " + m_name
			+ ", мой возраст " + std::to_string(m_age)
			+ ' ' + yearsOld() + " и я неформал";

		return tale;
	}

	virtual std::string greetings(const Person &pers) override
	{
		std::string greet = m_name + ": Привет, " + pers.getName() + '!';
		return greet;
	}
};

