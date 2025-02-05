#pragma once

#include "Entity.h"

class Component
{
public:
	virtual ~Component();

	void SetEntity(Entity* entity) { m_entity = entity; };
	Entity* GetEntity() { return m_entity; };
	int GetID() { return m_id; };

protected:
	Entity* m_entity;
	int m_id;
};

