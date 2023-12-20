#pragma once

#ifdef WINDOWS
extern CORE::Application* CORE::CreateApplication(CORE::ApplicationCommandLineArgs args);

namespace CORE
{
	int Main(int argc, char** argv)
	{
		auto app = CreateApplication({ argc, argv });
		app->Run();
		delete app;
		return 0;
	}
}

#ifdef DIST
#include <Windows.h>

int APIENTRY WinMain(HINSTANCE hInst, HINSTANCE hInstPrev, PSTR cmdline, int cmdshow)
{
	return CORE::Main(__argc, __argv);
}

#else

int main(int argc, char** argv)
{
	return CORE::Main(argc, argv);
}

#endif

#endif 