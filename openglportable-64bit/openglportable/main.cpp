#include <GL/glut.h>
#include <bits/stdc++.h>
#include <Sky.h>
#include <Road.h>
#include <Railline.h>
#include <Train.h>
using namespace std;

Sky sky;
Road road;
Railline railline;
Train train;

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    sky.draw();
    road.draw();
    railline.draw();
    train.draw();
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
