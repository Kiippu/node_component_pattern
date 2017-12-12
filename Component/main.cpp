
//headers
#include "ComponentHeaders.h"
#include "NodeHeaders.h"
#include<iostream>

/*

TODO:

- ranked system in component update to make sure input and rendering happend before others etc.
	- test system
		- sort  in container
			- add more components whith differing priorities


*/

int main(){

	std::cout << "Making entity now" << std::endl;
	ENTITY_NODE_PTR entity = std::make_shared<EntityNode>();

	std::cout << " adding component now " << std::endl;
	entity->GetComponentContainer()->AddComponent(LABEL_COMPONENT_TYPE::COMP_ANIMATED_SPRITE);
	std::cout << " adding the same component now " << std::endl;
	entity->GetComponentContainer()->AddComponent(LABEL_COMPONENT_TYPE::COMP_ANIMATED_SPRITE);

	std::cout << "Getting component " << entity->GetComponentContainer()->GetComponent(COMP_ANIMATED_SPRITE)->GetComponentType() << std::endl;

	std::cout << "Runnig entity updates now " << std::endl;
	entity->Update();

	int wait;
	std::cin >> wait;

	return 0;
}