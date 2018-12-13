#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>
#include <gl/GL.h>
#include <gl/GLU.h>
#include "MyVector3.h"
#include "MyMatrix3.h"


using namespace std;
using namespace sf;


class Game
{
public:
	Game();
	~Game();
	void run();
private:
	Window window;
	bool isRunning = false;
	void initialize();
	void update();
	void draw();
	void unload();

	GLuint index;
	Clock clock;
	Time elapsed;

	MyVector3 vect1{ 1.0 ,1.0, - 7.0 }; //front right top
	MyVector3 vect2{ -1.0,1.0,-7.0 }; //front left top
	MyVector3 vect3{ -1.0,-1.0,-7.0 }; //front left bottom
	MyVector3 vect4{ 1.0,-1.0,-7.0 }; //front right bottom
	MyVector3 vect5{ 1.0f, 1.0f, -15.0f }; //back right top
	MyVector3 vect6{ -1.0f, 1.0f, -15.0f }; //back left top
	MyVector3 vect7{ -1.0f, -1.0f, -15.0f }; //back left bottom
	MyVector3 vect8{ 1.0f, -1.0f, -15.0f }; //back right bottom
	MyVector3 vect9;

	float rotationAngle = 0.0f;
};