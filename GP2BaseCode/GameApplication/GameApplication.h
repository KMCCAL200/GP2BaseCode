//header guard, so this file is only complied once
#pragma once

#include <string>

using namespace std;

//Forward declaration of our window interface
class IWindow;

//structure for holding gameOptions, this will be loaded from config files
struct GameOptionsDesc
{
	wstring gameName;
	int width;
	int height;
	bool fullscreen;
}