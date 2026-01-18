#include <GL/glut.h>
#include <bits/stdc++.h>
#include <Sky.h>
using namespace std;

Sky sky;

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    sky.draw();

    glFlush();

}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("Animation Project");
    glutInitWindowSize(1920, 1080);
    glutDisplayFunc(display);
    gluOrtho2D(-250, 250, -250, 250);
    glutMainLoop();
    return 0;
}
