#pragma once

#include "Component.h"

class Life : public Component
{
public:
	Life();
	int GetHP() { return m_lifePoint; };
	void SetHP(int value) { m_lifePoint = value; };

	void DebugHp();

private:
	int m_lifePoint;

};

