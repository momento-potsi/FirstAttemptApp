#pragma once
#include <utility>
#include <iostream>

namespace AppSystem
{
	class Application
	{
	public:
		Application();
		~Application();
		void run();
	private:

	};

	enum class ErrorState
	{
		Fatal, Warning, None, Recover
	};

	class Error
	{
	public:
		std::string debuginfo;
	public:
		Error();
		~Error();
		int panic();
		void catchfn();
		void warn();
	private:

	};
}