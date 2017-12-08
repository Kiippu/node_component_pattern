#pragma once
#ifndef CONTAINER_H
#define CONTAINER_H

#include <list>
#include "Component.h"
#include "ComponentTypes.h"

/*******************************************************************

							Container.h
		Container class which holds components for nodes

*********************************************************************/

// change this to a map
using CONTAINER_LIST = std::list<COMPONENT_PTR>;

class Container
{
public:
	Container();
	~Container();

	// gets a component out of the container to access it, if it exists
	COMPONENT_PTR const & GetComponent(LABLE_COMPONENT_TYPE ct) const;

	//get component contain list
	CONTAINER_LIST const & GetContainerList() const;

	// Add a component to the containers list
	void AddComponent(LABLE_COMPONENT_TYPE ct);

	//remove a component
	void RemoveComponent(LABLE_COMPONENT_TYPE ct);

private:
	// list of components belonging to parent
	CONTAINER_LIST		ComponentContainer;
};

using CONTAINER_PTR = std::shared_ptr<Container>;

#endif


