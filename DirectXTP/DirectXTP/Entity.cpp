#include "Entity.h"
#include "Component.h"
#include "Transform.h"

Entity::Entity()
{
	m_id = m_nextid;
	m_nextid++;

	m_name = "noName";

	m_nextIdComponent = 0;
}

void Entity::Init(std::string name)
{
	m_name = name;

	std::cout << "Successfully created: " << m_name << " !\n";
}

void Entity::Update()
{
}

void Entity::AddComponent(Component* newComponent)
{
	if (!m_components.empty()) 
	{
		for (auto& pair : m_components)
		{
			if (pair.second->GetID() == newComponent->GetID())
			{
				std::cout << "Already set this component to " << m_name << " !\n";
			}
			else
			{
				newComponent->SetEntity(this);
				m_components.emplace(m_nextIdComponent, newComponent);
				m_nextIdComponent++;

				std::cout << "Component Added to " << m_name << " !\n";
			}
		}
	}
	else
	{
		newComponent->SetEntity(this);
		m_components.emplace(m_nextIdComponent, newComponent);
		m_nextIdComponent++;

		std::cout << "Component Added  to " << m_name << " !\n";
	}


}
