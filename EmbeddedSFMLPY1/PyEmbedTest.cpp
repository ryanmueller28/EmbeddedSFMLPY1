#include "pch.h"
#include <iostream>
#include <Python.h>
#include <SFML/Graphics.hpp>


int main()
{
	using namespace std;
	Py_Initialize();

	//Run_InteractiveLoop creates a Python Console inside a C program
	//Python data types can then be passed into C.
	PyRun_InteractiveLoop(stdin, "stdin");
	//To do: figure out how to pass data types
	
	Py_Finalize();
	return EXIT_SUCCESS;

}