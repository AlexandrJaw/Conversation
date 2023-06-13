#pragma once
#include <vector>
#include "Person.h"
#include "Formalists.h"
#include "Informals.h"
#include "Realists.h"
#include <memory>
#include <time.h>
#include <iostream>

class PersList
{
private:
	std::vector<std::shared_ptr<Person>> m_pers;
public:
	PersList(const int countPeople);
	
	void representation()
	{
		for (const auto &element : m_pers)
			std::cout << element->taleOfYourself() << std::endl;
	}

	void conversation();
};

