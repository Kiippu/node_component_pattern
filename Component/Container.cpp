#include "Container.h"

#include <iostream>
#include <memory>
#include "AnimatedSprite.h"
#include <list>

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
// change list to map!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
COMPONENT_PTR const & Container::GetComponent(LABLE_COMPONENT_TYPE ct) const
{
	
	//No component of that lable in the container
	return nullptr;
}

CONTAINER_LIST const & Container::GetContainerList() const
{
	return ComponentContainer;
}

void Container::AddComponent(LABLE_COMPONENT_TYPE ct)
{
	if (GetComponent(ct) == nullptr) {
		// Creates components depending on what component type is passed
		switch (ct)
		{
			// Animated sprites
		case(LABLE_COMPONENT_TYPE::COMP_ANIMATED_SPRITE): {
			std::cout << "Adding AnimatedSprite component to container" << std::endl;
			ANIMATED_SPRITE_PTR sprite = std::make_shared<AnimatedSprite>();
			ComponentContainer.push_back(sprite);
			break;
		}
														  /*

														  add more components here!!!!

														  */
		default:
			break;
		}
	}
	else
		std::cout << ct << " already exists in the container" << std::endl;
}

void Container::RemoveComponent(LABLE_COMPONENT_TYPE ct)
{
}
