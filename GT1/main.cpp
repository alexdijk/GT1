#include "state.h"

int main(int argc, char** argv)
{
	State s;

	std::cout << "Text A: " << s.getText() << std::endl;
	
	s.setText("Cool B");

	std::cout << "Text B: " << s.getText() << std::endl;

	return EXIT_SUCCESS;
}