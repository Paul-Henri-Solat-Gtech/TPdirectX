#pragma once

#include <map>
#include <iostream>

class Component;

class Entity
{
public:
	Entity();
	void Init(std::string name);

	void Update();

	void AddComponent(Component* newComponent);

	template <typename T>
	T* GetComponent() 
	{
		for (auto& pair : m_components)
		{
			T* castedComponent = dynamic_cast<T*>(pair.second);
			if (castedComponent)
			{
				return castedComponent;
			}
		}
		std::cout << "Component Introuvable !\n";
		return nullptr;
	}

	std::string GetName() { return m_name; };

private:
	inline static int m_nextid = 0;
	int m_id;

	std::string m_name;

	int m_nextIdComponent;
	std::map<int,Component*> m_components;

	//Transform m_transform;
};

