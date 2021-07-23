#pragma once

#ifndef JAL_LIB
#ifdef _DEBUG
#pragma comment(lib, "JALKit.lib")
#else
#pragma comment(lib, "JALKit.lib")
#endif
#endif

#include <string>
using namespace std;

class JALHelloWorld
{
public:
	JALHelloWorld(void);
	virtual ~JALHelloWorld(void);

public:
	std::string HelloWorld();
};

