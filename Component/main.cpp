
//headers
#include "ComponentHeaders.h"
#include "NodeHeaders.h"
#include<iostream>

/*

TODO:

- ranked system in component update to make sure input and rendering happend before others etc.
	- test system
		- sort no working
			- test more on this


*/

int main(){

	ENTITY_NODE_PTR entity = std::make_shared<EntityNode>();

	std::cout << " adding COMP_RENDER now " << std::endl;
	entity->GetComponentContainer()->AddComponent(LABEL_COMPONENT_TYPE::COMP_RENDER);

	std::cout << " adding COMP_READ_WRITE now " << std::endl;
	entity->GetComponentContainer()->AddComponent(LABEL_COMPONENT_TYPE::COMP_READ_WRITE);

	std::cout << " adding COMP_ANIMATED_SPRITE now " << std::endl;
	entity->GetComponentContainer()->AddComponent(LABEL_COMPONENT_TYPE::COMP_ANIMATED_SPRITE);
	
	

	std::cout << "Running entity updates now " << std::endl;
	entity->Update();

	int wait;
	std::cin >> wait;

	return 0;
}