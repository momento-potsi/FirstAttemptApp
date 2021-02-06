#include "System.h"

namespace AppSystem
{
//General Functions
	void Log(std::string str) {}
	int cleanup(std::pair<Error, ErrorState> err)
	{
		if (err.second != ErrorState::None)
		{
			switch (err.second)
			{
			case ErrorState::Fatal:
				return err.first.panic();
				break;
			case ErrorState::Warning:
				err.first.warn();
				return 1;
				break;
			case ErrorState::Recover:
				err.first.panic();
				return 3;
				break;
			}
		}
		else
		{
			Log(err.first.debuginfo);
			return EXIT_SUCCESS;
		}
	}
//App class
	Application::Application()
	{
		std::cout << "[Application Start]" << std::endl;
	}

	Application::~Application()
	{
		std::cout << "[Application Termination]" << std::endl;
	}

	void Application::run() 
	{

	}

//Error class
	Error::Error()
	{
	}

	Error::~Error()
	{
	}
	int Error::panic() { return 0; }
	void Error::catchfn() {}
	void Error::warn() {}
}