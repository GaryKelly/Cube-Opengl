#include <Game.h>

bool updatable = false;



Game::Game() : window(VideoMode(800, 600), "OpenGL Cube")
{
	index = glGenLists(1);
}

Game::~Game(){}

void Game::run()
{

	initialize();

	Event event;

	while (isRunning){

		cout << "Game running..." << endl;

		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
			{
				isRunning = false;
			}
		}
		update();
		draw();
	}

}

void Game::initialize()
{
	isRunning = true;

	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, window.getSize().x / window.getSize().y, 1.0, 500.0);
	glMatrixMode(GL_MODELVIEW);

	// glNewList(index, GL_COMPILE);
	// Creates a new Display List
	// Initalizes and Compiled to GPU
	// https://www.opengl.org/sdk/docs/man2/xhtml/glNewList.xml
	glNewList(index, GL_COMPILE);
	glBegin(GL_QUADS);
	{
		//Front Face
		glColor3f(0.0f, 0.0f, 1.0f);
		glVertex3f(vect1.getX(),vect1.getY(), vect1.getZ());
		glVertex3f(vect2.getX(), vect2.getY(), vect2.getZ());
		glVertex3f(vect3.getX(), vect3.getY(), vect3.getZ());
		glVertex3f(vect4.getX(), vect4.getY(), vect4.getZ());

		//Back Face
		glColor3f(0.0f, 1.0f, 0.0f);
		glVertex3f(vect5.getX(), vect5.getY(), vect5.getZ());
		glVertex3f(vect6.getX(), vect6.getY(), vect6.getZ());
		glVertex3f(vect7.getX(), vect7.getY(), vect7.getZ());
		glVertex3f(vect8.getX(), vect8.getY(), vect8.getZ());
	

		//Complete the faces of the Cube
		//left side face
		glColor3f(1.0f, 1.0f, 0.0f);
		glVertex3f(vect2.getX(), vect2.getY(), vect2.getZ());
		glVertex3f(vect3.getX(), vect3.getY(), vect3.getZ());
		glVertex3f(vect7.getX(), vect7.getY(), vect7.getZ());
		glVertex3f(vect6.getX(), vect6.getY(), vect6.getZ());

		//right side face
		glColor3f(1.0f, 1.0f, 0.0f);
		glVertex3f(vect1.getX(), vect1.getY(), vect1.getZ());
		glVertex3f(vect4.getX(), vect4.getY(), vect4.getZ());
		glVertex3f(vect8.getX(), vect8.getY(), vect8.getZ());
		glVertex3f(vect5.getX(), vect5.getY(), vect5.getZ());

		//top face
		glColor3f(0.0f, 1.0f, 1.0f);
		glVertex3f(vect1.getX(), vect1.getY(), vect1.getZ());
		glVertex3f(vect2.getX(), vect2.getY(), vect2.getZ());
		glVertex3f(vect6.getX(), vect6.getY(), vect6.getZ());
		glVertex3f(vect5.getX(), vect5.getY(), vect5.getZ());

		//bottom face
		glColor3f(1.0f, 0.0f, 1.0f);
		glVertex3f(vect3.getX(), vect3.getY(), vect3.getZ());
		glVertex3f(vect4.getX(), vect4.getY(), vect4.getZ());
		glVertex3f(vect8.getX(), vect8.getY(), vect8.getZ());
		glVertex3f(vect7.getX(), vect7.getY(), vect7.getZ());
	
	}
	glEnd();
	glEndList();
}

