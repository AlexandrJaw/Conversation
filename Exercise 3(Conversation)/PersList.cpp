#include "PersList.h"

PersList::PersList(const int countPeople)
{
	srand(time(0));
	for (int i = 0; i < countPeople; ++i)
	{
		std::shared_ptr<Person> person;

		switch (rand() % 3)
		{
		case 0:
			person = std::make_shared<Formalists>();
			break;
		case 1:
			person = std::make_shared<Informals>();
			break;
		case 2:
			person = std::make_shared<Realists>();
			break;
		default:
			break;
		}
		m_pers.push_back(person);
	}
}

void PersList::conversation()
{
	for (int i = 0; i < m_pers.size(); ++i)
		for (int j = i; j < m_pers.size(); ++j)
		{
			if (i == j)
				continue;
			std::cout << m_pers[i]->greetings(*m_pers[j]) << std::endl;
			std::cout << m_pers[j]->greetings(*m_pers[i]) << std::endl;
		}
}