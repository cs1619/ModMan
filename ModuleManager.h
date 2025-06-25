/*
 * ModuleManager.h
 *
 *  Created on: 19 mar. 2020
 *      author: glic
 */

#ifndef SRC_MODULE_MODULEMANAGER_H_
#define SRC_MODULE_MODULEMANAGER_H_
#include <Module/Module.h>

class ModuleManager
{
public:
	static ModuleManager* getInstance();
	void enableModule(const Module &module);
	void enableAll();
	void disableModule(const Module &module);
	void disableAll();
	bool isModuleEnabled(const Module &module);

private:
	ModuleManager();
	static ModuleManager* instance;
	long moduleInfo;
};

#endif /* SRC_MODULE_MODULEMANAGER_H_ */
