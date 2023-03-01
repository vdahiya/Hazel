#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"


namespace Hazel {


	class HAZEL_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }

		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};


	
	
	#define HZ_CORE_TRACE(...)     ::Hazel::Log::GetClientLogger()->trace(__VA_ARGS__)
	#define HZ_CORE_INFO(...)      ::Hazel::Log::GetClientLogger()->info(__VA_ARGS__)
	#define HZ_CORE_ERROR(...)     ::Hazel::Log::GetClientLogger()->error(__VA_ARGS__)
	#define HZ_CORE_WARN(...)      ::Hazel::Log::GetClientLogger()->warn(__VA_ARGS__)
}



