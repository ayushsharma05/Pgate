#pragma once

#ifdef PG_PLATFORM_WINDOWS
	
extern Pgate::Application* Pgate::CreateApplication();
int main(int argc, char** argv)
{
	auto app = Pgate::CreateApplication();
	app->Run();
	delete app;
}

#endif // PG_WINDOWS_PLATFORM
