#include <windows.h>
#include <GL/glut.h>
#include <bits/stdc++.h>
using namespace std;


float TrainPosition =400.0;


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

 int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Sirajganj Animation");
    glutInitWindowSize(1920, 1080);
    glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);
    glutDisplayFunc(display1_view); /// default display
    gluOrtho2D(-250, 250, -250, 250);
    glutMainLoop();
    return 0;
}
