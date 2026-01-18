#include "Road.h"

Road::Road()
{
    //ctor
}

Road::~Road()
{
    //dtor
}

void Road::draw()
{
    glBegin(GL_POLYGON);
    glColor3b(0, 0, 0);
    glVertex2f(-250.0f, -15.0f);
    glVertex2f(-250.0f, -55.0f);
    glVertex2f(250.0f, -55.0f);
    glVertex2f(250.0f, -15.0f);
    glEnd();
}
