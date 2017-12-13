#include "Render.h"
#include <iostream>


Render::Render()
	:Component(LABEL_COMPONENT_TYPE::COMP_RENDER, LABEL_PRIORITY_TYPE::PRTY_MID)
{
	std::cout << "Render created" << std::endl;
}


Render::~Render()
{
}

void Render::Update()
{
	std::cout << "Render was updated" << std::endl;
	std::cout << "Render should update 2nd" << std::endl;
}
