#pragma once
#include <string>
#include <array>
#include <time.h>

class Person
{
protected:
	std::string m_name;
	int m_age;
	static const std::array<std::string, 10> m_names;

	std::string yearsOld();
public:
	Person();

	virtual std::string greetings(const Person &pers) = 0;
	virtual std::string taleOfYourself() = 0;

	const std::string getName() const { return m_name; }
	const int getAge() const { return m_age; }
};

