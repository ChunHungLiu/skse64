#pragma once

#include "GameMenus.h"
#include "ScaleformLoader.h"

class CustomMenuCreator
{
public:
	static IMenu* Create(void);
	static void SetSwfPath(const char* path);

private:
	CustomMenuCreator();

	static std::string swfPath_;
};

class CustomMenu : public IMenu
{
public:
	CustomMenu(const char* swfPath);
	virtual void Accept(CallbackProcessor * processor);
	virtual void Render(void);
};