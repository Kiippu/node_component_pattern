
//headers
#include "ComponentHeaders.h"
#include "NodeHeaders.h"
#include<iostream>



int main(){

	ANIMATED_SPRITE_PTR sprite = std::make_shared<AnimatedSprite>();


	ENTITY_NODE_PTR entity = std::make_shared<EntityNode>();

	entity->GetComponentContainer()->AddComponent(LABLE_COMPONENT_TYPE::COMP_ANIMATED_SPRITE);
	entity->GetComponentContainer()->AddComponent(LABLE_COMPONENT_TYPE::COMP_ANIMATED_SPRITE);


	entity->Update();

	int wait;
	std::cin >> wait;

	return 0;
}