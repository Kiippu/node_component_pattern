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
	// finds out if a component exists in the container
	bool hasComponent(LABEL_COMPONENT_TYPE ct);

	// gets a component out of the container to access it, if it exists
	COMPONENT_PTR GetComponent(LABEL_COMPONENT_TYPE ct);

	//get component contain list
	CONTAINER_LIST const & GetContainerList() const;

	// Add a component to the containers list
	void AddComponent(LABEL_COMPONENT_TYPE ct);

	//remove a component
	void RemoveComponent(LABEL_COMPONENT_TYPE ct);

private:
	// list of components belonging to parent
	CONTAINER_LIST		ComponentContainer;
};

using CONTAINER_PTR = std::shared_ptr<Container>;

#endif


