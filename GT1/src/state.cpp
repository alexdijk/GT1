#include "state.h"

std::string State::getText() const
{
	return text;
}

void State::setText(std::string t)
{
	text = t;
}
