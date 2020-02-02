#include "pch.h"
#include "PythonEmbedded.h"

PythonEmbedded::PythonEmbedded()
{
	Py_Initialize();

	//Run_InteractiveLoop creates a Python Console inside a C program
	//Python data types can then be passed into C.
	PyRun_InteractiveLoop(stdin, "stdin");
	//To do: figure out how to pass data types

	Py_Finalize();
}


PythonEmbedded::~PythonEmbedded()
{
}
