#include <iostream>
#include <GLFW\glfw3.h>
#include "src\graphics\window.h"



int main() {

	using namespace sparky;
	using namespace graphics;

	Window window("Sparky!", 800, 600);

	while (!window.closed())
	{
		window.update();
	}

	//system("PAUSE");
	return 0;
}

//Fuck Off..
// I think I fixed it
//Fuck yeeeeessssss!!!!
// Roger that its perfect .. bro from tomorrow we start no delays