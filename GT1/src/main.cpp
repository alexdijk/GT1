#include <iostream>
#include <SFML/Graphics.hpp>

#include "state.h"
#include "single_imgui.hpp"

int main(int argc, char** argv)
{
	State s;

	sf::RenderWindow win(sf::VideoMode(800, 600), "Main window");
	ImGui::SFML::Init(win);

	sf::Clock timeDelta;

	bool showframerate{ false };

	while (win.isOpen())
	{
		sf::Event ev;
		while (win.pollEvent(ev))
		{
			ImGui::SFML::ProcessEvent(ev);

			switch (ev.type)
			{
			case sf::Event::Closed:
				win.close();
				break;
			default:
				break;
			}
		}

		ImGui::SFML::Update(win, timeDelta.restart());

		ImGui::Begin("Hello, world!");
		ImGui::Button("Look at this pretty button");
		ImGui::Checkbox("frame rate", &showframerate);
		if (showframerate)
			ImGui::Text("Application average %.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
		ImGui::End();

		win.clear();
		// win.draw();
		ImGui::SFML::Render(win);
		win.display();
	}

	ImGui::SFML::Shutdown();

	return EXIT_SUCCESS;
}