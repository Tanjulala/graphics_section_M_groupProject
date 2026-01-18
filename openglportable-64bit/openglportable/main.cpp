#include <GL/glut.h>
#include <bits/stdc++.h>
using namespace std;

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
    glEnd();
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
