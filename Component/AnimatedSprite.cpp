#include "AnimatedSprite.h"
#include <iostream>

AnimatedSprite::AnimatedSprite()
	:Component(LABEL_COMPONENT_TYPE::COMP_ANIMATED_SPRITE)
{
	std::cout << "AnimatedSprite was created" << std::endl;
}


AnimatedSprite::~AnimatedSprite()
{
}

void AnimatedSprite::update()
{
	std::cout << "AnimatedSprite was updated" << std::endl;
}
