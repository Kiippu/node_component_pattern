#include "Component.h"
#include <iostream>

ID_COMPONENT_TYPE Component::nextIdForComponent = 0;

Component::Component(LABEL_COMPONENT_TYPE ct, LABEL_PRIORITY_TYPE pt)
	:comp_type(ct),comp_ID(nextIdForComponent++),prty_type(pt)
{
	std::cout << "Component created" << std::endl;

}

Component::~Component()
{
}

LABEL_COMPONENT_TYPE const Component::GetComponentType() const
{
	return comp_type;
}
