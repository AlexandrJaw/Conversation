#include "Person.h"

Person::Person()
{
	m_age = rand() % 20 + 21;
	m_name = m_names[rand() % 10];
}

const std::array<std::string, 10> Person::m_names{
	{{"Александр"},
	{"Андрей"},
	{"Анастасия"},
	{"Ирина"},
	{"Наталья"},
	{"Павел"},
	{"Роман"},
	{"Светлана"},
	{"Сергей"},
	{"Татьяна"}}
};

std::string Person::yearsOld()
{
	std::string years = "";
	if (m_age % 10 >= 5 || m_age % 10 == 0 || (m_age >= 11 && m_age <= 14))
		years = "лет";
	else if (m_age % 10 >= 2 && m_age % 10 <= 4)
		years = "года";
	else if (m_age % 10 == 1)
		years = "год";

	return years;
}