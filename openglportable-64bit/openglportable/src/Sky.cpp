#include "Sky.h"

Sky::Sky()
{
    //ctor
}

Sky::~Sky()
{
    //dtor
}

void Sky::draw()
{
    glBegin(GL_POLYGON);
    glColor3ub(0, 128, 255);
    glVertex2f(-250.0f, 250.0f);
    glVertex2f(250.0f, 250.0f);
    glColor3ub(135, 206, 250);
    glVertex2f(250.0f, 0.0f);
    glVertex2f(-250.0f, 0.0f);
    glEnd();
}
