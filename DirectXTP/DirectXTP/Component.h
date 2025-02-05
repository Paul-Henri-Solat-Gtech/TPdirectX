#pragma once

#include "Entity.h"

class Component
{
public:
	virtual ~Component();

	void SetEntity(Entity* entity) { m_entity = entity; };
	Entity* GetEntity() { return m_entity; };


protected:
	Entity* m_entity;
};

