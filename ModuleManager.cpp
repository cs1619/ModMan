/*
 * ModuleManager.cpp
 *
 *  Created on: 19 mar. 2020
 *      author: glic
 */

#include <Module/ModuleManager.h>
#include <stddef.h>
ModuleManager* ModuleManager::instance = NULL;

ModuleManager* ModuleManager::getInstance()
{
	if (instance == NULL)
	{
		instance = new ModuleManager();
	}

	return instance;
}

ModuleManager::ModuleManager()
{
	moduleInfo = 0L;
}

void ModuleManager::enableModule(const Module &module)
{
	moduleInfo |=  module;
}

void ModuleManager::enableAll()
{
	moduleInfo = (1L << 31) - 1L;
}

void ModuleManager::disableModule(const Module &module)
{
	moduleInfo &=  ~module;
}

void ModuleManager::disableAll()
{
	moduleInfo = 0L;
}

bool ModuleManager::isModuleEnabled(const Module &module)
{
	return (moduleInfo & module);
}
