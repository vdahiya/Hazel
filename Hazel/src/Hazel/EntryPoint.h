#pragma once

#ifdef HZ_PLATFORM_WINDOWS


extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv) {

	Hazel::Log::Init();
	HZ_CORE_WARN("Initalized Core Logger new!");
	Hazel::Log::GetClientLogger()->info("Initalized Client Logger!");
	
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif