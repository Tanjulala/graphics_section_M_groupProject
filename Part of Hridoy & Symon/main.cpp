#include <windows.h>
#include <GL/glut.h>
#include <bits/stdc++.h>
using namespace std;


float TrainPosition =400.0;
float car1Position = 400.0;
float car2Position = 400.0;
float car3Position = 400.0;
float car4Position = 400.0;
float car5Position = 400.0;
float boat1Position =-500.0f;
float speed =5.0;
float boatSpeed = 5.0;
float moveSun = -60.0f;

void Circle(float radius, float xc, float yc, float r, float g, float b){
    glLineWidth(7.5);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++) {
        glColor3ub(r,g,b);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=radius;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+xc,y+yc );
    }
    glEnd();
}
void circle(float radius, float xc, float yc, float r, float g, float b){
    glBegin(GL_POLYGON);
    for (int i = 0; i < 200; i++) {
        glColor3f(r, g, b);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = radius;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + xc, y + yc);
    }
}
 void renderBitmapString(float x, float y, float z, void *font, const char *string){
    char *c;
    glRasterPos3f(x, y, z);
    for (c = (char*)string; *c != '\0'; c++) {
        glutBitmapCharacter(font, *c);
    }
}

 void display1_view()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1, 1, 1);
    renderBitmapString(-130.0f, 150.0f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24,
    "Transitions: A Visual Journey Through City, Bridge, and Village");
    renderBitmapString(-125.0f, 125.0f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24,
    "COURSE TEACHER:   ZISAN AHMEND");
     renderBitmapString(-125.0f, 100.0f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24,
    "23-54263-3 MD SYMON ISLAM JIHAN\n");
  glFlush();
}



void sun()
{
    Circle(15, 0, 220, 255, 251, 5 );
}


void sky()
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

void Railline()
{
    glBegin(GL_POLYGON);  ///nicher rail line ta
    glColor3ub(128, 0, 0);
    glVertex2f(-250.0f, -13.0f);
    glVertex2f(-250.0f, -15.0f);
    glVertex2f(250.0f, -15.0f);
    glVertex2f(250.0f, -13.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///uporer line ta
    glColor3ub(128, 0, 0);
    glVertex2f(-250.0f, 10.0f);
    glVertex2f(-250.0f, 8.0f);
    glVertex2f(250.0f, 8.0f);
    glVertex2f(250.0f, 10.0f);
    glEnd();
///----------------------------------------------------START OF RAIL PLATES--------------------///
    glBegin(GL_POLYGON);  ///INITIAL rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+2.5, 8.0f);
    glVertex2f(-250.0+2.5, -13.0f);
    glVertex2f(-250.0f+4.5, -13.0f);
    glVertex2f(-250.0f+4.5, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///1st rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5, 8.0f);
    glVertex2f(-250.0+12.5, -13.0f);
    glVertex2f(-250.0f+14.5, -13.0f);
    glVertex2f(-250.0f+14.5, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///2nd rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+10.0, 8.0f);
    glVertex2f(-250.0+12.5+10.0, -13.0f);
    glVertex2f(-250.0f+14.5+10.0, -13.0f);
    glVertex2f(-250.0f+14.5+10.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///3rd rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+20.0, 8.0f);
    glVertex2f(-250.0+12.5+20.0, -13.0f);
    glVertex2f(-250.0f+14.5+20.0, -13.0f);
    glVertex2f(-250.0f+14.5+20.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///4th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+30.0, 8.0f);
    glVertex2f(-250.0+12.5+30.0, -13.0f);
    glVertex2f(-250.0f+14.5+30.0, -13.0f);
    glVertex2f(-250.0f+14.5+30.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///5th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+40.0, 8.0f);
    glVertex2f(-250.0+12.5+40.0, -13.0f);
    glVertex2f(-250.0f+14.5+40.0, -13.0f);
    glVertex2f(-250.0f+14.5+40.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///6th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+50.0, 8.0f);
    glVertex2f(-250.0+12.5+50.0, -13.0f);
    glVertex2f(-250.0f+14.5+50.0, -13.0f);
    glVertex2f(-250.0f+14.5+50.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///7th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+60.0, 8.0f);
    glVertex2f(-250.0+12.5+60.0, -13.0f);
    glVertex2f(-250.0f+14.5+60.0, -13.0f);
    glVertex2f(-250.0f+14.5+60.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///8th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+70.0, 8.0f);
    glVertex2f(-250.0+12.5+70.0, -13.0f);
    glVertex2f(-250.0f+14.5+70.0, -13.0f);
    glVertex2f(-250.0f+14.5+70.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///9th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+80.0, 8.0f);
    glVertex2f(-250.0+12.5+80.0, -13.0f);
    glVertex2f(-250.0f+14.5+80.0, -13.0f);
    glVertex2f(-250.0f+14.5+80.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///10th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+90.0, 8.0f);
    glVertex2f(-250.0+12.5+90.0, -13.0f);
    glVertex2f(-250.0f+14.5+90.0, -13.0f);
    glVertex2f(-250.0f+14.5+90.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///11th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+100.0, 8.0f);
    glVertex2f(-250.0+12.5+100.0, -13.0f);
    glVertex2f(-250.0f+14.5+100.0, -13.0f);
    glVertex2f(-250.0f+14.5+100.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///12th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+110.0, 8.0f);
    glVertex2f(-250.0+12.5+110.0, -13.0f);
    glVertex2f(-250.0f+14.5+110.0, -13.0f);
    glVertex2f(-250.0f+14.5+110.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///13th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+120.0, 8.0f);
    glVertex2f(-250.0+12.5+120.0, -13.0f);
    glVertex2f(-250.0f+14.5+120.0, -13.0f);
    glVertex2f(-250.0f+14.5+120.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///14th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+130.0, 8.0f);
    glVertex2f(-250.0+12.5+130.0, -13.0f);
    glVertex2f(-250.0f+14.5+130.0, -13.0f);
    glVertex2f(-250.0f+14.5+130.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///15th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+140.0, 8.0f);
    glVertex2f(-250.0+12.5+140.0, -13.0f);
    glVertex2f(-250.0f+14.5+140.0, -13.0f);
    glVertex2f(-250.0f+14.5+140.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///16th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+150.0, 8.0f);
    glVertex2f(-250.0+12.5+150.0, -13.0f);
    glVertex2f(-250.0f+14.5+150.0, -13.0f);
    glVertex2f(-250.0f+14.5+150.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///17th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+160.0, 8.0f);
    glVertex2f(-250.0+12.5+160.0, -13.0f);
    glVertex2f(-250.0f+14.5+160.0, -13.0f);
    glVertex2f(-250.0f+14.5+160.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///18th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+170.0, 8.0f);
    glVertex2f(-250.0+12.5+170.0, -13.0f);
    glVertex2f(-250.0f+14.5+170.0, -13.0f);
    glVertex2f(-250.0f+14.5+170.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///19th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+180.0, 8.0f);
    glVertex2f(-250.0+12.5+180.0, -13.0f);
    glVertex2f(-250.0f+14.5+180.0, -13.0f);
    glVertex2f(-250.0f+14.5+180.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///20th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+190.0, 8.0f);
    glVertex2f(-250.0+12.5+190.0, -13.0f);
    glVertex2f(-250.0f+14.5+190.0, -13.0f);
    glVertex2f(-250.0f+14.5+190.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///21th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+200.0, 8.0f);
    glVertex2f(-250.0+12.5+200.0, -13.0f);
    glVertex2f(-250.0f+14.5+200.0, -13.0f);
    glVertex2f(-250.0f+14.5+200.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///22th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+210.0, 8.0f);
    glVertex2f(-250.0+12.5+210.0, -13.0f);
    glVertex2f(-250.0f+14.5+210.0, -13.0f);
    glVertex2f(-250.0f+14.5+210.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///23th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+220.0, 8.0f);
    glVertex2f(-250.0+12.5+220.0, -13.0f);
    glVertex2f(-250.0f+14.5+220.0, -13.0f);
    glVertex2f(-250.0f+14.5+220.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///24th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+230.0, 8.0f);
    glVertex2f(-250.0+12.5+230.0, -13.0f);
    glVertex2f(-250.0f+14.5+230.0, -13.0f);
    glVertex2f(-250.0f+14.5+230.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///25th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+240.0, 8.0f);
    glVertex2f(-250.0+12.5+240.0, -13.0f);
    glVertex2f(-250.0f+14.5+240.0, -13.0f);
    glVertex2f(-250.0f+14.5+240.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///26th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+250.0, 8.0f);
    glVertex2f(-250.0+12.5+250.0, -13.0f);
    glVertex2f(-250.0f+14.5+250.0, -13.0f);
    glVertex2f(-250.0f+14.5+250.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///27th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+260.0, 8.0f);
    glVertex2f(-250.0+12.5+260.0, -13.0f);
    glVertex2f(-250.0f+14.5+260.0, -13.0f);
    glVertex2f(-250.0f+14.5+260.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///28th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+270.0, 8.0f);
    glVertex2f(-250.0+12.5+270.0, -13.0f);
    glVertex2f(-250.0f+14.5+270.0, -13.0f);
    glVertex2f(-250.0f+14.5+270.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///29th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+280.0, 8.0f);
    glVertex2f(-250.0+12.5+280.0, -13.0f);
    glVertex2f(-250.0f+14.5+280.0, -13.0f);
    glVertex2f(-250.0f+14.5+280.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///30th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+290.0, 8.0f);
    glVertex2f(-250.0+12.5+290.0, -13.0f);
    glVertex2f(-250.0f+14.5+290.0, -13.0f);
    glVertex2f(-250.0f+14.5+290.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///31th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+300.0, 8.0f);
    glVertex2f(-250.0+12.5+300.0, -13.0f);
    glVertex2f(-250.0f+14.5+300.0, -13.0f);
    glVertex2f(-250.0f+14.5+300.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///32th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+310.0, 8.0f);
    glVertex2f(-250.0+12.5+310.0, -13.0f);
    glVertex2f(-250.0f+14.5+310.0, -13.0f);
    glVertex2f(-250.0f+14.5+310.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///33th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+320.0, 8.0f);
    glVertex2f(-250.0+12.5+320.0, -13.0f);
    glVertex2f(-250.0f+14.5+320.0, -13.0f);
    glVertex2f(-250.0f+14.5+320.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///34th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+330.0, 8.0f);
    glVertex2f(-250.0+12.5+330.0, -13.0f);
    glVertex2f(-250.0f+14.5+330.0, -13.0f);
    glVertex2f(-250.0f+14.5+330.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///35th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+340.0, 8.0f);
    glVertex2f(-250.0+12.5+340.0, -13.0f);
    glVertex2f(-250.0f+14.5+340.0, -13.0f);
    glVertex2f(-250.0f+14.5+340.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///36th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+350.0, 8.0f);
    glVertex2f(-250.0+12.5+350.0, -13.0f);
    glVertex2f(-250.0f+14.5+350.0, -13.0f);
    glVertex2f(-250.0f+14.5+350.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///37th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+360.0, 8.0f);
    glVertex2f(-250.0+12.5+360.0, -13.0f);
    glVertex2f(-250.0f+14.5+360.0, -13.0f);
    glVertex2f(-250.0f+14.5+360.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///38th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+370.0, 8.0f);
    glVertex2f(-250.0+12.5+370.0, -13.0f);
    glVertex2f(-250.0f+14.5+370.0, -13.0f);
    glVertex2f(-250.0f+14.5+370.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///39th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+380.0, 8.0f);
    glVertex2f(-250.0+12.5+380.0, -13.0f);
    glVertex2f(-250.0f+14.5+380.0, -13.0f);
    glVertex2f(-250.0f+14.5+380.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///40th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+390.0, 8.0f);
    glVertex2f(-250.0+12.5+390.0, -13.0f);
    glVertex2f(-250.0f+14.5+390.0, -13.0f);
    glVertex2f(-250.0f+14.5+390.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///41th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+400.0, 8.0f);
    glVertex2f(-250.0+12.5+400.0, -13.0f);
    glVertex2f(-250.0f+14.5+400.0, -13.0f);
    glVertex2f(-250.0f+14.5+400.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///42th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+410.0, 8.0f);
    glVertex2f(-250.0+12.5+410.0, -13.0f);
    glVertex2f(-250.0f+14.5+410.0, -13.0f);
    glVertex2f(-250.0f+14.5+410.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///43th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+420.0, 8.0f);
    glVertex2f(-250.0+12.5+420.0, -13.0f);
    glVertex2f(-250.0f+14.5+420.0, -13.0f);
    glVertex2f(-250.0f+14.5+420.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///44th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+430.0, 8.0f);
    glVertex2f(-250.0+12.5+430.0, -13.0f);
    glVertex2f(-250.0f+14.5+430.0, -13.0f);
    glVertex2f(-250.0f+14.5+430.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///45th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+440.0, 8.0f);
    glVertex2f(-250.0+12.5+440.0, -13.0f);
    glVertex2f(-250.0f+14.5+440.0, -13.0f);
    glVertex2f(-250.0f+14.5+440.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///46th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+450.0, 8.0f);
    glVertex2f(-250.0+12.5+450.0, -13.0f);
    glVertex2f(-250.0f+14.5+450.0, -13.0f);
    glVertex2f(-250.0f+14.5+450.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///47th rail plate ta
    glColor3ub(128,128,128);
    glVertex2f(-250.0+12.5+460.0, 8.0f);
    glVertex2f(-250.0+12.5+460.0, -13.0f);
    glVertex2f(-250.0f+14.5+460.0, -13.0f);
    glVertex2f(-250.0f+14.5+460.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///48th rail plate ta
    glColor3ub(128,128,128);
    glVertex2f(-250.0+12.5+470.0, 8.0f);
    glVertex2f(-250.0+12.5+470.0, -13.0f);
    glVertex2f(-250.0f+14.5+470.0, -13.0f);
    glVertex2f(-250.0f+14.5+470.0, 8.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///49th rail plate ta
    glColor3ub(128, 128, 128);
    glVertex2f(-250.0+12.5+480.0, 8.0f);
    glVertex2f(-250.0+12.5+480.0, -13.0f);
    glVertex2f(-250.0f+14.5+480.0, -13.0f);
    glVertex2f(-250.0f+14.5+480.0, 8.0f);
    glEnd();
        ///-------------END OF RAIL PLATES----------------///
}

                       ///START OF TRAIN///
void Train()
{
    glBegin(GL_POLYGON);  ///Train er Engine er nicher body ta
    glColor3ub(255, 0, 0);
    glVertex2f(-212.5f+TrainPosition, -1.0f);
    glVertex2f(-225.0f+TrainPosition, -9.0f);
    glVertex2f(-112.5f+TrainPosition, -9.0f);
    glVertex2f(-112.5f+TrainPosition, -1.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///Train er Engine er uporer body ta
    glColor3ub(255, 0, 0);
    glVertex2f(-212.5f+TrainPosition, 7.0f);
    glVertex2f(-212.5f+TrainPosition, -1.0f);
    glVertex2f(-112.5f+TrainPosition, -1.0f);
    glVertex2f(-112.5f+TrainPosition, 7.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///Train er Engine er locopilot er place  ta
    glColor3ub(255, 0, 0);
    glVertex2f(-132.5f+TrainPosition, 22.0f);
    glVertex2f(-135.5f+TrainPosition, 7.0f);
    glVertex2f(-112.5f+TrainPosition, 7.0f);
    glVertex2f(-112.5+TrainPosition, 22.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///Train er Engine er chimni er stand ta
    glColor3ub(255, 0, 0);
    glVertex2f(-200.0f+TrainPosition, 17.0f);
    glVertex2f(-200.f+TrainPosition, 7.0f);
    glVertex2f(-192.5f+TrainPosition, 7.0f);
    glVertex2f(-192.5f+TrainPosition, 17.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///Train er Engine er chimni er exuast ta
    glColor3ub(255, 0, 0);
    glVertex2f(-212.5f+TrainPosition, 22.0f);
    glVertex2f(-212.5f+TrainPosition, 17.0f);
    glVertex2f(-180.0f+TrainPosition, 17.0f);
    glVertex2f(-180.0f+TrainPosition, 22.0f);
    glEnd();
                    ///----2nd ekta exaust dewar try kori///
                    ///---------2nd exaust//////
    glBegin(GL_POLYGON);  ///Train er Engine er chimni er stand ta
    glColor3ub(255, 0, 0);
    glVertex2f(-200.0+40.0+TrainPosition, 17.0f);
    glVertex2f(-200.+40.0+TrainPosition, 7.0f);
    glVertex2f(-192.5+40.0+TrainPosition, 7.0f);
    glVertex2f(-192.5+40.0+TrainPosition, 17.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///Train er Engine er chimni er exuast ta
    glColor3ub(255, 0, 0);
    glVertex2f(-212.5+40.0+TrainPosition, 22.0f);
    glVertex2f(-212.5+40.0+TrainPosition, 17.0f);
    glVertex2f(-180.0+40.0+TrainPosition, 17.0f);
    glVertex2f(-180.0+40.0+TrainPosition, 22.0f);
    glEnd();

    ///enginer er loco pilot er window///
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 128);
    glVertex2f(-132.5+5+TrainPosition, 20.0f);
    glVertex2f(-132.5+5+TrainPosition, 8.0f);
    glVertex2f(-132.5+15+TrainPosition, 8.0f);
    glVertex2f(-132.5+15+TrainPosition, 20.0f);
    glEnd();
    ///Chaka prottekta boggyr

  glLineWidth(1.0);
    circle(7, 0 - 200+TrainPosition, 0 - 6, 0, 1, 0);
    glEnd();

  glLineWidth(1.0);
    circle(7, 0 - 200+20+TrainPosition, 0 - 6, 0, 1, 0);
    glEnd();

  glLineWidth(1.0);
    circle(7, 0 - 200+50+TrainPosition, 0 - 6, 0, 1, 0);
    glEnd();

  glLineWidth(1.0);
    circle(7, 0 - 200+70+TrainPosition, 0 - 6, 0, 1, 0);
    glEnd();

    ///----------------------------------------TRAIN ER BOGGIE---------------------------------------------///

    glBegin(GL_POLYGON);  ///ENGINE & 1ST BOGGIER CONNECTION
    glColor3ub(223, 255, 0);
    glVertex2f(-112.5f+TrainPosition, -5.0f);
    glVertex2f(-112.5f+TrainPosition, -9.0f);
    glVertex2f(-100.0f+TrainPosition, -9.0f);
    glVertex2f(-100.0f+TrainPosition, -5.0f);
    glEnd();
///START OF 1ST BOGGIE///

    glBegin(GL_POLYGON);  ///BOGGY R WHOLE BODY TA
    glColor3ub(205, 127, 50);
    glVertex2f(-100.0f+TrainPosition, 17.0f);
    glVertex2f(-100.0f+TrainPosition, -9.0f);
    glVertex2f(0.0f+TrainPosition, -9.0f);
    glVertex2f(0.0f+TrainPosition, 17.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///BOGGY R DOOR TA
    glColor3ub(54, 69, 79);
    glVertex2f(-100.0f+TrainPosition, 14.0f);
    glVertex2f(-100.0f+TrainPosition, -9.0f);
    glVertex2f(-95.0f+TrainPosition, -9.0f);
    glVertex2f(-95.0f+TrainPosition, 14.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///BOGGY R 1ST WINDOW TA
    glColor3ub(223, 255, 0);
    glVertex2f(-90.0f+TrainPosition, 14.0f);
    glVertex2f(-90.0f+TrainPosition, 2.0f);
    glVertex2f(-80.0f+TrainPosition, 2.0f);
    glVertex2f(-80.0f+TrainPosition, 14.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///BOGGY R 2nd WINDOW TA
    glColor3ub(223, 255, 0);
    glVertex2f(-90.0+20+TrainPosition, 14.0f);
    glVertex2f(-90.0+20+TrainPosition, 2.0f);
    glVertex2f(-80.0+20+TrainPosition, 2.0f);
    glVertex2f(-80.0+20+TrainPosition, 14.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///BOGGY R 3rd WINDOW TA
    glColor3ub(223, 255, 0);
    glVertex2f(-90.0+40+TrainPosition, 14.0f);
    glVertex2f(-90.0+40+TrainPosition, 2.0f);
    glVertex2f(-80.0+40+TrainPosition, 2.0f);
    glVertex2f(-80.0+40+TrainPosition, 14.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///BOGGY R 4th WINDOW TA
    glColor3ub(223, 255, 0);
    glVertex2f(-90.0+60+TrainPosition, 14.0f);
    glVertex2f(-90.0+60+TrainPosition, 2.0f);
    glVertex2f(-80.0+60+TrainPosition, 2.0f);
    glVertex2f(-80.0+60+TrainPosition, 14.0f);
    glEnd();


    glBegin(GL_POLYGON);  ///BOGGY 2nd  DOOR TA
    glColor3ub(54, 69, 79);
    glVertex2f(-100.0+94+TrainPosition, 14.0f);
    glVertex2f(-100.0+94+TrainPosition, -9.0f);
    glVertex2f(-95.0+94+TrainPosition, -9.0f);
    glVertex2f(-95.0+94+TrainPosition, 14.0f);
    glEnd();

    glLineWidth(1.0);
      circle(4, 0 - 80+TrainPosition, 0 - 9, 0, 1, 0);
      glEnd();

    glLineWidth(1.0);
      circle(4, 0 - 60+TrainPosition, 0 - 9, 0, 1, 0);
      glEnd();

    glLineWidth(1.0);
      circle(4, 0 - 80+50+TrainPosition, 0 - 9, 0, 1, 0);
      glEnd();

    glLineWidth(1.0);
        circle(4, 0 - 60+50+TrainPosition, 0 - 9, 0, 1, 0);
      glEnd();
///-------------------------2nd boogie----------------------------///
 glBegin(GL_POLYGON);  ///ENGINE & 1ST BOGGIER CONNECTION
    glColor3ub(223, 255, 0);
    glVertex2f(-112.5+112+TrainPosition, -5.0f);
    glVertex2f(-112.5+112+TrainPosition, -9.0f);
    glVertex2f(-100.0+112+TrainPosition, -9.0f);
    glVertex2f(-100.0+112+TrainPosition, -5.0f);
    glEnd();

///START OF 2nd BOGGIE///

    glBegin(GL_POLYGON);  ///BOGGY R WHOLE BODY TA
    glColor3ub(205, 127, 50);
    glVertex2f(-100.0+112+TrainPosition, 17.0f);
    glVertex2f(-100.0+112+TrainPosition, -9.0f);
    glVertex2f(0.0+112+TrainPosition, -9.0f);
    glVertex2f(0.0+112+TrainPosition, 17.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///BOGGY R DOOR TA
    glColor3ub(54, 69, 79);
    glVertex2f(-100.0+112+TrainPosition, 14.0f);
    glVertex2f(-100.0+112+TrainPosition, -9.0f);
    glVertex2f(-95.0+112+TrainPosition, -9.0f);
    glVertex2f(-95.0+112+TrainPosition, 14.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///BOGGY R 1ST WINDOW TA
    glColor3ub(223, 255, 0);
    glVertex2f(-90.0+112+TrainPosition, 14.0f);
    glVertex2f(-90.0+112+TrainPosition, 2.0f);
    glVertex2f(-80.0+112+TrainPosition, 2.0f);
    glVertex2f(-80.0+112+TrainPosition, 14.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///BOGGY R 2nd WINDOW TA
    glColor3ub(223, 255, 0);
    glVertex2f(-90.0+20+112+TrainPosition, 14.0f);
    glVertex2f(-90.0+20+112+TrainPosition, 2.0f);
    glVertex2f(-80.0+20+112+TrainPosition, 2.0f);
    glVertex2f(-80.0+20+112+TrainPosition, 14.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///BOGGY R 3rd WINDOW TA
    glColor3ub(223, 255, 0);
    glVertex2f(-90.0+40+112+TrainPosition, 14.0f);
    glVertex2f(-90.0+40+112+TrainPosition, 2.0f);
    glVertex2f(-80.0+40+112+TrainPosition, 2.0f);
    glVertex2f(-80.0+40+112+TrainPosition, 14.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///BOGGY R 4th WINDOW TA
    glColor3ub(223, 255, 0);
    glVertex2f(-90.0+60+112+TrainPosition, 14.0f);
    glVertex2f(-90.0+60+112+TrainPosition, 2.0f);
    glVertex2f(-80.0+60+112+TrainPosition, 2.0f);
    glVertex2f(-80.0+60+112+TrainPosition, 14.0f);
    glEnd();


    glBegin(GL_POLYGON);  ///BOGGY 2nd  DOOR TA
    glColor3ub(54, 69, 79);
    glVertex2f(-100.0+94+112+TrainPosition, 14.0f);
    glVertex2f(-100.0+94+112+TrainPosition, -9.0f);
    glVertex2f(-95.0+94+112+TrainPosition, -9.0f);
    glVertex2f(-95.0+94+112+TrainPosition, 14.0f);
    glEnd();

    glLineWidth(1.0);
    circle(4, 0 - 80+112+TrainPosition, 0 - 9, 0, 1, 0);
    glEnd();

    glLineWidth(1.0);
    circle(4, 0 - 60+112+TrainPosition, 0 - 9, 0, 1, 0);
    glEnd();

    glLineWidth(1.0);
    circle(4, 0 - 80+50+112+TrainPosition, 0 - 9, 0, 1, 0);
    glEnd();

    glLineWidth(1.0);
    circle(4, 0 - 60+50+112+TrainPosition, 0 - 9, 0, 1, 0);
    glEnd();


    ///-------------------------3rd boogie----------------------------///
    glBegin(GL_POLYGON);  ///2nd & 3ST BOGGIER CONNECTION
    glColor3ub(223, 255, 0);
    glVertex2f(-112.5+224+TrainPosition, -5.0f);
    glVertex2f(-112.5+224+TrainPosition, -9.0f);
    glVertex2f(-100.0+224+TrainPosition, -9.0f);
    glVertex2f(-100.0+224+TrainPosition, -5.0f);
    glEnd();

///START OF 3rd BOGGIE///

    glBegin(GL_POLYGON);  ///BOGGY R WHOLE BODY TA
    glColor3ub(205, 127, 50);
    glVertex2f(-100.0+224+TrainPosition, 17.0f);
    glVertex2f(-100.0+224+TrainPosition, -9.0f);
    glVertex2f(0.0+224+TrainPosition, -9.0f);
    glVertex2f(0.0+224+TrainPosition, 17.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///BOGGY R DOOR TA
    glColor3ub(54, 69, 79);
    glVertex2f(-100.0+224+TrainPosition, 14.0f);
    glVertex2f(-100.0+224+TrainPosition, -9.0f);
    glVertex2f(-95.0+224+TrainPosition, -9.0f);
    glVertex2f(-95.0+224+TrainPosition, 14.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///BOGGY R 1ST WINDOW TA
    glColor3ub(223, 255, 0);
    glVertex2f(-90.0+224+TrainPosition, 14.0f);
    glVertex2f(-90.0+224+TrainPosition, 2.0f);
    glVertex2f(-80.0+224+TrainPosition, 2.0f);
    glVertex2f(-80.0+224+TrainPosition, 14.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///BOGGY R 2nd WINDOW TA
    glColor3ub(223, 255, 0);
    glVertex2f(-90.0+20+224+TrainPosition, 14.0f);
    glVertex2f(-90.0+20+224+TrainPosition, 2.0f);
    glVertex2f(-80.0+20+224+TrainPosition, 2.0f);
    glVertex2f(-80.0+20+224+TrainPosition, 14.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///BOGGY R 3rd WINDOW TA
    glColor3ub(223, 255, 0);
    glVertex2f(-90.0+40+224+TrainPosition, 14.0f);
    glVertex2f(-90.0+40+224+TrainPosition, 2.0f);
    glVertex2f(-80.0+40+224+TrainPosition, 2.0f);
    glVertex2f(-80.0+40+224+TrainPosition, 14.0f);
    glEnd();

    glBegin(GL_POLYGON);  ///BOGGY R 4th WINDOW TA
    glColor3ub(223, 255, 0);
    glVertex2f(-90.0+60+224+TrainPosition, 14.0f);
    glVertex2f(-90.0+60+224+TrainPosition, 2.0f);
    glVertex2f(-80.0+60+224+TrainPosition, 2.0f);
    glVertex2f(-80.0+60+224+TrainPosition, 14.0f);
    glEnd();


    glBegin(GL_POLYGON);  ///BOGGY 2nd  DOOR TA
    glColor3ub(54, 69, 79);
    glVertex2f(-100.0+94+224+TrainPosition, 14.0f);
    glVertex2f(-100.0+94+224+TrainPosition, -9.0f);
    glVertex2f(-95.0+94+224+TrainPosition, -9.0f);
    glVertex2f(-95.0+94+224+TrainPosition, 14.0f);
    glEnd();

    glLineWidth(1.0);
    circle(4, 0 - 80+224+TrainPosition, 0 - 9, 0, 1, 0);
    glEnd();

    glLineWidth(1.0);
    circle(4, 0 - 60+224+TrainPosition, 0 - 9, 0, 1, 0);
    glEnd();

    glLineWidth(1.0);
    circle(4, 0 - 80+50+224+TrainPosition, 0 - 9, 0, 1, 0);
    glEnd();

    glLineWidth(1.0);
    circle(4, 0 - 60+50+224+TrainPosition, 0 - 9, 0, 1, 0);
    glEnd();

}

///Car drawing plus update



void bottomWater()
{
    glBegin(GL_POLYGON);
    glColor3ub(50, 10, 200);
    glVertex2d(-351.437, -177.841);///field side water(left)
    glVertex2d(380, -160);
    glVertex2d(383, -421);
    glVertex2d(-357, -440);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(50,10,200);
    glVertex2d(-264.7731874627064, -118.3723150143715);///water
    glVertex2d(-116.951687704982, -118.8785530272404);
    glVertex2d(30.3635740398735, -113.8161728985509);
    glVertex2d(262.7268219467073, -135.5844074519157);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(50,10,200);
    glVertex2d(262.7268219467073, -135.5844074519157);
    glVertex2d(30.3635740398735, -113.8161728985509);///water
    glVertex2d(96.6807537257018, -85.4668441778898);
    glVertex2d(223.2797350685291, -89.1168636296808);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(50,10,200);
    glVertex2d(223.2797350685291, -89.1168636296808);
    glVertex2d(262.7268219467073, -135.5844074519157);///water
    glVertex2d(251.0833476507222, -90.5292243065794);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(50,10,200);
    glVertex2d(-264.7731874627064, -118.3723150143715);
    glVertex2d(-260.6575419097897, -222.8939398266786);
    glVertex2d(274.0543808821279, -221.3425512692552);
    glVertex2d(262.7268219467073, -135.5844074519157);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(50,10,200); ///water
    glVertex2d(-264.7731874627064, -118.3723150143715);
    glVertex2d(-267.1366308902087, -69.9645085050009);
    glVertex2d(96.6807537257018, -85.4668441778898);
    glVertex2d(30.3635740398735, -113.8161728985509);
    glVertex2d(-116.951687704982, -118.8785530272404);
    glEnd();

    glBegin(GL_POLYGON);       ///water
    glColor3ub(50,10,200);
    glVertex2d(-267.4580703444542, -58.4785649391275);
    glVertex2d(278.0562838463146, -51.5733199493708);
    glVertex2d(272.2133842395975, -92.4736171963911);
    glVertex2d(-267.989243035974, -93.5359625794306);
    glEnd();

    glPushMatrix();
    glTranslatef(0.0f, -20.0f, 0.0f);
    glBegin(GL_POLYGON); ///left side green field
    glColor3ub(4, 163, 109);
    glVertex2d(-98.7066956909817, -220.5920676373962);
    glVertex2d(-27.0448965409153, -193.0375675643704);
    glVertex2d(-27.2739362416673, -186.0476558929218);
    glVertex2d(-143.3616308240682, -164.4363925473835);
    glVertex2d(-263.9634603692005, -176.751774464268);
    glVertex2d(-260.6575419097897, -222.8939398266786);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0f, -20.0f, 0.0f);
    glBegin(GL_POLYGON); ///Right side green field
    glColor3ub(4, 163, 109);
    glVertex2d(238.628047813862, -160.9810840169561);
    glVertex2d(239.9440614054583, -193.5524204089666);
    glVertex2d(269.8833706142746, -193.2234170110675);
    glVertex2d(272.1863943995681, -155.7170296505706);
    glEnd();
    glPopMatrix();


}




void Dam(){
    glPushMatrix();
    glTranslatef(0.0f, -20.0f, 0.0f);
    glLineWidth(1.0f);
    glBegin(GL_POLYGON);
    glColor3ub(190,193,194);
    glVertex2d(-27.1666718798071, -152.1819363088338);   /// damp start
    glVertex2d(-0.9646333744666, -152.1819363088338);
    glVertex2d(-0.9646333744666, -193.0375675643704);
    glVertex2d(-27.1666718798071, -193.0375675643704);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(190,193,194);
    glVertex2d(-27.2739362416673, -193.0375675643704);
    glVertex2d(-27.2739362416673, -156.0476558929218);
    glVertex2d(-4.5990058672194, -156.0476558929218);
    glVertex2d(-4.5990058672194, -193.0375675643704);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(190,193,194);
    glVertex2d(220.2798526780983, -163.0405128579182);
    glVertex2d(220.2798526780983, -192.2678481310322);
    glVertex2d(-1.1856058045213, -192.2678481310322);
    glVertex2d(-1.1856058045213, -163.0405128579182);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub(0,0,0);
    glVertex2d(-27.1666718798071, -152.1819363088338);
    glVertex2d(-0.9646333744666, -152.1819363088338);
    glVertex2d(-0.9646333744666, -193.0375675643704);
    glVertex2d(-27.1666718798071, -193.0375675643704);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub(0,0,0);
    glVertex2d(-27.2739362416673, -193.0375675643704);
    glVertex2d(-27.2739362416673, -156.0476558929218);
    glVertex2d(-4.5990058672194, -156.0476558929218);
    glVertex2d(-4.5990058672194, -193.0375675643704);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub(0,0,0);
    glVertex2d(220.2798526780983, -163.0405128579182);
    glVertex2d(220.2798526780983, -192.2678481310322);
    glVertex2d(-1.1856058045213, -192.2678481310322);
    glVertex2d(-1.1856058045213, -163.0405128579182);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(69,73,74);
    glVertex2d(0.15581102524, -173.625035189408);
    glVertex2d(-0.1092029317918, -191.403266380433); /// 1st gate
    glVertex2d(30, -191.403266380433);
    glVertex2d(30, -173.625035189408);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(69,73,74);
    glVertex2d(44.0083056919183, -170.6361077140273);
    glVertex2d(44.0083056919183, -191.9506726337237); /// 2nd gate
    glVertex2d(82.9818211996691, -191.9506726337237);
    glVertex2d(82.9818211996691,  -170.6361077140273);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(69,73,74);
    glVertex2d(97.8253485369383, -171.2583182745534);
    glVertex2d(97.8253485369383, -192.4240742613158); /// 3rd gate
    glVertex2d(136.5224008940422, -192.4240742613158);
    glVertex2d(136.5224008940422, -171.2583182745534);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(69,73,74);
    glVertex2d(189.2120848200563, -191.9722367735132);
    glVertex2d(220.0297577682238, -191.9722367735132); ///  5 th gate
    glVertex2d(220.0297577682238, -171.3183299199422);
    glVertex2d(189.2120848200563, -171.3183299199422);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(69,73,74);
    glVertex2d(150, -171.3575789154703);
    glVertex2d(150, -193.0929569457987);               /// 4th gate
    glVertex2d(180.1342536287921,-193.0929569457987);
    glVertex2d(180.1342536287921, -171.3575789154703);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(190,193,194);
    glVertex2d(220.0297577682238, -192.9722367735132);
    glVertex2d(220.8051241445567, -154.5036587337719);
    glVertex2d(246.2233908902558, -154.5036587337719);
    glVertex2d(246.2233908902558, -192.9722367735132);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(190,193,194);
    glVertex2d(27.4980993268286, -146.1141125228103);
    glVertex2d(24.464854741247, -164.7076402831049);
    glVertex2d(50.6048235425854, -164.7076402831049);
    glVertex2d(47.6691652048787, -146.1141125228103);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(190,193,194);
    glVertex2d(81.874784138625, -145.9845559980693);
    glVertex2d(78.6382433719411, -164.4316823845155);
    glVertex2d(104.5305695054118, -164.4316823845155);
    glVertex2d(101.8824906963068, -146.7201334450429);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(190,193,194);
    glVertex2d(134.5421293419346, -145.9845559980693);
    glVertex2d(132.0172207705361, -164.9357308850112);
    glVertex2d(158.3283379925005, -164.397329432765);
    glVertex2d(155.28541334659, -146.1316714874641);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(190,193,194);
    glVertex2d(185.0231120772579, -147.7789926078262);
    glVertex2d(180.0047468111408, -163.8377614594018);
    glVertex2d(206.6389555884394, -163.9037923972753);
    glVertex2d(204.0335634217245, -147.8372073691997);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub(0,0,0);
    glVertex2d(220.0297577682238, -192.9722367735132);
    glVertex2d(220.8051241445567, -154.5036587337719);
    glVertex2d(246.2233908902558, -154.5036587337719);
    glVertex2d(246.2233908902558, -192.9722367735132);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub(0,0,0);
    glVertex2d(27.4980993268286, -145.9247128432042);
    glVertex2d(24.464854741247, -164.3098870199897);
    glVertex2d(50.6048235425854, -164.7076402831049);
    glVertex2d(47.6691652048787, -146.1141125228103);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub(0,0,0);
    glVertex2d(81.874784138625, -145.9845559980693);
    glVertex2d(78.6382433719411, -164.4316823845155);
    glVertex2d(104.5305695054118, -164.4316823845155);
    glVertex2d(101.8824906963068, -146.7201334450429);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub(0,0,0);
    glVertex2d(134.5421293419346, -145.9845559980693);
    glVertex2d(132.0172207705361, -164.9357308850112);
    glVertex2d(158.3283379925005, -164.397329432765);
    glVertex2d(155.28541334659, -146.1316714874641);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub(0,0,0);
    glVertex2d(185.0231120772579, -147.7789926078262);
    glVertex2d(180.0047468111408, -163.8377614594018);
    glVertex2d(206.6389555884394, -163.9037923972753);
    glVertex2d(204.0335634217245, -147.8372073691997);
    glEnd();
    glPopMatrix();
}








void display() {
    glClearColor(0.7f, 0.7f, 0.65f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    sky();
    glPushMatrix();
    glTranslatef(0, moveSun, 0);
    //sun();
    glPopMatrix();
    //grass();
    //road();
    //road_divider();
    //car1();
    //car2();
    //car3();
    //car4();
    //car5();
    Railline();
    Train();
    //mountainRange();
    //bottomWater();
    //bridgeBottom();
    //Dam();
    glPushMatrix();
    glTranslatef(boat1Position, 0, 0);
    //DamSideBoat1();
    glPopMatrix();
    //Hill();
    glFlush();

}
void DamSideBoat1(){


    glBegin(GL_POLYGON);                          ///boat
    glColor3ub(230,230,230);
    glVertex2d(-235.4213957892349, -162.945880839417);
    glVertex2d(-203.5175412835598, -164.5050917739049);
    glVertex2d(-202.9178447702952, -159.9473982730942);
    glVertex2d(-236.2609709078052, -159.3477017598296);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(230,230,230);
    glVertex2d(-202.9178447702952, -159.9473982730942);
    glVertex2d(-203.5175412835598, -164.5050917739049);
    glVertex2d(-181.088891687465, -164.6250310765578);
    glVertex2d(-180.7546651571983, -159.2529960332689);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(230,230,230);
    glVertex2d(-180.7546651571983, -159.2529960332689);
    glVertex2d(-181.088891687465, -164.6250310765578);
    glVertex2d(-159.1399993019817, -163.5455773526816);
    glVertex2d(-152.7832162613773, -157.6685515226888);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(230,230,230);
    glVertex2d(-236.2609709078052, -159.3477017598296);
    glVertex2d(-202.9178447702952, -159.9473982730942);
    glVertex2d(-202.9088371819358, -152.3587962583406);
    glVertex2d(-235.7165351159443, -151.895005601404);
    glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(230,230,230);
   glVertex2d(-202.9088371819358, -152.3587962583406);
   glVertex2d(-202.9178447702952, -159.9473982730942);
   glVertex2d(-180.7546651571983, -159.2529960332689);
   glVertex2d(-180.8885206675883, -152.1460889282279);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(230,230,230);
   glVertex2d(-180.8885206675883, -152.1460889282279);
   glVertex2d(-180.7546651571983, -159.2529960332689);
   glVertex2d(-152.7832162613773, -157.6685515226888);
   glVertex2d(-150, -150);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(230,230,230);
   glVertex2d(-150, -150);
   glVertex2d(-152.7832162613773, -157.6685515226888);
   glVertex2d(-149.1123797364638, -155.8334801920992);
   glEnd();
                                                 ///upp er part
   glLineWidth(3.0f);
   glBegin(GL_LINE_LOOP);
   glColor3ub(200,116,19);
   glVertex2d(-233.4474230097333, -146.1409232547557);
   glVertex2d(-234.2041226537694, -144.173504180262);
   glVertex2d(-163.4860002181131, -142.230414027283);
   glVertex2d(-163.4860002181131, -142.230414027283);
   glEnd();

   glBegin(GL_LINES);
   glColor3ub(0,0,0);
   glVertex2d(-233.4474230097333, -146.1409232547557);
   glVertex2d(-235.7165351159443, -151.895005601404);
   glEnd();

   glBegin(GL_LINES);
   glColor3ub(0,0,0);
   glVertex2d(-223.6859976016684, -146.2165932191593);
   glVertex2d(-224.8210470677225, -151.8918405494297);
   glEnd();


   glBegin(GL_LINES);
   glColor3ub(0,0,0);
   glVertex2d(-211.6544732614954, -145.4598935751233);
   glVertex2d(-212.3675447218886, -151.8859070878713);
   glEnd();

   glBegin(GL_LINES);
   glColor3ub(0,0,0);
   glVertex2d(-198.7149093484791, -144.55185400228);
   glVertex2d(-199.2445990993043, -152.0431804782369);
   glEnd();

   glBegin(GL_LINES);
   glColor3ub(0,0,0);
   glVertex2d(-184.7916358982159, -144.0978342158584);
   glVertex2d(-187.8727809810566, -152.079440691704);
   glEnd();

   glBegin(GL_LINES);
   glColor3ub(0,0,0);
   glVertex2d(-169.4306331242843, -143.1897946430152);
   glVertex2d(-168.5225935514411, -151.5891606918153);
   glEnd();

   glBegin(GL_LINES);
   glColor3ub(0,0,0);
   glVertex2d(-163.4860002181131, -142.230414027283);
   glVertex2d(-162.9230161855743, -149.6974115817252);
   glEnd();

}
void updateBoats(int value) {
    boat1Position += boatSpeed;
    if (boat1Position > 500.0f) {
        boat1Position = -600.0f;
    }
    glutPostRedisplay();
    glutTimerFunc(16, updateBoats, 0);
}
void road(){
    glBegin(GL_POLYGON);
    glColor3b(0, 0, 0);
    glVertex2f(-250.0f, -15.0f);
    glVertex2f(-250.0f, -55.0f);
    glVertex2f(250.0f, -55.0f);
    glVertex2f(250.0f, -15.0f);
    glEnd();
}

void car1()
{
    glBegin(GL_POLYGON);
    glColor3ub(223, 255, 0);
    glVertex2f(-220.0f + car1Position, -31.0f);
    glVertex2f(-225.0f + car1Position, -43.0f);
    glVertex2f(-167.5f + car1Position, -43.0f);
    glVertex2f(-175.0f + car1Position, -31.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 255);
    glVertex2f(-203.0f + car1Position, -23.0f);
    glVertex2f(-208.75f + car1Position, -31.0f);
    glVertex2f(-183.5f + car1Position, -31.0f);
    glVertex2f(-188.0f + car1Position, -23.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 191, 0);
    glVertex2f(-198.0f + car1Position, -23.0f);
    glVertex2f(-198.0f + car1Position, -31.0f);
    glVertex2f(-195.5f + car1Position, -31.0f);
    glVertex2f(-195.5f + car1Position, -23.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-208.0f + car1Position, -31.0f);
    glVertex2f(-183.0f + car1Position, -31.0f);
    glEnd();

    glLineWidth(1.0);
    circle(3.5, 0 - 215 + car1Position, 0 - 43, 0, 1, 1);
    glEnd();

    glLineWidth(1.0);
    circle(3.5, 0 - 182 + car1Position, 0 - 43, 0, 1, 1);
    glEnd();
}

void car2() 
{
    glBegin(GL_POLYGON);
    glColor3ub( 243, 156, 18 );
    glVertex2f(-220.0+100.0+car2Position, -31.0);
    glVertex2f(-225.0+100.0+car2Position, -43.0);
    glVertex2f(-167.5+100+car2Position, -43.0f);
    glVertex2f(-175.0+100+car2Position, -31.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(46, 204, 113);
    glVertex2f(-203.0+100.0+car2Position, -23.0);
    glVertex2f(-208.75+100.0+car2Position, -31.0);
    glVertex2f(-183.5+100.0+car2Position, -31.0);
    glVertex2f(-188.0+100.0+car2Position, -23.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,191,0);
    glVertex2f(-198.0+100.0+car2Position, -23.0);
    glVertex2f(-198.0+100.0+car2Position, -31.0);
    glVertex2f(-195.5+100.0+car2Position, -31.0);
    glVertex2f(-195.5+100.0+car2Position, -23.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f, 0.0f);
    glVertex2f(-208.0+100.0+car2Position,-31.0f);
    glVertex2f(-183.0+100.0+car2Position, -31.0f);
    glEnd();

    glLineWidth(1.0);
    circle(3.5,0-112.5+car2Position,0-43,0,1,1);
    glEnd();

    glLineWidth(1.0);
    circle(3.5,0-80+car2Position,0-43,0,1,1);
    glEnd();
}

void car3() 
{
    glBegin(GL_POLYGON);///1st car er body part ta
    glColor3ub(  52, 152, 219);
    glVertex2f(-220.0+200.0+car3Position, -31.0);
    glVertex2f(-225.0+200.0+car3Position, -43.0);
    glVertex2f(-167.5+200.0+car3Position, -43.0f);
    glVertex2f(-175.0+200.0+car3Position, -31.0f);
    glEnd();

    glBegin(GL_POLYGON);///1st car er body r upoere part ta
    glColor3ub(233,6,237);
    glVertex2f(-203.0+200.0+car3Position, -23.0);
    glVertex2f(-208.75+200.0+car3Position, -31.0);
    glVertex2f(-183.5+200.0+car3Position, -31.0);
    glVertex2f(-188.0+200.0+car3Position, -23.0);
    glEnd();

    glBegin(GL_POLYGON);///1st car er body r 2 ta window r diveder part ta
    glColor3ub(255,191,0);
    glVertex2f(-198.0+200.0+car3Position, -23.0);
    glVertex2f(-198.0+200.0+car3Position, -31.0);
    glVertex2f(-195.5+200.0+car3Position, -31.0);
    glVertex2f(-195.5+200.0+car3Position, -23.0);
    glEnd();

    glBegin(GL_LINES);///Divider part  body and the passenger seat
    glColor3f(0.0f,0.0f, 0.0f);
    glVertex2f(-208.0+200.0+car3Position,-31.0f);
    glVertex2f(183.0+200.0+car3Position, -31.0f);
    glEnd();

    glLineWidth(1.0);
    circle(3.5,0-8+car3Position,0-43,0,1,1);
    glEnd();

    glLineWidth(1.0);
    circle(3.5,0+17+car3Position,0-43,0,1,1);
    glEnd();
}

void car4() 
{
    glBegin(GL_POLYGON);   ///1st car er body part ta
    glColor3ub( 239, 108, 0 );
    glVertex2f(-220.0+300.0+car4Position, -31.0);
    glVertex2f(-225.0+300.0+car4Position, -43.0);
    glVertex2f(-167.5+300.0+car4Position, -43.0f);
    glVertex2f(-175.0+300.0+car4Position, -31.0f);
    glEnd();

    glBegin(GL_POLYGON);   ///1st car er body r upoere part ta
    glColor3ub(0, 137, 123);
    glVertex2f(-203.0+300.0+car4Position, -23.0);
    glVertex2f(-208.75+300.0+car4Position, -31.0);
    glVertex2f(-183.5+300.0+car4Position, -31.0);
    glVertex2f(-188.0+300.0+car4Position, -23.0);
    glEnd();

    glBegin(GL_POLYGON);   ///1st car er body r 2 ta window r diveder part ta
    glColor3ub(255,191,0);
    glVertex2f(-198.0+300.0+car4Position, -23.0);
    glVertex2f(-198.0+300.0+car4Position, -31.0);
    glVertex2f(-195.5+300.0+car4Position, -31.0);
    glVertex2f(-195.5+300.0+car4Position, -23.0);
    glEnd();

    glBegin(GL_LINES); ///Divider part between body and the passenger seat
    glColor3f(0.0f,0.0f, 0.0f);
    glVertex2f(-208.0+300.0+car4Position,-31.0f);
    glVertex2f(-183.0+300.0+car4Position, -31.0f);
    glEnd();

    glLineWidth(1.0);
    circle(3.5,0+90+car4Position,0-43,0,1,1);
    glEnd();

    glLineWidth(1.0);
    circle(3.5,0+117+car4Position,0-43,0,1,1);
    glEnd();
}

void car5() {
    glBegin(GL_POLYGON); ///1st car er body part ta
    glColor3ub( 230, 74, 25 );
    glVertex2f(-220.0+400.0+car5Position, -31.0);
    glVertex2f(-225.0+400.0+car5Position, -43.0);
    glVertex2f(-167.5+400.0+car5Position, -43.0f);
    glVertex2f(-175.0+400.0+car5Position, -31.0f);
    glEnd();

    glBegin(GL_POLYGON);///1st car er body r upoere part ta
    glColor3ub(233,6,237);
    glVertex2f(-203.0+400.0+car5Position, -23.0);
    glVertex2f(-208.75+400.0+car5Position, -31.0);
    glVertex2f(-183.5+400.0+car5Position, -31.0);
    glVertex2f(-188.0+400.0+car5Position, -23.0);
    glEnd();

    glBegin(GL_POLYGON);   ///1st car er body r 2 ta window r diveder part ta
    glColor3ub( 255, 202, 40 );
    glVertex2f(-198.0+400.0+car5Position, -23.0);
    glVertex2f(-198.0+400.0+car5Position, -31.0);
    glVertex2f(-195.5+400.0+car5Position, -31.0);
    glVertex2f(-195.5+400.0+car5Position, -23.0);
    glEnd();

    glBegin(GL_LINES); ///Divider part between body and the passenger seat
    glColor3f(0.0f,0.0f, 0.0f);
    glVertex2f(-208.0+400.0+car5Position,-31.0f);
    glVertex2f(-183.0+400.0+car5Position, -31.0f);
    glEnd();

    glLineWidth(1.0);
    circle(3.5,0+188+car5Position,0-43,0,1,1);
    glEnd();

    glLineWidth(1.0);
    circle(3.5,0+218+car5Position,0-43,0,1,1);
    glEnd();
}

void road_divider() 
{
    ///Road er Divider gulo///
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-250.0f, -35.0f);
    glVertex2f( -230.0f, -35.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-250.0+30, -35.0f);
    glVertex2f( -230.0+30, -35.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-250.0+30+30, -35.0f);
    glVertex2f( -230.0+30+30, -35.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-250.0+30+30+30, -35.0f);
    glVertex2f( -230.0+30+30+30, -35.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-250.0+30+30+30+30, -35.0f);
    glVertex2f( -230.0+30+30+30+30, -35.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-250.0+30+30+30+30+30, -35.0f);
    glVertex2f( -230.0+30+30+30+30+30, -35.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-250.0+30+30+30+30+30+30, -35.0f);
    glVertex2f( -230.0+30+30+30+30+30+30, -35.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-250.0+30+30+30+30+30+30+30, -35.0f);
    glVertex2f( -230.0+30+30+30+30+30+30+30, -35.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-250.0+30+30+30+30+30+30+30+30, -35.0f);
    glVertex2f( -230.0+30+30+30+30+30+30+30+30, -35.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-250.0+30+30+30+30+30+30+30+30+30, -35.0f);
    glVertex2f( -230.0+30+30+30+30+30+30+30+30+30, -35.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-250.0+30+30+30+30+30+30+30+30+30+30, -35.0f);
    glVertex2f( -230.0+30+30+30+30+30+30+30+30+30+30, -35.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-250.0+30+30+30+30+30+30+30+30+30+30+30, -35.0f);
    glVertex2f( -230.0+30+30+30+30+30+30+30+30+30+30+30, -35.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-250.0+30+30+30+30+30+30+30+30+30+30+30+30, -35.0f);
    glVertex2f( -230.0+30+30+30+30+30+30+30+30+30+30+30+30, -35.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-250.0+30+30+30+30+30+30+30+30+30+30+30+30+30, -35.0f);
    glVertex2f( -230.0+30+30+30+30+30+30+30+30+30+30+30+30+30, -35.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-250.0+30+30+30+30+30+30+30+30+30+30+30+30+30+30, -35.0f);
    glVertex2f( -230.0+30+30+30+30+30+30+30+30+30+30+30+30+30+30, -35.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-250.0+30+30+30+30+30+30+30+30+30+30+30+30+30+30+30, -35.0f);
    glVertex2f( -230.0+30+30+30+30+30+30+30+30+30+30+30+30+30+30+30, -35.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-250.0+30+30+30+30+30+30+30+30+30+30+30+30+30+30+30+30, -35.0f);
    glVertex2f( -230.0+30+30+30+30+30+30+30+30+30+30+30+30+30+30+30+30, -35.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(254.0215876048553, -53.7260244223821);
    glVertex2f(253.999,-55.914);
    glVertex2f(253.999,-55.914);
    glVertex2f(27.993977,-56225);
    glEnd();

}

void update1(int value) {
    car1Position -= speed;
    if (car1Position < -450.0)
        car1Position = 600.0;
    glutPostRedisplay();
    glutTimerFunc(22, update1, 0);

}

void update2(int value) {
    car2Position -= speed;
    if (car2Position < -450.0)
        car2Position = 600.0;
    glutPostRedisplay();
    glutTimerFunc(22, update2, 0);
}

void update3(int value) {
    car3Position -= speed;
    if (car3Position < -450.0)
        car3Position = 600.0;
    glutPostRedisplay();
    glutTimerFunc(22, update3, 0);
}

void update4(int value) {
    car4Position -= speed;
    if (car4Position < -450.0)
        car4Position = 600.0;
    glutPostRedisplay();
    glutTimerFunc(22, update4, 0);
}

void update5(int value) {
    car5Position -= speed;
    if (car5Position < -450.0)
        car5Position = 600.0;
    glutPostRedisplay();
    glutTimerFunc(22, update5, 0);
}

void update6(int value) {
    TrainPosition -= speed;
    if (TrainPosition < -450.0)
        TrainPosition = 600.0;
      glutPostRedisplay();
      glutTimerFunc(22, update6, 0);
}

///update end


///mountain

void mountainRange()
{
    /// Mountain 1
    glBegin(GL_TRIANGLES);
    glColor3ub(46, 139, 87);
    glVertex2d(-290, 177);
    glColor3ub(240, 255, 255);
    glVertex2d(-250, 230);
    glColor3ub(60, 179, 113);
    glVertex2d(-210, 177);
    glEnd();

    /// Mountain 2
    glBegin(GL_TRIANGLES);
    glColor3ub(46, 139, 87);
    glVertex2d(-250, 177);
    glColor3ub(240, 248, 255);
    glVertex2d(-200, 250);
    glColor3ub(60, 179, 113);
    glVertex2d(-150, 177);
    glEnd();

    /// Mountain 3
    glBegin(GL_TRIANGLES);
    glColor3ub(46, 139, 87);
    glVertex2d(-200, 177);
    glColor3ub(255, 250, 250);
    glVertex2d(-140, 240);
    glColor3ub(60, 179, 113);
    glVertex2d(-80, 177);
    glEnd();

    // Mountain 4
    glBegin(GL_TRIANGLES);
    glColor3ub(34, 139, 34);
    glVertex2d(-140, 177);
    glColor3ub(255, 250, 240);
    glVertex2d(-90, 220);
    glColor3ub(50, 205, 50);
    glVertex2d(-40, 177);
    glEnd();

    /// Mountain 5
    glBegin(GL_TRIANGLES);
    glColor3ub(34, 139, 34);
    glVertex2d(-60, 177);
    glColor3ub(255, 250, 250);
    glVertex2d(-30, 200);
    glColor3ub(50, 205, 50);
    glVertex2d(0, 177);
    glEnd();


    /// Mountain 6
    glBegin(GL_TRIANGLES);
    glColor3ub(34, 139, 34);
    glVertex2d(10, 177);
    glColor3ub(250, 250, 240);
    glVertex2d(60, 230);
    glColor3ub(60, 179, 113);
    glVertex2d(110, 177);
    glEnd();

    /// Mountain 7
    glBegin(GL_TRIANGLES);
    glColor3ub(46, 139, 87);
    glVertex2d(70, 177);
    glColor3ub(240, 255, 255);
    glVertex2d(120, 240);
    glColor3ub(60, 179, 113);
    glVertex2d(170, 177);
    glEnd();

    /// Mountain 8
    glBegin(GL_TRIANGLES);
    glColor3ub(34, 139, 34);
    glVertex2d(150, 177);
    glColor3ub(255, 248, 255);
    glVertex2d(200, 220);
    glColor3ub(50, 205, 50);
    glVertex2d(250, 177);
    glEnd();


    glLineWidth(2);
    glBegin(GL_LINES); ///mountain range foot
    glColor3ub(178, 190, 181);
    glVertex2f(-250,177);
    glVertex2f(250,177);
    glEnd();

}


void bridgeBottom()
{
    glBegin(GL_POLYGON);
    glColor3ub(75,72,65);
    glVertex2d(-250.0, -55.0703544776414);
    glVertex2d(-250.0, -59.4839306081612);     ///bridze start
    glVertex2d(250.0, -59.4839306081612);
    glVertex2d(250.0, -55.0703544776414);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(75,72,65);
    glVertex2d(223.7282214356109, -59.5018951969224);
    glVertex2d(216.9380983370239, -59.6047758499313);
    glVertex2d(216.9380983370239, -101.986978474495);
    glVertex2d(223.7282214356109, -102.0115091002836);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(75,72,65);
    glVertex2d(137.2727885332615, -59.0437465852224);
    glVertex2d(144.3643833220563, -59.3331994337447);
    glVertex2d(144.3643833220563, -101.2421324632206);
    glVertex2d(137.2727885332615, -101.6278702468918);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(75,72,65);
    glVertex2d(57.0483656884231, -58.8205496100271);
    glVertex2d(64.2130304457471, -58.8205496100271);
    glVertex2d(64.2130304457471, -101.9511013408585);
    glVertex2d(57.0483656884231, -102.1654770137208);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(75,72,65);
    glVertex2d(-22.5205995647687, -59.2052712048955);
    glVertex2d(-15.7978878354038, -59.3056101859308);
    glVertex2d(-15.7978878354038, -101.447982220756);
    glVertex2d(-22.5205995647687, -101.7489991638619);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(75,72,65);
    glVertex2d(-103.6139444680056, -58.8214188352058);
    glVertex2d(-96.2422497976124, -59.2198888173892);
    glVertex2d(-96.2422497976124, -102.8801717077546);
    glVertex2d(-103.6139444680056, -103.0515868575662);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(75,72,65);
    glVertex2d(-182.8254905476807, -59.1679157059143);
    glVertex2d(-175.4400583344206, -59.1679157059143);
    glVertex2d(-175.4400583344206, -102.633000370839);
    glVertex2d(-182.8254905476807, -102.9962183485404);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(75,72,65);
    glVertex2d(-250.904128933695, -58.7420251531978);
    glVertex2d(-251.1556724215593, -85.0216772916636);
    glVertex2d(-243.8738347494691, -77.83440893999);
    glVertex2d(-243.8719108393836, -57.8097960006341);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(75,72,65);
    glVertex2d(-243.8719108393836, -57.8097960006341);
    glVertex2d(-243.8738347494691, -77.83440893999);
    glVertex2d(-231.6732839444029, -70.3645822764389);
    glVertex2d(-231.8190984084969, -58.0946547709325);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(75,72,65);
    glVertex2d(-231.8190984084969, -58.0946547709325);
    glVertex2d(-231.6732839444029, -70.3645822764389);
    glVertex2d(-218.7294563877491, -68.0527182658673);
    glVertex2d(-218.7294563877491, -58.0527182658673);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(75,72,65);
    glVertex2d(-218.9554697754316, -58.0527182658673);
    glVertex2d(-218.9554697754316, -68.7496217470457);
    glVertex2d(-206.3718355918607, -70.2371786244151);
    glVertex2d(-206.3718355918607, -58.2956405311005);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(75,72,65);
    glVertex2d(-206.3718355918607, -70.2371786244151);
    glVertex2d(-206.3718355918607, -58.2956405311005);
    glVertex2d(-193.9872795078397, -58.8732739185333);
    glVertex2d(-193.9872795078397, -77.127545989966);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(75,72,65);
    glVertex2d(-193.9872795078397, -58.8732739185333);
    glVertex2d(-193.9872795078397, -77.127545989966);
    glVertex2d(-183.1283006144331, -89.2775930305639);
    glVertex2d(-183.1283006144331, -59.1679157059143);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(75,72,65);
    glVertex2d(-175.4400583344206, -59.1679157059143);
    glVertex2d(-175.4400583344206, -89.0806390519555);
    glVertex2d(-164.9900297472752, -77.102972022518);
    glVertex2d(-164.9900297472752, -58.6502408629151);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(75,72,65);
    glVertex2d(-164.9900297472752, -58.6502408629151);
    glVertex2d(-164.9900297472752, -77.102972022518);
    glVertex2d(-152.4298412922969, -70.6101210760274);
    glVertex2d(-152.4298412922969, -57.6815887412231);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(75,72,65);
    glVertex2d(-152.4298412922969, -57.6815887412231);
    glVertex2d(-152.4298412922969, -70.6101210760274);
    glVertex2d(-139.444139399316, -68.0851234857255);
    glVertex2d(-139.444139399316, -58.0690495898999);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(75,72,65);
    glVertex2d(-139.444139399316, -68.0851234857255);
    glVertex2d(-139.444139399316, -58.0690495898999);
    glVertex2d(-126.6989134673161, -58.0690495898999);
    glVertex2d(-126.6989134673161, -70.0089311735745);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(75,72,65);
    glVertex2d(-126.6989134673161, -58.7815526557368);
    glVertex2d(-126.6989134673161, -70.0089311735745);
    glVertex2d(-114.3334966341798, -75.6601162566312);
    glVertex2d(-114.3334966341798, -58.3585761003017);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(75,72,65);
    glVertex2d(-114.3334966341798, -58.3585761003017);
    glVertex2d(-114.3334966341798, -75.6601162566312);
    glVertex2d(-103.3837548076629, -86.063540481304);
    glVertex2d(-103.3837548076629, -57.4878583168847);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(75,72,65);
    glVertex2d(-96.1290051447911, -57.6815887412231);
    glVertex2d(-96.1290051447911, -85.7304467675488);
    glVertex2d(-84.7856340711762, -78.9871001837824);
    glVertex2d(-84.7856340711762, -58.2627800142383);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(75,72,65);
    glVertex2d(-84.7856340711762, -78.6945928454324);
    glVertex2d(-84.7856340711762, -58.2627800142383);
    glVertex2d(-71.8439609620027, -57.8139941088288);
    glVertex2d(-71.8439609620027, -70.5239237745875);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(75,72,65);
    glVertex2d(-71.8439609620027, -57.8139941088288);
    glVertex2d(-71.8439609620027, -70.5239237745875);
    glVertex2d(-58.9113810187508, -68.4624566660563);
    glVertex2d(-58.9113810187508, -58.2627800142383);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(75,72,65);
    glVertex2d(-58.9113810187508, -68.4624566660563);
    glVertex2d(-58.9113810187508, -58.2627800142383);
    glVertex2d(-46.667955524986, -57.6815887412231);
    glVertex2d(-46.667955524986, -70.3208337499313);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(75,72,65);
    glVertex2d(-46.667955524986, -57.6815887412231);
    glVertex2d(-46.667955524986, -70.3208337499313);
    glVertex2d(-34.3152137321698, -76.9891279920712);
    glVertex2d(-34.3152137321698, -57.6815887412231);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(75,72,65);
    glVertex2d(-34.3152137321698, -57.6815887412231);
    glVertex2d(-34.3152137321698, -76.9891279920712);
    glVertex2d(-23.1150684724546, -88.1013201860367);
    glVertex2d(-23.1150684724546, -58.2627800142383);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(75,72,65);
    glVertex2d(-16.53089221754, -88.7253481856401);
    glVertex2d(-3.8063166977235, -78.035525887896);
    glVertex2d(-3.8063166977235, -57.4878583168847);
    glVertex2d(-16.53089221754, -58.2627800142383);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(75,72,65);
    glVertex2d(-3.8063166977235, -57.4878583168847);
    glVertex2d(-3.8063166977235, -78.035525887896);
    glVertex2d(8.183229725385, -69.7421084229856);
    glVertex2d(8.183229725385, -57.1003974682079);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(75,72,65);
    glVertex2d(8.183229725385, -57.1003974682079);
    glVertex2d(8.183229725385, -69.7421084229856);
    glVertex2d(21.5597095074983, -68.2706956469531);
    glVertex2d(21.5597095074983, -57.1003974682079);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(75,72,65);
    glVertex2d(33.1972469179369, -57.2941278925463);
    glVertex2d(33.1972469179369, -70.0096380186278);
    glVertex2d(21.5597095074983, -68.2706956469531);
    glVertex2d(21.5597095074983, -57.1003974682079);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(75,72,65);
    glVertex2d(46.3061971044079, -57.2941278925463);
    glVertex2d(46.3061971044079, -77.7679962922537);
    glVertex2d(33.1972469179369, -70.0096380186278);
    glVertex2d(33.1972469179369, -57.2941278925463);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(75,72,65);
    glVertex2d(46.3061971044079, -57.2941278925463);
    glVertex2d(46.3061971044079, -77.7679962922537);
    glVertex2d(57.6046699452591, -89.0237068262295);
    glVertex2d(57.6046699452591, -57.8345962332949);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(75,72,65);
    glVertex2d(63.9989436136881, -58.1129566022249);
    glVertex2d(63.9989436136881, -89.3852182653194);
    glVertex2d(75.7627406710922, -77.4406130867076);
    glVertex2d(75.7627406710922, -57.9031499695945);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(75,72,65);
    glVertex2d(75.7627406710922, -57.9031499695945);
    glVertex2d(75.7627406710922, -77.4406130867076);
    glVertex2d(88.566684750298, -70.4566435889588);
    glVertex2d(88.566684750298, -58.0613647712885);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(75,72,65);
    glVertex2d(88.566684750298, -58.0613647712885);
    glVertex2d(88.566684750298, -70.4566435889588);
    glVertex2d(100.7035696589187, -67.999320987899);
    glVertex2d(100.7035696589187, -58.0613647712885);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(75,72,65);
    glVertex2d(100.7035696589187, -58.0613647712885);
    glVertex2d(100.7035696589187, -67.999320987899);
    glVertex2d(113.5447380954851, -69.8727795425862);
    glVertex2d(113.5447380954851, -57.9031499695945);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(75,72,65);
    glVertex2d(113.5447380954851, -57.9031499695945);
    glVertex2d(113.5447380954851, -69.8727795425862);
    glVertex2d(125.8907367321275, -76.6630787927397);
    glVertex2d(125.8907367321275, -57.9031499695945);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(75,72,65);
    glVertex2d(125.8907367321275, -57.9031499695945);
    glVertex2d(125.8907367321275, -76.6630787927397);
    glVertex2d(137.2511888502453, -87.950848974813);
    glVertex2d(137.2511888502453, -57.7449351679004);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(75,72,65);
    glVertex2d(144.2126401247838, -58.0613647712885);
    glVertex2d(144.2126401247838, -88.8624266096063);
    glVertex2d(155.2629217105639, -77.6426801066163);
    glVertex2d(155.2629217105639, -58.2195795729826);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(75,72,65);
    glVertex2d(155.2629217105639, -58.2195795729826);
    glVertex2d(155.2629217105639, -77.6426801066163);
    glVertex2d(168.2612899822801, -70.9326217364451);
    glVertex2d(168.2612899822801, -57.7449351679004);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(75,72,65);
    glVertex2d(168.2612899822801, -70.9326217364451);
    glVertex2d(168.2612899822801, -57.7449351679004);
    glVertex2d(180.8831445784897, -57.7449351679004);
    glVertex2d(180.8831445784897, -68.1265973271008);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(75,72,65);
    glVertex2d(180.8831445784897, -57.7449351679004);
    glVertex2d(180.8831445784897, -68.1265973271008);
    glVertex2d(193.6932560124526, -70.2006153687901);
    glVertex2d(193.6932560124526, -57.7317208696347);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(75,72,65);
    glVertex2d(193.0850127566125, -57.7317208696347);
    glVertex2d(193.0850127566125, -70.2006153687901);
    glVertex2d(206.1952358009011, -77.2766769227888);
    glVertex2d(206.1952358009011, -58.3872320218492);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(75,72,65);
    glVertex2d(206.1952358009011, -58.3872320218492);
    glVertex2d(206.1952358009011, -77.2766769227888);
    glVertex2d(216.9748615996585, -89.8834714602431);
    glVertex2d(216.9748615996585, -58.4273358940558);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(75,72,65);
    glVertex2d(223.2797350685291, -89.1168636296808);
    glVertex2d(223.4818346847938, -58.5105655140544);
    glVertex2d(234.8690375837806, -58.7429574099521);
    glVertex2d(234.8690375837806, -77.3503014264933);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(75,72,65);
    glVertex2d(234.8690375837806, -58.7429574099521);
    glVertex2d(234.8690375837806, -77.3503014264933);
    glVertex2d(250.0, -70.4386544718503);
    glVertex2d(250.0, -56.87886538601);
    glEnd();
}

void Hill()
{
    glPushMatrix();
    glTranslatef(0.0f, -20.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(20, 150, 90);
    glVertex2d(-52.7044919735443, -158.2027085797572);
    glVertex2d(-102.1726212140757, -159.9795810381097); ///hill 1
    glVertex2d(-79.0022043571601, -121.0305367510239);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(20, 150, 90);
    glVertex2d(-52.7044919735443, -158.2027085797572);
    glVertex2d(-44.2535203767936, -160.35681594054);
    glVertex2d(-25.9759936197429, -191.7348800358089); ///hill 1
    glVertex2d(-120.7478516674415, -191.9259523302599);
    glVertex2d(-102.1726212140757, -159.9795810381097);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(8, 115, 73);
    glVertex2d(-71.95421,-130.992970);
    glVertex2d(-71.5602437493764, -139.7670861617237); ///hill 1
    glVertex2d(-71.6397732585219, -153.0485141890215);
    glVertex2d(-52.7044919735443, -158.2027085797572);
    glVertex2d(-44.2535203767936, -160.35681594054);
    glVertex2d(-64.5906514,-141.40146);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(8, 115, 73);
    glVertex2d(-71.5602437493764, -139.7670861617237);
    glVertex2d(-71.6397732585219, -153.0485141890215); ///hill 1
    glVertex2d(-74, -140);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(8, 115, 73);
    glVertex2d(-71.5602437493764, -139.7670861617237);
    glVertex2d(-71.6397732585219, -153.0485141890215); ///hill 1
    glVertex2d(-74, -140);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(29, 169, 72);
    glVertex2d(-125.4198697679981, -137.8637200083914);
    glVertex2d(-117.2080139141876, -137.5325967884797); ///hill 2
    glVertex2d(-105, -150);
    glVertex2d(-105, -165);
    glEnd();


    glBegin(GL_POLYGON);
glColor3ub(29, 169, 72);
glVertex2d(-113.2692292412457, -138.8466660087864);
glVertex2d(-116.1740484592104, -139.1739695826416); ///hill 2
glVertex2d(-116.2558743526742, -141.6696593332873);
glVertex2d(-108, -148);
glEnd();

    glBegin(GL_POLYGON);
glColor3ub(29, 169, 72);
glVertex2d(-112.4960732594958, -143.6810211669817);
glVertex2d(-113.4708795474996, -148.2251181710609); ///hill 2
glVertex2d(-106.6322385116578, -150.0997456479912);
glVertex2d(-104.2693881235788, -145.3165133907475);
glEnd();

    glBegin(GL_POLYGON);
glColor3ub(29, 169, 72);
glVertex2d(-107.9926331333168, -145.7154324989337);
glVertex2d(-104.2693881235788, -145.3165133907475); ///hill 2
glVertex2d(-100.6444476,-157.41074);
glVertex2d(-105, -165);
glEnd();

    glBegin(GL_POLYGON);
glColor3ub(29, 169, 72);
glVertex2d(-105, -165);
glVertex2d(-153.8339013088271, -94.4248671610284); ///hill 2
glVertex2d(-220, -190);
glVertex2d(-120.7478516674415, -191.9259523302599);
glEnd();


    glBegin(GL_POLYGON);
glColor3ub(11, 145, 82);
glVertex2d(-269.28123732405, -194.1733677964389);
glVertex2d(-229.3459112027604, -194.1733677964389); ///hill 3
glVertex2d(-238.2812124810398, -167.1243265118504);
glEnd();

    glBegin(GL_POLYGON);
glColor3ub(11, 145, 82);
glVertex2d(-230.6223828139432, -147.9164679816707);
glVertex2d(-250, -180); //hill 3
glVertex2d(-245.6338105301775, -189.2322677582749);
glVertex2d(-208.1752648251195, -178.7956535121568);
glEnd();

    glBegin(GL_POLYGON);
glColor3ub(11, 145, 82);
glVertex2d(-240.7795713459367, -184.0544126284178);
glVertex2d(-235.6017162160799, -192.8729471464556); ///hill 3
glVertex2d(-205, -185);
glVertex2d(-213.1104079957643, -174.3459342599359);
glEnd();

    glBegin(GL_POLYGON);
glColor3ub(11, 114, 69);
glVertex2d(-237.2645470257404, -193.9464633882993);
glVertex2d(-189.2831587053754, -194.2974953551886); ///hill 3
glVertex2d(-200.1304093994371, -182.6880397528533);
glEnd();

    glBegin(GL_POLYGON);
glColor3ub(11, 114, 69);
glVertex2d(-200.1304093994371, -182.6880397528533);
glVertex2d(-205.3164343,-184.584); ///hill 3
glVertex2d(-214.438944,-170.179);
glEnd();

    glBegin(GL_POLYGON);
glColor3ub(20, 150, 90);
glVertex2d(-124.7694498021302, -136.0352019764453);
glVertex2d(-158, -122); ///hill 2
glVertex2d(-158.7618381666227, -119.2437812180809);

glVertex2d(-156.4865779012617, -116.2859428731116);
glVertex2d(-143.8816360311622, -108.8685944080347);
glEnd();

    glBegin(GL_POLYGON);
glColor3ub(20, 150, 90);
glVertex2d(-160.900582816062, -104.7731259303849);
glVertex2d(-154.3478332518225, -115.8308908200394); ///hill 2
glVertex2d(-139.6496519375908, -115.33033356166);
glVertex2d(-153.8339013088271, -94.4248671610284);
glEnd();

    glBegin(GL_POLYGON);
glColor3ub(154, 172, 98);
glVertex2d(-246.7885333378277, -193.2812730513009);
glVertex2d(-248.6682654734968, -198.740015173284);
glVertex2d(-245.6606940564263, -198.740015173284);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(13, 143, 83);
glVertex2d(-99.9090559663113, -138.9716021985636);
glVertex2d(-110, -170);
glVertex2d(-94.6316057085979, -171.9263369653259);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(8, 115, 73);
glVertex2d(-99.9090559663113, -138.9716021985636);
glVertex2d(-85.1020487417409, -162.1766641595708);
glVertex2d(-94.6316057085979, -171.9263369653259);
glEnd();

glPopMatrix();
}
void grass(){
    glBegin(GL_POLYGON); /// Grass
    glColor3ub(17, 138, 67);
    glVertex2f(-250, 177);
    glVertex2f(250, 177);
    glVertex2f(250, -250);
    glVertex2f(-250, -250);
    glEnd();
}
void handleKeypress(unsigned char key, int x, int y) {
    switch (key) {

        case 'w':
            speed += 0.5;
            break;

        case 's':
            speed -= 0.5;
            if (speed < 0)
                speed = 0;
            break;

       case 'd':
            moveSun = -60;
         break;


      case '1':
           glutDisplayFunc(display1_view);
       break;

      case '2':
          glutDisplayFunc(display);
        break;


    }
    glutPostRedisplay();
}

void handleMouse(int button, int state, int x, int y)
{
        if (button == GLUT_LEFT_BUTTON)
        {
            boatSpeed += 0.5f;

        }
        if (button == GLUT_RIGHT_BUTTON)
        {
            boatSpeed -= 0.5f;
            if(boatSpeed < 0)
                boatSpeed = 0;
        }
        glutPostRedisplay();
}

 int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Sirajganj Animation");
    glutInitWindowSize(1920, 1080);
    glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);
    glutDisplayFunc(display1_view); /// default display
    gluOrtho2D(-250, 250, -250, 250);
    glutTimerFunc(16, updateBoats, 0);
    glutTimerFunc(20, sunUpdateRise, 0);
    glutTimerFunc(22, update1, 0);
    glutTimerFunc(22, update2, 0);
    glutTimerFunc(22, update3, 0);
    glutTimerFunc(22, update4, 0);
    glutTimerFunc(22, update5, 0);
    glutTimerFunc(22, update6, 0);
    glutMainLoop();
    return 0;
}
