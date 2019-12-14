#pragma once

#include <iostream>

class State
{
private:
	std::string text{};

public:
	State() {};
	~State() {};

	std::string getText() const;
	void setText(std::string t);
};