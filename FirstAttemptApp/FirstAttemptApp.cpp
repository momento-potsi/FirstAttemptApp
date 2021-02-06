// FirstAttemptApp.cpp: Program execution begins and ends there.

#include <iostream>
#include "System.h"
#define TEST_MODE 0

using namespace AppSystem;

auto main() -> int
{
    std::cout << "Hello World!\n";
	AppSystem::Application* app = new AppSystem::Application();
	app->run();
	delete app;
	int returncode = AppSystem::cleanup(std::make_pair<Error, ErrorState>());
	system("PAUSE");
	return returncode;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
