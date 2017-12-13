#pragma once
#ifndef READ_WRITE_H
#define READ_WRITE_H

#include "Component.h"

class ReadWrite : public Component
{
public:
	ReadWrite();
	~ReadWrite();

	void Update();
	
};

using READ_WRITE_PTR = std::shared_ptr<ReadWrite>;

#endif // !READ_WRITE_H




