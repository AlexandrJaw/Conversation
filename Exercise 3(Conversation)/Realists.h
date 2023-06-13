#pragma once
#include "Person.h"
#include <iostream>

class Realists : public Person
{
	virtual std::string taleOfYourself()
	{
		std::string tale = "Меня зовут " + m_name
			+ ", мой возраст " + std::to_string(m_age)
			+ ' ' + yearsOld() + " и я реалист";

		return tale;
	}

	virtual std::string greetings(const Person &pers) override
	{
		std::string hello;
		if (pers.getAge() - m_age > 5)
			hello = "Здравствуйте";
		else
			hello = "Привет";
		std::string greet = m_name + ": " + hello + ", " + pers.getName() + '!';
		return greet;
	}
};

