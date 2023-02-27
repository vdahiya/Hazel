#include "Application.h"
#include "stdio.h"

namespace Hazel {
	
	Application::Application() {
	}

	Application::~Application()
	{
	}

	void Application::Run() {
		printf("running infinite loop now\n");
		while (true);
	}
}




