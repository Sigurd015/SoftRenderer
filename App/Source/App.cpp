#include "Core.h"
#include "EntryPoint.h"

namespace CORE
{
	class TestApp : public Application
	{
	public:
		TestApp(const CORE::ApplicationSpecification& specification) : CORE::Application(specification)
		{}

		~TestApp()
		{}
	};
}

CORE::Application* CORE::CreateApplication(ApplicationCommandLineArgs args)
{
	CORE::ApplicationSpecification spec;
	spec.Name = "App";

	return new TestApp(spec);
}