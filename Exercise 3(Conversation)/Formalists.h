#pragma once
#include "Person.h"
#include <iostream>

class Formalists : public Person
{
public:
	virtual std::string taleOfYourself()
	{
		std::string tale = "���� ����� " + m_name 
			+ ", ��� ������� " + std::to_string(m_age) 
			+ ' ' + yearsOld() + " � � ���������";

		return tale;
	}

	virtual std::string greetings(const Person &pers) override
	{
		std::string greet = m_name + ": ������������, " + pers.getName() + '!';
		return greet;
	}
};

