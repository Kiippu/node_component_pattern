#pragma once
#ifndef RENDER_H
#define RENDER_H
#include "Component.h"

class Render : public Component
{
public:
	Render();
	~Render();

	void Update();
};

using RENDER_PTR = std::shared_ptr<Render>;


#endif // !RENDER_H

