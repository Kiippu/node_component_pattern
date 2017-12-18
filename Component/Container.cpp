#include "Container.h"

#include <iostream>
#include <memory>
#include <algorithm>

#include "ComponentHeaders.h"


/*
TODO:
- add all components to switch
- 


*/

Container::Container()
{
	std::cout << "Container was created" << std::endl;
}


Container::~Container()
{
}

// pulls component out of container to use
COMPONENT_PTR Container::GetComponent(LABEL_COMPONENT_TYPE ct)
{
	for (auto c : ComponentContainer) {
		if (c->GetComponentType() == ct)
			return  c;
	}
	return nullptr;
}

// checks to see it the componet already exists in the container
bool Container::hasComponent(LABEL_COMPONENT_TYPE ct)
{
	LABEL_COMPONENT_TYPE temp;
	for (auto c : ComponentContainer) {
		temp = c->GetComponentType();
		if (temp == ct)
			return true;
	}
	return false;
}

// gets the list of compnents
CONTAINER_LIST const & Container::GetContainerList() const
{
	return ComponentContainer;
}

// adds components to list after checking them
void Container::AddComponent(LABEL_COMPONENT_TYPE ct)
{
	if (!hasComponent(ct)) {
		// Creates components depending on what component type is passed
		switch (ct)
		{
			// Animated sprites
		case(LABEL_COMPONENT_TYPE::COMP_ANIMATED_SPRITE): {
			std::cout << "Added AnimatedSprite" << std::endl;
			ANIMATED_SPRITE_PTR sprite = std::make_shared<AnimatedSprite>();
			ComponentContainer.push_back(sprite);
			SortContainer();
			break;
		}
		case(LABEL_COMPONENT_TYPE::COMP_RENDER): {
			std::cout << "Added Render" << std::endl;
			RENDER_PTR RenderScene = std::make_shared<Render>();
			ComponentContainer.push_back(RenderScene);
			SortContainer();
			break;
		}
		case(LABEL_COMPONENT_TYPE::COMP_READ_WRITE): {
			std::cout << "Added ReadWrite" << std::endl;
			READ_WRITE_PTR readWrite = std::make_shared<ReadWrite>();
			ComponentContainer.push_back(readWrite);
			SortContainer();
			break;
		}
		// add more components here!!!!
		
		default:
			break;
		}
	}
	else
		std::cout << "LABLE_COMPONENT_TYPE " << ct << " already exists in the container" << std::endl;
}

void Container::RemoveComponent(LABEL_COMPONENT_TYPE ct)
{
}


// should override sort operatot algorithm TEST ME
void Container::SortContainer()
{
	std::sort(ComponentContainer.begin(), ComponentContainer.end());
}



bool operator<(const COMPONENT_PTR & c1, const COMPONENT_PTR & c2)
{
	return c1->GetPriorityType() < c2->GetPriorityType();
}
