#include "Python.h"
#include "helloworld_api.h"
#include <math.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	Py_Initialize();
	inithelloworld();
	import_helloworld();
	sayHello();
	Py_Finalize();
	return 0;
}
