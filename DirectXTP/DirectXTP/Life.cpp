#include "Life.h"

Life::Life() : m_lifePoint(0)
{

}

void Life::DebugHp()
{
	std::cout << m_entity->GetName() << " Have: " << m_lifePoint << " HP !\n";
}
