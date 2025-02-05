#include "LifeComponent.h"

LifeComponent::LifeComponent() : m_lifePoint(0)
{
	m_id = 0;
}

void LifeComponent::DebugHp()
{
	std::cout << m_entity->GetName() << " Have: " << m_lifePoint << " HP !\n";
}
