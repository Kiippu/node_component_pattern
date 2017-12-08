#include "Component.h"
#include <iostream>

ID_COMPONENT_TYPE Component::nextIdForComponent = 0;

Component::Component(LABLE_COMPONENT_TYPE ct)
	:comp_type(ct),comp_ID(nextIdForComponent++)
{
	std::cout << "Component created" << std::endl;

}

Component::~Component()
{
}

LABLE_COMPONENT_TYPE const Component::GetComponentType() const
{
	return comp_type;
}
