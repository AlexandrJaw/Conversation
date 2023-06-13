#pragma once
#include "Person.h"
#include <iostream>

class Realists : public Person
{
	virtual std::string taleOfYourself()
	{
		std::string tale = "���� ����� " + m_name
			+ ", ��� ������� " + std::to_string(m_age)
			+ ' ' + yearsOld() + " � � �������";

		return tale;
	}

	virtual std::string greetings(const Person &pers) override
	{
		std::string hello;
		if (pers.getAge() - m_age > 5)
			hello = "������������";
		else
			hello = "������";
		std::string greet = m_name + ": " + hello + ", " + pers.getName() + '!';
		return greet;
	}
};