void Game::update()
{
	elapsed = clock.getElapsedTime();
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
	{
		window.close();
	}
	if (elapsed.asSeconds() >= 1.0f)
	{
		clock.restart();

		if (!updatable)
		{
			updatable = true;
		}
		else
			updatable = false;
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::X))
	{
		MyMatrix3 matrix1;
		MyMatrix3 matrix2;
		MyMatrix3 matrix3;
		MyMatrix3 m_matrix1{ vect1,vect2,vect3 };
		MyMatrix3 m_matrix2{ vect4,vect5,vect6 };
		MyMatrix3 m_matrix3{ vect7,vect8,vect9 };
		m_matrix1 = m_matrix1.operator*(matrix1.rotationX(.001));
		m_matrix2 = m_matrix2.operator*(matrix2.rotationX(.001));
		m_matrix3 = m_matrix3.operator*(matrix3.rotationX(.001));
		vect1 = m_matrix1.row(0);
		vect2 = m_matrix1.row(1);
		vect3 = m_matrix1.row(2);
		vect4 = m_matrix2.row(0);
		vect5 = m_matrix2.row(1);
		vect6 = m_matrix2.row(2);
		vect7 = m_matrix3.row(0);
		vect8 = m_matrix3.row(1);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Y))
	{
		MyMatrix3 matrix1;
		MyMatrix3 matrix2;
		MyMatrix3 matrix3;
		MyMatrix3 m_matrix1{ vect1,vect2,vect3 };
		MyMatrix3 m_matrix2{ vect4,vect5,vect6 };
		MyMatrix3 m_matrix3{ vect7,vect8,vect9 };
		m_matrix1 = m_matrix1.operator*(matrix1.rotationY(.001));
		m_matrix2 = m_matrix2.operator*(matrix2.rotationY(.001));
		m_matrix3 = m_matrix3.operator*(matrix3.rotationY(.001));
		vect1 = m_matrix1.row(0);
		vect2 = m_matrix1.row(1);
		vect3 = m_matrix1.row(2);
		vect4 = m_matrix2.row(0);
		vect5 = m_matrix2.row(1);
		vect6 = m_matrix2.row(2);
		vect7 = m_matrix3.row(0);
		vect8 = m_matrix3.row(1);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
	{
		MyMatrix3 matrix1;
		MyMatrix3 matrix2;
		MyMatrix3 matrix3;
		MyMatrix3 m_matrix1{ vect1,vect2,vect3 };
		MyMatrix3 m_matrix2{ vect4,vect5,vect6 };
		MyMatrix3 m_matrix3{ vect7,vect8,vect9 };
		m_matrix1 = m_matrix1.operator*(matrix1.rotationZ(.001));
		m_matrix2 = m_matrix2.operator*(matrix2.rotationZ(.001));
		m_matrix3 = m_matrix3.operator*(matrix3.rotationZ(.001));
		vect1 = m_matrix1.row(0);
		vect2 = m_matrix1.row(1);
		vect3 = m_matrix1.row(2);
		vect4 = m_matrix2.row(0);
		vect5 = m_matrix2.row(1);
		vect6 = m_matrix2.row(2);
		vect7 = m_matrix3.row(0);
		vect8 = m_matrix3.row(1);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		MyMatrix3 matrix1;
		MyMatrix3 matrix2;
		MyMatrix3 matrix3;
		MyMatrix3 m_matrix1{ vect1,vect2,vect3 };
		MyMatrix3 m_matrix2{ vect4,vect5,vect6 };
		MyMatrix3 m_matrix3{ vect7,vect8,vect9 };
		m_matrix1 = m_matrix1.operator-(matrix1.scale(.001));
		m_matrix2 = m_matrix2.operator-(matrix2.scale(.001));
		m_matrix3 = m_matrix3.operator-(matrix3.scale(.001));
		vect1 = m_matrix1.row(0);
		vect2 = m_matrix1.row(1);
		vect3 = m_matrix1.row(2);
		vect4 = m_matrix2.row(0);
		vect5 = m_matrix2.row(1);
		vect6 = m_matrix2.row(2);
		vect7 = m_matrix3.row(0);
		vect8 = m_matrix3.row(1);
	}





	glNewList(index, GL_COMPILE);
	glBegin(GL_QUADS);
	{
		//Front Face
		glColor3f(0.0f, 0.0f, 1.0f);
		glVertex3f(vect1.getX(), vect1.getY(), vect1.getZ());
		glVertex3f(vect2.getX(), vect2.getY(), vect2.getZ());
		glVertex3f(vect3.getX(), vect3.getY(), vect3.getZ());
		glVertex3f(vect4.getX(), vect4.getY(), vect4.getZ());

		//Back Face
		glColor3f(0.0f, 1.0f, 0.0f);
		glVertex3f(vect5.getX(), vect5.getY(), vect5.getZ());
		glVertex3f(vect6.getX(), vect6.getY(), vect6.getZ());
		glVertex3f(vect7.getX(), vect7.getY(), vect7.getZ());
		glVertex3f(vect8.getX(), vect8.getY(), vect8.getZ());

		//Complete the faces of the Cube
		//left side face
		glColor3f(0.5f, 1.0f, 0.0f);
		glVertex3f(vect2.getX(), vect2.getY(), vect2.getZ());
		glVertex3f(vect3.getX(), vect3.getY(), vect3.getZ());
		glVertex3f(vect7.getX(), vect7.getY(), vect7.getZ());
		glVertex3f(vect6.getX(), vect6.getY(), vect6.getZ());

		//right side face
		glColor3f(1.0f, 1.0f, 0.0f);
		glVertex3f(vect1.getX(), vect1.getY(), vect1.getZ());
		glVertex3f(vect4.getX(), vect4.getY(), vect4.getZ());
		glVertex3f(vect8.getX(), vect8.getY(), vect8.getZ());
		glVertex3f(vect5.getX(), vect5.getY(), vect5.getZ());

		//top face
		glColor3f(0.0f, 1.0f, 1.0f);
		glVertex3f(vect1.getX(), vect1.getY(), vect1.getZ());
		glVertex3f(vect2.getX(), vect2.getY(), vect2.getZ());
		glVertex3f(vect6.getX(), vect6.getY(), vect6.getZ());
		glVertex3f(vect5.getX(), vect5.getY(), vect5.getZ());

		//bottom face
		glColor3f(1.0f, 0.0f, 1.0f);
		glVertex3f(vect3.getX(), vect3.getY(), vect3.getZ());
		glVertex3f(vect4.getX(), vect4.getY(), vect4.getZ());
		glVertex3f(vect8.getX(), vect8.getY(), vect8.getZ());
		glVertex3f(vect7.getX(), vect7.getY(), vect7.getZ());
	
	}
	glEnd();
	glEndList();
	
	cout << "Update up" << endl;
}

void Game::draw()
{
	cout << "Drawing" << endl;

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	cout << "Drawing Cube " << endl;
	glLoadIdentity();
	//glRotatef(rotationAngle, 0, 0, 1); // Rotates the camera on Y Axis

	glCallList(1);

	window.display();

}

void Game::unload()
{
	cout << "Cleaning up" << endl;
}

