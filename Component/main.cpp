
//headers
#include "ComponentHeaders.h"
#include "NodeHeaders.h"
#include<iostream>



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