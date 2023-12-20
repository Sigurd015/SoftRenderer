#include "pch.h"
#include "Application.h"

namespace CORE
{
	Application::Application(const ApplicationSpecification& specification)
	{}

	Application::~Application()
	{}

	void Application::Run()
	{
		uint32_t i = 0;
		while (true)
		{
			printf("Running application %d\n", i++);
		}
	}
}