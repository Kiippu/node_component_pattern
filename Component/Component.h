#pragma once
#ifndef COMPONENTS_H
#define COMPONENTS_H

#include <memory>
#include "ComponentTypes.h"

/*******************************************************************

							Component.h
	Abstract class to to where all components derive from.

*********************************************************************/

class Component
{
protected:
	explicit Component(LABEL_COMPONENT_TYPE ct);
	
public:
	virtual ~Component();
	// gets type name
	LABEL_COMPONENT_TYPE const GetComponentType() const;

	//holds next the incrememnted id tag
	static ID_COMPONENT_TYPE	nextIdForComponent;

	virtual void update() = 0;

private:
	// components name
	LABEL_COMPONENT_TYPE		comp_type;
	ID_COMPONENT_TYPE			comp_ID;
};

using COMPONENT_PTR = std::shared_ptr<Component>;

#endif

