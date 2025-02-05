#pragma once

#include "Component.h"

class LifeComponent : public Component
{
public:
	LifeComponent();
	int GetHP() { return m_lifePoint; };
	void SetHP(int value) { m_lifePoint = value; };

	void DebugHp();

private:
	int m_lifePoint;

};

