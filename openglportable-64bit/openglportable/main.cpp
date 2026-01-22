#include <windows.h>
#include <GL/glut.h>
#include <bits/stdc++.h>
using namespace std;

float car1Position = 400.0;
float car2Position = 400.0;
float car3Position = 400.0;
float car4Position = 400.0;
float car5Position = 400.0;
float TrainPosition =400.0;
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

void display0_view() {
    glViewport(0, 0, glutGet(GLUT_WINDOW_WIDTH), glutGet(GLUT_WINDOW_HEIGHT));
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-250, 250, -250, 250);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1, 1, 1);
    renderBitmapString(-130.0f, 150.0f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24,
    "Transitions: \nA Visual Journey Through Bridge and Village, Swiss Alpine Scene, City_View_2D");
    renderBitmapString(-125.0f, 125.0f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24,
    "COURSE TEACHER :   ZISAN AHMEND");
    renderBitmapString(-125.0f, 100.0f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24,
    "MD Symon Islam Jihan – 23-54263-3\n\n");
    renderBitmapString(-125.0f, 75.0f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24,
    "Hridoy Mia – 23-51001-1");
    renderBitmapString(-125.0f, 50.0f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24,
    "Muhshanat Hossain Tanjila – 23-52533-2");
    renderBitmapString(-125.0f, 25.0f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24,
    "Tasnima Tabassum Sumaiya – 23-52511-2");
    glutSwapBuffers();
}



void sun()
{
    Circle(15, 0, 220, 255, 251, 5 );
}


void sunUpdateRise(int value)///Sun_animation
{

    moveSun+=0.3;

    if(moveSun > 0)
    {
        moveSun = 0;
    }
    glutPostRedisplay();

    glutTimerFunc(40, sunUpdateRise, 0);
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

void Railline(){
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
void Train(){
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


void road(){
    glBegin(GL_POLYGON);
    glColor3b(0, 0, 0);
    glVertex2f(-250.0f, -15.0f);
    glVertex2f(-250.0f, -55.0f);
    glVertex2f(250.0f, -55.0f);
    glVertex2f(250.0f, -15.0f);
    glEnd();
}

void car1(){
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

void car2() {
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

void car3() {
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

void car4() {
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
void drawChalet(float x, float baseY, bool hasSmoke, float phase);
void road_divider() {

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

    void Hill(){
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


void grass(){
    glBegin(GL_POLYGON); /// Grass
    glColor3ub(17, 138, 67);
    glVertex2f(-250, 177);
    glVertex2f(250, 177);
    glVertex2f(250, -250);
    glVertex2f(-250, -250);
    glEnd();
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



// ======================= TREE =======================
void drawTree(float x, float y)
{
    // Tree trunk
    glColor3ub(120, 70, 30);
    glBegin(GL_QUADS);
    glVertex2f(x-6, y);
    glVertex2f(x+6, y);
    glVertex2f(x+6, y+28);
    glVertex2f(x-6, y+28);
    glEnd();

    // Tree leaves
    glColor3ub(0, 160, 60);
    glBegin(GL_TRIANGLES);
    glVertex2f(x-30, y+28);
    glVertex2f(x+30, y+28);
    glVertex2f(x,    y+80);
    glEnd();
}

// ======================= HOUSE =======================
void drawHouse(float x, float y)
{
    // House body
    glColor3ub(190, 120, 70);
    glBegin(GL_QUADS);
    glVertex2f(x-30, y);
    glVertex2f(x+30, y);
    glVertex2f(x+30, y+35);
    glVertex2f(x-30, y+35);
    glEnd();

    // House roof
    glColor3ub(150, 40, 40);
    glBegin(GL_TRIANGLES);
    glVertex2f(x-35, y+35);
    glVertex2f(x+35, y+35);
    glVertex2f(x,    y+65);
    glEnd();

    // Door
    glColor3ub(100, 60, 30);
    glBegin(GL_QUADS);
    glVertex2f(x-6, y);
    glVertex2f(x+6, y);
    glVertex2f(x+6, y+18);
    glVertex2f(x-6, y+18);
    glEnd();

    // Left window
    glColor3ub(180, 220, 255);
    glBegin(GL_QUADS);
    glVertex2f(x-22, y+12);
    glVertex2f(x-12, y+12);
    glVertex2f(x-12, y+22);
    glVertex2f(x-22, y+22);
    glEnd();

    // Right window
    glBegin(GL_QUADS);
    glVertex2f(x+12, y+12);
    glVertex2f(x+22, y+12);
    glVertex2f(x+22, y+22);
    glVertex2f(x+12, y+22);
    glEnd();
}

void fillGrassScenery()
{
    // -------- TREES (UPPER SIDE OF GRASS) --------
    drawTree(-220, 120);
    drawTree(-160, 115);
    drawTree(-100, 120);
    drawTree(-40,  115);
    drawTree(40,   120);
    drawTree(100,  115);
    drawTree(160,  120);
    drawTree(220,  115);
    // -------- HOUSES (LOWER SIDE OF GRASS) --------
    drawHouse(-180, 70);
    drawHouse(-60,  75);
    drawHouse(60,   70);
    drawHouse(180,  75);


}
void display3() {
    glViewport(0, 0, glutGet(GLUT_WINDOW_WIDTH), glutGet(GLUT_WINDOW_HEIGHT));
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-250, 250, -250, 250);  // Correct projection for this scene
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glClearColor(0.7f, 0.7f, 0.65f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    sky();
    glPushMatrix();
    glTranslatef(0, moveSun, 0);
    sun();
    glPopMatrix();
    grass();
    road();
    road_divider();
    car1();
    car2();
    car3();
    car4();
    car5();
    Railline();
    Train();
    mountainRange();
    bottomWater();
    bridgeBottom();
    Dam();
    glPushMatrix();
    glTranslatef(boat1Position, 0, 0);
    DamSideBoat1();
    glPopMatrix();
    Hill();
	fillGrassScenery();
    glutSwapBuffers();

}




// /////////////////////////////////////scene 2 Tanjilaa//////////////////////////////////////////////////////////////////////////////////////////////////////
#include <GL/glut.h>
#include <cmath>
#include <vector>
#include <cstdlib>


bool isDay = true;
bool isSnowing = false;
bool isTurbineRotating = false;
float cloudX = -300, cloudX2 = 100, carX = -50, cableCarX = -300;
float carX2 = 300;
float busX = -200;
float smokeY = 0;
float globalSpeed = 1.0f;
float turbineAngle = 0.0f;
float fireFlicker = 0.0f;

const int MAX_SNOW = 100;
float snowY[MAX_SNOW];
float snowX[MAX_SNOW];


void drawCircle(float x, float y, float r) {
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for (int i = 0; i <= 100; i++) {
        float angle = 2.0f * 3.1416f * i / 100;
        glVertex2f(x + cos(angle) * r, y + sin(angle) * r);
    }
    glEnd();
}


void drawBus() {

    glPushMatrix();
    glTranslatef(busX, -190, 0);

    // Body
    glColor3f(0.9f, 0.7f, 0.0f);
    glRectf(0, 0, 80, 35);

    // Windows
    glColor3f(0.2f, 0.2f, 0.2f);
    glRectf(5, 20, 15, 30);
    glRectf(20, 20, 30, 30);
    glRectf(35, 20, 45, 30);
    glRectf(50, 20, 60, 30);
    glRectf(65, 20, 75, 30);


    // Wheels
    glColor3f(0, 0, 0);
    drawCircle(15, 0, 9);
    drawCircle(65, 0, 9);

    glPopMatrix();
}



void drawTurbine(float x, float y, float scale) {
    glPushMatrix();
    glTranslatef(x, y, 0);
    glScalef(scale, scale, 1.0f);
    glColor3f(0.7f, 0.7f, 0.7f);
    glRectf(-2, 0, 2, 60);
    glTranslatef(0, 60, 0);
    glPushMatrix();
    glRotatef(turbineAngle, 0, 0, 1);
    glColor3f(0.9f, 0.9f, 0.9f);

    for (int i = 0; i < 3; i++) {
        glRotatef(120, 0, 0, 1);
        glBegin(GL_TRIANGLES);
            glVertex2f(0, 0);
            glVertex2f(-5, 30);
            glVertex2f(5, 30);
        glEnd();
    }
    glPopMatrix();
    drawCircle(0, 0, 3);
    glPopMatrix();
}

void drawSnow() {
    if (!isSnowing)
        return;

    glColor3f(1.0f, 1.0f, 1.0f);
    for (int i = 0; i < MAX_SNOW; i++)
    drawCircle(snowX[i], snowY[i], 2);
}

void drawMountain(float x, float y, float height, float width) {
    glPushMatrix();
    glTranslatef(x, y, 0);
    glColor3f(0.2f, 0.3f, 0.5f);
    glBegin(GL_TRIANGLES);
        glVertex2f(-width/2, 0);
        glVertex2f(0, height);
        glVertex2f(width/2, 0);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
        glVertex2f(0, height);
        glVertex2f(width/6, height/1.5);
        glVertex2f(0, height/1.8);
        glVertex2f(-width/6, height/1.5);
    glEnd();
    glPopMatrix();
}

void drawMountain(float x, float y, float height, float width, bool isForeground) {
    glPushMatrix();
    glTranslatef(x, y, 0);

    // Base Mountain Shape
    if (isForeground) glColor3f(0.0f, 0.25f, 0.45f);
    else glColor3f(0.15f, 0.25f, 0.45f);

    glBegin(GL_TRIANGLES);
        glVertex2f(-width / 2, 0);
        glVertex2f(0, height);
        glVertex2f(width / 2, 0);
    glEnd();

    // Shading Layer
    if (isForeground)
        glColor3f(0.0f, 0.2f, 0.4f);
    else
    glColor3f(0.1f, 0.2f, 0.4f);

    glBegin(GL_TRIANGLES);
        glVertex2f(0, 0);
        glVertex2f(0, height);
        glVertex2f(width / 2, 0);
    glEnd();

    // Snow Cap
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
        glVertex2f(0, height);
        glVertex2f(width / 6, height / 1.5);
        glVertex2f(width / 12, height / 1.7);
        glVertex2f(0, height / 1.8);
        glVertex2f(-width / 12, height / 1.7);
        glVertex2f(-width / 6, height / 1.5);
    glEnd();

    // Edges
    glColor4f(0.0f, 0.1f, 0.2f, 0.4f);
    glLineWidth(2);
    glBegin(GL_LINES);
        glVertex2f(-width/10, height/3);
        glVertex2f(-width/20, height/2);
        glVertex2f(width/8, height/4);
        glVertex2f(width/15, height/2.5);
    glEnd();

    glPopMatrix();
}

void drawChalet(float x, float baseY, bool hasSmoke, float phase) {

    float houseWidth = 40, houseHeight = 30, roofHeight = 22;
    glColor3f(0.7f, 0.6f, 0.4f);
    glRectf(x - houseWidth/2, baseY, x + houseWidth/2, baseY + houseHeight);
    glColor3f(0.35f, 0.16f, 0.14f);
    glRectf(x - 6, baseY, x + 6, baseY + 18);

    glBegin(GL_TRIANGLES);
        glVertex2f(x, baseY + houseHeight + roofHeight);
        glVertex2f(x - houseWidth/2 - 10, baseY + houseHeight);
        glVertex2f(x + houseWidth/2 + 10, baseY + houseHeight);
    glEnd();

    if (isDay) glColor3f(0.2f, 0.2f, 0.2f);
    else glColor3f(1.0f, 1.0f, 0.0f);
    glRectf(x + 8, baseY + 18, x + 16, baseY + 26);
    if (hasSmoke) {

        float localSmokeY = fmod(smokeY + phase, 30.0f);

        glColor3f(0.3f, 0.3f, 0.3f); // Chimney
        glRectf(x + 10, baseY + houseHeight + 5, x + 16, baseY + houseHeight + 15);

        glColor4f(0.8f, 0.8f, 0.8f, 0.6f); // Smoke
        drawCircle(x + 13, baseY + houseHeight + 18 + localSmokeY, 4);
        drawCircle(x + 16, baseY + houseHeight + 24 + localSmokeY, 5);
    }
    }


void drawPineTree(float x, float y) {
    glPushMatrix();
    glTranslatef(x, y, 0);

    // 1. Trunk
    glColor3f(0.25f, 0.15f, 0.05f); // Darker brown
    glRectf(-3, 0, 3, 10);

    // Tree tiers
    float widths[] = {20, 16, 12};
    float heights[] = {3, 15, 30};

    for (int i = 0; i < 3; i++) {
        float baseWidth = widths[i];
        float baseY = heights[i];

        // Left side
        glColor3f(0.0f, 0.4f, 0.15f);
        glBegin(GL_TRIANGLES);
            glVertex2f(0, baseY + 25); // Top
            glVertex2f(-baseWidth, baseY); // Bottom Left
            glVertex2f(0, baseY); // Bottom Center
        glEnd();

        // Right side
        glColor3f(0.0f, 0.3f, 0.1f);
        glBegin(GL_TRIANGLES);
            glVertex2f(0, baseY + 25); // Top
            glVertex2f(0, baseY); // Bottom Center
            glVertex2f(baseWidth, baseY); // Bottom Right
        glEnd();

        // Branch line
        glColor3f(0.0f, 0.2f, 0.05f);
        glLineWidth(1);
        glBegin(GL_LINES);
            glVertex2f(-baseWidth/2, baseY + 5); glVertex2f(baseWidth/2, baseY + 5);
        glEnd();

        // Snow on branches
        if (isSnowing) {
            glColor3f(1.0f, 1.0f, 1.0f);
            glBegin(GL_LINES);
                glVertex2f(-baseWidth + 2, baseY + 1);
                glVertex2f(-baseWidth + 8, baseY + 1);
                glVertex2f(baseWidth - 2, baseY + 1);
                glVertex2f(baseWidth - 8, baseY + 1);
            glEnd();
        }
    }
    glPopMatrix();
}

void drawGrassDetails() {

    srand(42);
    glColor3f(0.15f, 0.4f, 0.15f);
    glLineWidth(1.5);

    for (int i = 0; i < 150; i++) {

        float x = (rand() % 500) - 250;
        float y = (rand() % 80) - 120;

        glBegin(GL_LINES);
            glVertex2f(x, y);
            glVertex2f(x - 2, y + 5);
            glVertex2f(x, y);
            glVertex2f(x + 2, y + 5);
        glEnd();

        if (i % 10 == 0 && isDay) {
            if (i % 20 == 0)
                glColor3f(1, 0.8, 0);
           else
            glColor3f(1, 0, 0);
            drawCircle(x, y + 5, 1.5);
            glColor3f(0.15f, 0.4f, 0.15f);
}
    }


}

void drawFence() {
    float startX = -250, endX = 250, fenceY = -120;

    glColor3f(0.4f, 0.2f, 0.1f);
    glRectf(startX, fenceY + 10, endX, fenceY + 12);
    glRectf(startX, fenceY + 4, endX, fenceY + 6);

    for (float x = startX; x <= endX; x += 20)
        glRectf(x, fenceY, x + 4, fenceY + 15);
}

void drawRoad() {
    //Grass
    glColor3f(0.2f, 0.5f, 0.2f);
    glRectf(-250, -120, 250, -40);

    // main road
    glColor3f(0.15f, 0.15f, 0.15f);
    glRectf(-250, -250, 250, -120);

    // Dashed White Lines
    glColor3f(1.0f, 1.0f, 1.0f);
    glLineWidth(2);
    for (float x = -250; x < 250; x += 40) {
        glBegin(GL_LINES);
            glVertex2f(x, -185);
            glVertex2f(x + 30, -185);
        glEnd();
    }
}

void drawCar() {
    glPushMatrix();
    glTranslatef(carX, -145, 0);

    // Body
    glColor3f(0.1f, 0.1f, 0.7f);
    glRectf(0, 0, 55, 18);

    // Roof
    glColor3f(0.1f, 0.1f, 0.8f);
    glBegin(GL_POLYGON);
        glVertex2f(8, 18);
        glVertex2f(15, 32);  // Windshield top
        glVertex2f(40, 32);  // Rear window top
        glVertex2f(48, 18);
    glEnd();

    //  Window
    glColor3f(0.6f, 0.8f, 1.0f);
    glBegin(GL_POLYGON);
        glVertex2f(12, 20);
        glVertex2f(17, 30);
        glVertex2f(38, 30);
        glVertex2f(44, 20);
    glEnd();

    //  Wheels
    glColor3f(0.1f, 0.1f, 0.1f); // Tire
    drawCircle(12, 0, 8);
    drawCircle(43, 0, 8);

    glColor3f(0.7f, 0.7f, 0.7f); // Silver wheel
    drawCircle(12, 0, 3.5);
    drawCircle(43, 0, 3.5);

    // Headlights
    if (!isDay) {
        // Front Light Glow
        glColor4f(1.0f, 1.0f, 0.8f, 0.3f);
        glBegin(GL_TRIANGLES);
            glVertex2f(55, 10);
            glVertex2f(80, 20);
            glVertex2f(80, 0);
        glEnd();

        glColor3f(1.0f, 1.0f, 0.0f); // Bright yellow bulb
    } else {
        glColor3f(0.9f, 0.9f, 0.9f); // Off-white bulb
    }

    glRectf(53, 10, 56, 16); // Front Headlight

    glColor3f(0.8f, 0.0f, 0.0f); // back light (Red)
    glRectf(-1, 10, 2, 16);

    // Door Handle
    glColor3f(0, 0, 0);
    glRectf(25, 12, 30, 14);

    glPopMatrix();
}

void drawCar2() {
    glPushMatrix();
    glTranslatef(carX2, -215, 0);

    // Body
    glColor3f(0.8f, 0.1f, 0.1f);
    glRectf(0, 0, 55, 18);

    //The Roof
    glColor3f(0.7f, 0.1f, 0.1f);
    glBegin(GL_POLYGON);
        glVertex2f(7, 18);
        glVertex2f(15, 32);
        glVertex2f(40, 32);
        glVertex2f(47, 18);
    glEnd();

    // Windows
    glColor3f(0.6f, 0.8f, 1.0f);
    glBegin(GL_POLYGON);
        glVertex2f(11, 20);
        glVertex2f(17, 30);
        glVertex2f(38, 30);
        glVertex2f(43, 20);
    glEnd();

    // Wheels
    glColor3f(0.1f, 0.1f, 0.1f); // Tire
    drawCircle(12, 0, 8);
    drawCircle(43, 0, 8);
    glColor3f(0.7f, 0.7f, 0.7f); // Silver tire
    drawCircle(12, 0, 3.5);
    drawCircle(43, 0, 3.5);

    // Headlights
    if (!isDay) {
        // Front Light Glow
        glColor4f(1.0f, 1.0f, 0.8f, 0.3f);
        glBegin(GL_TRIANGLES);
            glVertex2f(0, 10);    // Light start
            glVertex2f(-25, 20);  // Beam top
            glVertex2f(-25, 0);   // Beam bottom
        glEnd();
        glColor3f(1.0f, 1.0f, 0.0f);
    } else {
        glColor3f(0.9f, 0.9f, 0.9f);
    }
    // Headlight on the LEFT edge
    glRectf(-1, 10, 2, 16);

    // back light
    glColor3f(1.0f, 0.5f, 0.0f);
    glRectf(53, 10, 56, 16);

    // Door Handle
    glColor3f(0, 0, 0);
    glRectf(25, 12, 30, 14);

    glPopMatrix();
}
void drawCableCar() {
    // Cable Wire
    glColor3f(0.1f, 0.1f, 0.1f);
    glLineWidth(2);
    glBegin(GL_LINES);
        glVertex2f(-250, 150);
        glVertex2f(250, 150);
    glEnd();

    glPushMatrix();
    glTranslatef(cableCarX, 140, 0);

    // Hanger
    glColor3f(0.2f, 0.2f, 0.2f);
    glRectf(-2, 0, 2, 12);

    // Cabin Body
    glColor3f(1.0f, 0.5f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex2f(-15, 0);   glVertex2f(15, 0);
        glVertex2f(22, -15);  glVertex2f(15, -35);
        glVertex2f(-15, -35); glVertex2f(-22, -15);
    glEnd();


    // Glass
    glColor3f(0.5f, 0.8f, 0.9f);
    glRectf(-12, -5, 12, -25);

    // --- PEOPLE (Silhouettes) ---
    glColor3f(0.0f, 0.0f, 0.0f);
    drawCircle(-6, -15, 3); // Head
    glRectf(-8, -25, -4, -18); // Body




    // 5. Window Frames (The "Cross" Bars)
    glColor3f(0.1f, 0.1f, 0.1f);
    glLineWidth(1);
    glBegin(GL_LINES);
        glVertex2f(0, -5); glVertex2f(0, -25); // Vertical bar
        glVertex2f(-12, -15); glVertex2f(12, -15); // Horizontal bar
    glEnd();

    // 6. Bottom Bumper
    glColor3f(0.1f, 0.1f, 0.1f);
    glRectf(-16, -35, 16, -38);

    glPopMatrix();
}

void drawPond(float x, float y) {
    glPushMatrix();
    glTranslatef(x, y, 0);

    // 1. Outer Bank/Edge (Darker Mud/Grass)
    glColor3f(0.0f, 0.4f, 0.4f);
    glScalef(1.6f, 0.7f, 1.0f);
    drawCircle(0, 0, 20);

    // 2. Main Water Body
    if (isDay) glColor3f(0.0f, 0.5f, 0.7f);
    else glColor3f(0.0f, 0.2f, 0.4f); // Darker water at night
    drawCircle(0, 0, 17.5);

    glPopMatrix();
}

void drawFire(float x, float y, float scale) {
    glPushMatrix();
    glTranslatef(x, y, 0);
    glScalef(scale, scale, 1.0f);


    // smoke
    glColor4f(0.2f, 0.2f, 0.2f, 0.5f);
    drawCircle(2, 15 + smokeY, 5);      // Puff 1
    drawCircle(-3, 22 + smokeY, 6);     // Puff 2
    drawCircle(4, 30 + smokeY, 7);      // Puff 3

    // Logs
    glColor3f(0.4f, 0.2f, 0.1f);
    glRectf(-10, 0, 10, 4);
    glRectf(-2, 0, 2, 8);


    float flameHeight = 15.0f + (sin(fireFlicker) * 5.0f);

    // Outer Flame (Red)
    glColor3f(1.0f, 0.2f, 0.0f);
    glBegin(GL_TRIANGLES);
        glVertex2f(-8, 3); glVertex2f(0, flameHeight + 5); glVertex2f(8, 3);
    glEnd();

    // Middle Flame (Orange)
    glColor3f(1.0f, 0.6f, 0.0f);
    glBegin(GL_TRIANGLES);
        glVertex2f(-5, 3); glVertex2f(0, flameHeight); glVertex2f(5, 3);
    glEnd();

    // Inner Core (Yellow)
    glColor3f(1.0f, 1.0f, 0.0f);
    drawCircle(0, 5, 4);

    glPopMatrix();
}

void drawSkyGradient() {
    glBegin(GL_QUADS);
    if (isDay) {
        // Light Blue
        glColor3f(0.4f, 0.7f, 1.0f);
        glVertex2f(-250, 250);
         glVertex2f(250, 250);
        // Lighter Cyan
        glColor3f(0.8f, 0.9f, 1.0f);
        glVertex2f(250, -100);
        glVertex2f(-250, -100);
    } else {
        // top blue
        glColor3f(0.02f, 0.02f, 0.1f);
        glVertex2f(-250, 250);
        glVertex2f(250, 250);
        // Midnight blue
        glColor3f(0.1f, 0.05f, 0.2f);
        glVertex2f(250, -100);
        glVertex2f(-250, -100);
    }
    glEnd();
}

void drawStars() {
    if (isDay) return;
    srand(123);
    for (int i = 0; i < 60; i++) {
        float x = (rand() % 500) - 250;
        float y = (rand() % 250); //upper half


        float twinkle = (sin(fireFlicker + i) + 1.0f) / 2.0f;
        glColor4f(1.0f, 1.0f, 1.0f, 0.3f + (twinkle * 0.7f));

        glPointSize(rand() % 3 + 1);
        glBegin(GL_POINTS);
        glVertex2f(x, y);
        glEnd();
    }
}

void drawClockTower(float x, float baseY) {
    glPushMatrix();
    glTranslatef(x, baseY, 0);

    //  Body
    glColor3f(0.7f, 0.7f, 0.65f);
    glRectf(-20, 0, 20, 90);

    // Clock Face
    glColor3f(1.0f, 1.0f, 1.0f); // White circle
    drawCircle(0, 70, 12);

    // Clock Hand
    glColor3f(0.1f, 0.1f, 0.1f);
    glLineWidth(2);
    glBegin(GL_LINES);
        glVertex2f(0, 70); glVertex2f(0, 78); // Hour hand
        glVertex2f(0, 70); glVertex2f(5, 70); // Minute hand
    glEnd();

    // 3. Roof
    glColor3f(0.4f, 0.1f, 0.1f);
    glBegin(GL_TRIANGLES);
        glVertex2f(-25, 90);
        glVertex2f(25, 90);
        glVertex2f(0, 130);
    glEnd();

    // Tiny ball
    glColor3f(0.9f, 0.7f, 0.2f);
    drawCircle(0, 130, 3);

    // Windows
    glColor3f(0.2f, 0.2f, 0.2f);
    glRectf(-5, 40, 5, 55);
    glRectf(-5, 20, 5, 35);

    // door
    glColor3f(0.3f, 0.2f, 0.1f);
    drawCircle(0, 10, 8); // Top of door
    glRectf(-8, 0, 8, 10); // Bottom of door

    glPopMatrix();
}

void drawTower(float x, float baseY, float scale) {
    glPushMatrix();
    glTranslatef(x, baseY, 0);
    glScalef(scale, scale, 1.0f);

    // Body
    glColor3f(0.75f, 0.72f, 0.66f);
    glRectf(-18, 0, 18, 85);

    // Roof
    glColor3f(0.45f, 0.12f, 0.1f);
    glBegin(GL_TRIANGLES);
        glVertex2f(-22, 85);
        glVertex2f(22, 85);
        glVertex2f(0, 120);
    glEnd();


    //  Windows
    if (isDay)
        glColor3f(0.2f, 0.2f, 0.2f);
    else glColor3f(1.0f, 0.9f, 0.0f);       // Glowing windows at night
    glRectf(-6, 55, 6, 70);
    glRectf(-6, 30, 6, 45);

    // Wooden Door
    glColor3f(0.35f, 0.2f, 0.1f);
    glRectf(-7, 0, 7, 15);

    glPopMatrix();
}

void drawSwissFlag(float x, float y, float size) {
    glPushMatrix();
    glTranslatef(x, y, 0);

    //  Square
    glColor3f(1.0f, 0.0f, 0.0f);
    glRectf(-size / 2, -size / 2, size / 2, size / 2);

    //  Cross
    glColor3f(1.0f, 1.0f, 1.0f);
    float barThickness = size * 0.2f;
    float barLength = size * 0.6f;

    // Vertical Bar
    glRectf(-barThickness / 2, -barLength / 2, barThickness / 2, barLength / 2);
    // Horizontal Bar
    glRectf(-barLength / 2, -barThickness / 2, barLength / 2, barThickness / 2);

    glPopMatrix();
}

void drawFlagWithPole(float x, float y) {
    //  Pole
    glColor3f(0.3f, 0.3f, 0.3f);
    glRectf(x - 1, y, x + 1, y + 50);

    // Flag
    drawSwissFlag(x + 11, y + 40, 20);
}
void display2() {
    glViewport(0, 0, glutGet(GLUT_WINDOW_WIDTH), glutGet(GLUT_WINDOW_HEIGHT));
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-250, 250, -250, 250);  // Correct projection for this scene
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    if (isDay) glClearColor(0.5f, 0.8f, 1.0f, 1);
    else glClearColor(0.05f, 0.05f, 0.15f, 1);
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();


    drawSkyGradient();
    drawStars();


    if (isDay) {
        glColor3f(1, 1, 0);
        drawCircle(180, 180, 22); // Sun
    } else {
        glColor3f(0.9f, 0.9f, 0.8f);
        drawCircle(180, 180, 18); // Moon
       //small circle
        glColor3f(0.8f, 0.8f, 0.7f);
        drawCircle(175, 185, 4);
    }

    // Cloud 1
    glPushMatrix();
    glTranslatef(cloudX, 180, 0);
    glColor3f(1, 1, 1);
    drawCircle(0, 0, 15);
    drawCircle(20, 5, 20);
    drawCircle(40, 0, 15);
    drawCircle(60, 0, 15);

    glPopMatrix();

    //cloud2
    glPushMatrix();
    glTranslatef(cloudX2, 140, 0);
    glColor3f(0.95, 0.95, 0.95);
    drawCircle(-50, 0, 12);
    drawCircle(-35, 5, 15);
    drawCircle(-20, 0, 12);
    glPopMatrix();

    drawMountain(-150, -80, 200, 300, false);
    drawMountain(50, -80, 250, 400, true);
    drawMountain(200, -80, 180, 250, false);

    drawRoad();
    drawGrassDetails();
    drawFence();

    drawTurbine(-200, -40, 0.8f);
    drawTurbine(120, -40, 1.0f);

    drawPineTree(-230, -70);
    drawPineTree(-200, -90);

    drawPineTree(-150, -40);
    drawPineTree(-130, -80);
    drawPineTree(-100, -45);
    drawPineTree(-30, -100);
    drawPineTree(40, -40);

    drawPineTree(20, -80);
     drawPineTree(165, -40);
    drawPineTree(100, -80);

    drawPineTree(160, -100);
    drawPineTree(230, -50);

    drawPond(210, -70);
    drawChalet(-170, -50, true, 0.0f);
    drawClockTower(-65, -60);
    drawChalet(-100, -90, false, 0.0f);
    drawTower(60, -45, 0.7f);
    drawChalet(-15, -45, true, 10.0f);
    drawChalet(80, -80, false, 0.0f);
    drawChalet(190, -40, true, 20.0f);

    drawCar();
    drawBus();
    drawCar2();
    drawCableCar();
    drawFlagWithPole(130, -60);

    drawFire(200, -90, 0.7f);
    drawSnow();

    glutSwapBuffers();
}

void update(int value) {
    cloudX += 0.1f * globalSpeed;
    if (cloudX > 300) cloudX = -350;

    cloudX2 += 0.1f * globalSpeed;
    if (cloudX2 > 400) cloudX2 = -450;

    carX += 1.8f * globalSpeed;
    if (carX > 300) carX = -350;

    carX2 -= 2.5f * globalSpeed;
    if (carX2 < -350) carX2 = 300;

    busX -= 1.5f * globalSpeed;
    if (busX < -400) busX = 300;

    cableCarX += 0.5f * globalSpeed;
    if (cableCarX > 300) cableCarX = -350;

    smokeY += 0.1f * globalSpeed;
    if (smokeY > 20) smokeY = 0;

    if (isTurbineRotating) {
        turbineAngle += 0.9f * globalSpeed;
        if (turbineAngle > 360) turbineAngle -= 360;
    }

    if (isSnowing) {
        for (int i = 0; i < MAX_SNOW; i++) {
            snowY[i] -= 0.4f * globalSpeed;
            if (snowY[i] < -250) snowY[i] = 250;
        }
    }
    glutPostRedisplay();
    glutTimerFunc(16, update, 0);
}



void initSnow() {
    for (int i = 0; i < MAX_SNOW; i++) {
        snowX[i] = (rand() % 500) - 250;
        snowY[i] = (rand() % 500) - 250;
    }
}

///////////////////////////// scene 3 ---- tasnima///////////////////////////////////////////////
#include <iostream>
#include <cmath>
#include <GL/gl.h>
#include <GL/glut.h>
#define PI 3.1416

bool china = true;
float cloud = 50.0f;
float cloudSpeed = 0.02f;
float boat = 30.0f;
//float boatSpeed = 0.2f;
float radarAngle = 0.0f;
float car = -60.0f;
float carSpeed = 0.3f;
float winR = 0.7f, winG = 0.9f, winB = 1.0f;
bool isNight = false;

void drawCircle(float cx, float cy, float r, int segments) {
    glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= segments; ++i) {
        float angle = 2.0f * PI * i / segments;
        float x = r * cosf(angle);
        float y = r * sinf(angle);
        glVertex2f(cx + x, cy + y);
    }
    glEnd();
}

void drawRectangle(float x1, float y1, float x2, float y2) {
    glBegin(GL_QUADS);
    glVertex2f(x1, y1);
    glVertex2f(x2, y1);
    glVertex2f(x2, y2);
    glVertex2f(x1, y2);
    glEnd();
}
void drawSky(float R, float G, float B) {
    glBegin(GL_QUADS);
    glColor3f(R, G, B);
    glVertex2f(0.0, 90.0);
    glVertex2f(100.0, 90.0);
    glColor3f(R * 1.5f, G * 1.5f, B * 1.5f);
    glVertex2f(100.0, 50.0);
    glVertex2f(0.0, 50.0);
    glEnd();
}
void drawSun(float x, float y, float radius) {
    //Sun
    glColor3f(1.0f, 0.843f, 0.0f);
    drawCircle(x, y, radius, 100);
}
void drawCloud(float x, float y, float scale) {
    glColor3f(0.85f, 0.85f, 0.85f);
    drawCircle(x, y - 0.5f, 4.2f * scale, 30);
    drawCircle(x + 3.0f * scale, y + 0.5f, 4.7f * scale, 30);
    //body
    glColor3f(1.0f, 1.0f, 1.0f);
    drawCircle(x, y, 4.0f * scale, 30);
    drawCircle(x + 3.0f * scale, y + 1.0f * scale, 4.5f * scale, 30);
    drawCircle(x + 6.0f * scale, y, 4.0f * scale, 30);
    drawCircle(x + 3.0f * scale, y - 1.5f * scale, 4.0f * scale, 30);
}
void updateClouds(int value) {
    cloud += cloudSpeed;
    if (cloud > 110.0f) cloud = -35.0f;
    glutPostRedisplay();
    glutTimerFunc(30, updateClouds, 0);
}
void drawBird(float x, float y) {
    glColor3f(0.1f, 0.1f, 0.1f);
    glLineWidth(2.0f);
    glBegin(GL_LINE_STRIP);
        glVertex2f(x - 1.5f, y + 0.5f);
        glVertex2f(x, y);
        glVertex2f(x + 1.5f, y + 0.5f);
    glEnd();
}
void drawStars0() {
    glPointSize(1.5f);
    glBegin(GL_POINTS);
    glColor3f(1.0f, 1.0f, 1.0f);
    for (int i = 0; i < 50; i++) {
        float x = (i * 7) % 100;
        float y = 50 + (i * i) % 40;
        glVertex2f(x, y);
    }
    glEnd();
}
void drawMoon(float x, float y, float radius) {
    glColor3f(0.9f, 0.9f, 0.95f);
    drawCircle(x, y, radius, 100);
    if (isNight) {
        glColor3f(0.01f, 0.0f, 0.02f);
        drawCircle(x - (radius * 0.6f), y + (radius * 0.2f), radius, 100);
    }
}
void drawRiver(float R, float G, float B) {
    glColor3f(R, G, B);
    glBegin(GL_QUADS);
        glVertex2f(0.0, 0.0);
        glVertex2f(100.0, 0.0);
        glVertex2f(100.0, 20.0);
        glVertex2f(0.0, 20.0);
    glEnd();
    if (isNight) {
        glColor3f(R + 0.1f, G + 0.1f, B + 0.2f);
    } else {
        glColor3f(1.0f, 1.0f, 1.0f);
    }
    glLineWidth(1.0f);
    for (float i = 0.0f; i < 100.0f; i += 10.0f) {
        glBegin(GL_LINES);
            glVertex2f(i, 5.0f);
            glVertex2f(i + 5.0f, 5.0f);
            glVertex2f(i + 5.0f, 15.0f);
            glVertex2f(i + 10.0f, 15.0f);
        glEnd();
    }
}
void drawBorder() {
    glColor3f(0.15f, 0.15f, 0.15f);
    drawRectangle(0.0, 20.0, 100.0, 44.0);
    //River side fence
    for (float x = 0.0f; x < 100.0f; x += 8.0f) {
        glColor3f(0.25f, 0.15f, 0.05f);
        drawRectangle(x, 19.0, x + 1.2, 23.0);
        // Horizontal Rails
        if (x < 92.0f) {
            glColor3f(0.35f, 0.2f, 0.1f);
            drawRectangle(x, 20.5, x + 8.0, 21.0); // Lower rail
            drawRectangle(x, 22.0, x + 8.0, 22.5); // Upper rail
        }
    }
    //Border between grass and road
    for (float x = 0.0f; x < 100.0f; x += 4.0f) {
        glColor3f(0.35f, 0.2f, 0.1f);
        drawRectangle(x, 43.5, x + 3.8, 44.5);
        glColor3f(0.45f, 0.3f, 0.2f);
        glBegin(GL_LINES);
            glVertex2f(x + 0.5f, 44.0f);
            glVertex2f(x + 3.3f, 44.0f);
        glEnd();
    }
    //Grass
    glColor3f(0.0f, 0.45f, 0.1f);
    drawRectangle(0.0f, 44.5f, 100.0f, 50.0f);
    for (float x = 0.0f; x < 100.0f; x += 1.5f) {
        glColor3f(0.0f, 0.35f, 0.05f);
        glBegin(GL_LINES);
            glVertex2f(x, 44.5f);
            glVertex2f(x - 0.2f, 45.5f);
        glEnd();
        glColor3f(0.2f, 0.6f, 0.2f);
        glBegin(GL_LINES);
            glVertex2f(x + 0.3f, 44.5f);
            glVertex2f(x + 0.5f, 46.5f);
        glEnd();
        if ((int)x % 8 == 0) {
            glColor3f(1.0f, 0.8f, 0.9f); //Flowers
            drawCircle(x + 0.5f, 47.0f, 0.25f, 5);
        }
    }
    //Road Dividers
    glColor3f(1.0f, 0.8f, 0.0f);
    drawRectangle(0.0, 31.7, 100.0, 32.2);
    drawRectangle(0.0, 32.8, 100.0, 33.3);
    glColor3f(1.0f, 1.0f, 1.0f);
    for (float x = 2.0f; x < 100.0f; x += 15.0f) {
        drawRectangle(x, 26.0f, x + 6.0f, 26.5f);
        drawRectangle(x, 37.5f, x + 6.0f, 38.0f);
    }
}
void drawSmallHouse(float x, float y) {
    //Stone
    glColor3f(0.4f, 0.4f, 0.4f);
    drawRectangle(x, y, x + 12.0f, y + 1.0f);
    //House body
    glColor3f(0.95f, 0.95f, 0.9f);
    drawRectangle(x + 1.0f, y + 1.0f, x + 11.0f, y + 7.0f);
    //Timber frames
    glColor3f(0.2f, 0.1f, 0.05f);
    drawRectangle(x + 1.0f, y + 1.0f, x + 2.0f, y + 7.0f); // Left post
    drawRectangle(x + 10.0f, y + 1.0f, x + 11.0f, y + 7.0f); // Right post
    //Roof
    glColor3f(0.2f, 0.2f, 0.2f);
    glBegin(GL_POLYGON);
        glVertex2f(x - 1.0f, y + 7.0f);
        glVertex2f(x + 13.0f, y + 7.0f);
        glVertex2f(x + 11.0f, y + 10.0f);
        glVertex2f(x + 1.0f, y + 10.0f);
    glEnd();
    //Door
    glColor3f(0.5f, 0.1f, 0.1f);
    drawRectangle(x + 5.0f, y + 1.0f, x + 7.0f, y + 5.0f);
    //Window
    glColor3f(0.7f, 0.9f, 1.0f);
    drawRectangle(x + 2.5f, y + 3.0f, x + 4.5f, y + 5.0f);
    glColor3f(0.2f, 0.1f, 0.05f); //Frame
    glLineWidth(1.0f);
    glBegin(GL_LINES);
        glVertex2f(x + 3.5f, y + 3.0f);
        glVertex2f(x + 3.5f, y + 5.0f);
        glVertex2f(x + 2.5f, y + 4.0f);
        glVertex2f(x + 4.5f, y + 4.0f);
    glEnd();
}
void drawBuilding(float x1, float y1, float x2, float y2, float R, float G, float B, float BR, float BG, float BB) {
    glColor3f(R, G, B);
    glBegin(GL_POLYGON);
    glVertex2f(x1, y1);
    glVertex2f(x2, y1);
    glVertex2f(x2, y2);
    glVertex2f(x1, y2);
    glEnd();
    //Border
    glColor3f(BR, BG, BB);
    glBegin(GL_LINE_LOOP);
    glVertex2i(x1, y1);
    glVertex2i(x2, y1);
    glVertex2i(x2, y2);
    glVertex2i(x1, y2);
    glEnd();
    glLineWidth(1.5f);
}
void drawWindow(int x, int y, float R, float G, float B, float BR, float BG, float BB) {
    int x1 = x;
    int y1 = y;
    int x2 = x + 2;
    int y2 = y + 2;
    glColor3f(R, G, B);
    glBegin(GL_POLYGON);
    glVertex2i(x1, y1);
    glVertex2i(x2, y1);
    glVertex2i(x2, y2);
    glVertex2i(x1, y2);
    glEnd();
    //Border
    glColor3f(BR, BG, BB);
    glBegin(GL_LINE_LOOP);
    glVertex2i(x1, y1);
    glVertex2i(x2, y1);
    glVertex2i(x2, y2);
    glVertex2i(x1, y2);
    glEnd();
    glLineWidth(1.5f);
}
void drawWindowGrid(int startX, int startY, int rows, int cols, int xSpacing, int ySpacing, float R, float G, float B, float BR, float BG, float BB) {
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            int x = startX + col * (2 + xSpacing); // 2 = window width
            int y = startY + row * (2 + ySpacing); // 2 = window height
            drawWindow(x, y, R, G, B, BR, BG, BB);
        }
    }
}
void drawDoor1(int x, int y, float R, float G, float B, float BR, float BG, float BB) {
    int x1 = x;
    int y1 = y;
    int x2 = x + 2;
    int y2 = y + 3;
    glColor3f(R, G, B);
    glBegin(GL_POLYGON);
    glVertex2i(x1, y1);
    glVertex2i(x2, y1);
    glVertex2i(x2, y2);
    glVertex2i(x1, y2);
    glEnd();
    //Border
    glColor3f(BR, BG, BB);
    glBegin(GL_LINE_LOOP);
    glVertex2i(x1, y1);
    glVertex2i(x2, y1);
    glVertex2i(x2, y2);
    glVertex2i(x1, y2);
    glEnd();
    glLineWidth(1.5f);
}
void drawBlueBus() {
    glPushMatrix();
    glTranslatef(car, 23.0f, 0.0f);
    //body
    glColor3f(0.0f, 0.3f, 0.6f);
    drawRectangle(0.0, 3.0, 15.0, 9.0);
    //front
    glBegin(GL_POLYGON);
        glVertex2f(15.0, 3.0);
        glVertex2f(17.0, 3.5);
        glVertex2f(17.5, 6.0);
        glVertex2f(16.5, 9.0);
        glVertex2f(15.0, 9.0);
    glEnd();
    if (isNight) {
        glColor3f(1.0f, 1.0f, 0.6f);
    }
    else {
    glColor3f(0.7f, 0.9f, 1.0f);
    }
    drawRectangle(1.0, 5.5, 4.0, 8.0);
    drawRectangle(5.0, 5.5, 8.0, 8.0);
    drawRectangle(9.0, 5.5, 12.0, 8.0);
    // Windshield
    glBegin(GL_QUADS);
        glVertex2f(13.0, 5.5);
        glVertex2f(16.5, 5.5);
        glVertex2f(16.0, 8.5);
        glVertex2f(13.0, 8.5);
    glEnd();
    //Wheels
    glColor3f(0.1f, 0.1f, 0.1f);
    drawCircle(3.5, 3.0, 1.8, 20);
    drawCircle(13.5, 3.0, 1.8, 20);
    //light
    if (isNight) {
            glColor3f(1.0f, 1.0f, 0.5f);
    }
    else {
            glColor3f(0.8f, 0.8f, 0.7f);
    }
    drawCircle(17.2, 4.5, 0.5, 10);
    //headlight
    if (isNight) {
        glColor3f(0.4f, 0.4f, 0.2f);
        glBegin(GL_TRIANGLES);
            glVertex2f(17.5, 4.5);
            glVertex2f(28.0, 7.0);
            glVertex2f(28.0, 2.0);
        glEnd();
    }
    glPopMatrix();
}
void updateCars(int value) {
    car += carSpeed;
    if (car > 160.0f) {
        car = -40.0f;
    }
    glutPostRedisplay();
    glutTimerFunc(30, updateCars, 0);
}
void drawBoat(float x, float y) {
    glPushMatrix();
    glTranslatef(x, y, 0.0f);
    glScalef(1.4f, 0.8f, 1.0f);
    //body
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
        glVertex2f(1.0, 5.5);
        glVertex2f(4.0, 1.0);
        glVertex2f(19.0, 1.0);
        glVertex2f(21.5, 5.5);
    glEnd();
    //headlight
    if (isNight) {
        glColor3f(0.5f, 0.5f, 0.2f);
        glBegin(GL_TRIANGLES);
            glVertex2f(21.5, 3.5);
            glVertex2f(35.0, 5.5);  // Upper beam
            glVertex2f(35.0, -2.0); // Lower beam
        glEnd();
    }
    //waterline
    glColor3f(1.0f, 0.84f, 0.0f);
    drawRectangle(3.2, 1.8, 19.8, 2.3);
    //port
    if (isNight) {
            glColor3f(1.0f, 1.0f, 0.2f);
    }
    else {
            glColor3f(0.0f, 0.2f, 0.4f);
    }
    for(float px = 6.0; px <= 16.0; px += 4.0) {
        drawCircle(px, 3.5, 0.6, 15);
    }
    //up cabin
    glColor3f(0.9f, 0.9f, 0.9f);
    drawRectangle(3.5, 5.5, 19.5, 8.5);
    //window
    if (isNight) {
            glColor3f(1.0f, 1.0f, 0.6f);
    }
    else {
            glColor3f(0.0f, 0.6f, 0.8f);
    }
    float wx[][4] = { {7,6.5,10,8}, {11.5,6.5,15,8}, {16,6.5,18.5,8} };
    for (int i = 0; i < 3; i++) {
        drawRectangle(wx[i][0], wx[i][1], wx[i][2], wx[i][3]);
    }
    //Deck
    glColor3f(0.6f, 0.4f, 0.2f);
    drawRectangle(4.5, 8.5, 18.5, 9.5);
    //chimney
    float chimneyX[] = { 8.5, 13.5 };
    for (int i = 0; i < 2; ++i) {
        float cx = chimneyX[i];
        glColor3f(0.1f, 0.1f, 0.1f);
        drawRectangle(cx, 9.5, cx + 1.8, 12.5);
        glColor3f(0.75f, 0.75f, 0.75f);
        drawRectangle(cx, 12.5, cx + 1.8, 13.2);
    }
    //radar
    glPushMatrix();
        glTranslatef(6.0, 9.5, 0);
        glColor3f(0.2f, 0.2f, 0.2f);
        drawRectangle(-0.1, 0, 0.1, 1.0);
        glTranslatef(0, 1.0, 0);
        glRotatef(radarAngle, 0, 1, 0);
        glColor3f(1.0f, 1.0f, 1.0f);
        drawRectangle(-1.2, 0, 1.2, 0.3);
    glPopMatrix();

    glPopMatrix();
}
void updateBoat(int value) {
    boat += boatSpeed;
    if (boat > 130.0f){
            boat = -30.0f;
    radarAngle += 5.0f; //speed of radar rotation
    }
    if (radarAngle > 360) {
            radarAngle -= 360;
    }
    glutPostRedisplay();
    glutTimerFunc(30, updateBoat, 0);
}
void drawRoofTier(float x1, float y1, float x2, float y2) {
    glColor3f(0.6f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(x1 - 3.0f, y1);     // Flared eave left
    glVertex2f(x2 + 3.0f, y1);     // Flared eave right
    glVertex2f(x2 + 1.0f, y2);
    glVertex2f(x1 - 1.0f, y2);
    glEnd();
    // Gold rim
    glColor3f(1.0f, 0.84f, 0.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(x1 - 3.0f, y1);
    glVertex2f(x2 + 3.0f, y1);
    glVertex2f(x2 + 1.0f, y2);
    glVertex2f(x1 - 1.0f, y2);
    glEnd();
}
void drawLantern(float x, float y) {
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_LINES);
    glVertex2f(x, y);
    glVertex2f(x, y - 1.5f);
    glEnd();
    glColor3f(1.0f, 0.2f, 0.0f); // Body
    drawCircle(x, y - 2.5f, 1.2f, 20);
    glColor3f(1.0f, 0.84f, 0.0f); // Gold tassel
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glVertex2f(x, y - 4.0f);
    glEnd();
}
void drawSakuraChristmasTree(float x, float y, float scale) {
    //trunk
    glColor3f(0.3f, 0.2f, 0.15f);
    drawRectangle(x - 0.5f * scale, y, x + 0.5f * scale, y + 4.0f * scale);
    //bottom layer
    glColor3f(0.9f, 0.3f, 0.6f);
    glBegin(GL_TRIANGLES);
        glVertex2f(x - 6.0f * scale, y + 3.0f * scale);
        glVertex2f(x + 6.0f * scale, y + 3.0f * scale);
        glVertex2f(x, y + 10.0f * scale);
    glEnd();
    //middle layer
    glColor3f(1.0f, 0.5f, 0.75f);
    glBegin(GL_TRIANGLES);
        glVertex2f(x - 5.0f * scale, y + 7.0f * scale);
        glVertex2f(x + 5.0f * scale, y + 7.0f * scale);
        glVertex2f(x, y + 14.0f * scale);
    glEnd();
    //top layer
    glColor3f(1.0f, 0.8f, 0.9f);
    glBegin(GL_TRIANGLES);
        glVertex2f(x - 3.5f * scale, y + 11.0f * scale);
        glVertex2f(x + 3.5f * scale, y + 11.0f * scale);
        glVertex2f(x, y + 17.0f * scale);
    glEnd();
    //blossom
    glColor3f(1.0f, 1.0f, 1.0f);
    drawCircle(x - 2.0f * scale, y + 6.0f * scale, 0.3f * scale, 10);
    drawCircle(x + 2.5f * scale, y + 9.0f * scale, 0.3f * scale, 10);
    drawCircle(x - 1.5f * scale, y + 12.0f * scale, 0.3f * scale, 10);
    drawCircle(x + 1.0f * scale, y + 14.0f * scale, 0.3f * scale, 10);
}
void drawDayScene() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    if (isNight) {
        drawSky(0.01f, 0.01f, 0.05f);
        // Stars
        glBegin(GL_POINTS);
        glColor3f(1.0f, 1.0f, 1.0f);
        for (int i = 0; i < 50; i++) {
            glVertex2f((i * 13) % 100, 55 + (i * 7) % 35);
        }
        glEnd();
        drawMoon(70.0f, 75.0f, 4.0f);
    } else {
        drawSky(0.5f, 0.8f, 1.0f);
        drawSun(10.0f, 85.0f, 4.0f);
        drawCloud(cloud, 82.0f, 0.8f);
        drawCloud(cloud - 40.0f, 78.0f, 0.6f);
        drawCloud(cloud + 45.0f, 85.0f, 0.5f);
        drawBird(65.0f, 80.0f);
        drawBird(68.0f, 82.0f);
    }
    //water
    if (isNight) {
            drawRiver(0.05f, 0.1f, 0.2f);
    }
    else {
            drawRiver(0.6f, 0.863f, 0.99f);
    }
    drawBorder();
    //houses and trees
    drawSmallHouse(35.0f, 50.0f);
    drawSmallHouse(65.0f, 50.0f);
    // Chinese House
    drawBuilding(78.0f, 50.0f, 92.0f, 65.0f, 0.6f, 0.0f, 0.0f, 0.4f, 0.0f, 0.0f);
    drawRoofTier(77.0f, 65.0f, 93.0f, 70.0f);
    drawBuilding(80.0f, 70.0f, 90.0f, 78.0f, 0.7f, 0.1f, 0.1f, 0.4f, 0.0f, 0.0f);
    drawRoofTier(79.0f, 78.0f, 91.0f, 84.0f);
    drawWindowGrid(82, 55, 1, 2, 2, 0, winR, winG, winB, 0.2f, 0.1f, 0.0f);
    drawDoor1(84, 50, 0.3f, 0.15f, 0.05f, 1.0f, 0.84f, 0.0f);
    drawLantern(76.0f, 65.0f);
    drawLantern(94.0f, 65.0f);
    // Pagoda
    drawBuilding(18.0f, 50.0f, 32.0f, 65.0f, 0.6f, 0.0f, 0.0f, 0.4f, 0.0f, 0.0f);
    drawRoofTier(17.0f, 65.0f, 33.0f, 70.0f);
    drawBuilding(20.0f, 70.0f, 30.0f, 78.0f, 0.7f, 0.1f, 0.1f, 0.4f, 0.0f, 0.0f);
    drawRoofTier(19.0f, 78.0f, 31.0f, 84.0f);
    drawWindowGrid(22, 55, 1, 2, 2, 0, winR, winG, winB, 0.2f, 0.1f, 0.0f);
    drawDoor1(24, 50, 0.3f, 0.15f, 0.05f, 1.0f, 0.84f, 0.0f);
    drawLantern(16.0f, 65.0f);
    drawLantern(34.0f, 65.0f);
    // Gatehouse
    drawBuilding(50.0f, 50.0f, 65.0f, 62.0f, 0.5f, 0.0f, 0.0f, 0.3f, 0.0f, 0.0f);
    drawRoofTier(48.0f, 62.0f, 67.0f, 68.0f);
    drawBuilding(53.0f, 68.0f, 62.0f, 74.0f, 0.6f, 0.0f, 0.0f, 0.3f, 0.0f, 0.0f);
    drawRoofTier(52.0f, 74.0f, 63.0f, 78.0f);
    drawWindowGrid(54, 54, 1, 2, 3, 0, winR, winG, winB, 0.2f, 0.1f, 0.0f);
    drawDoor1(56, 50, 0.3f, 0.15f, 0.05f, 1.0f, 0.84f, 0.0f);
    drawLantern(48.0f, 62.0f);
    drawLantern(67.0f, 62.0f);
    // Trees
    drawSakuraChristmasTree(8.0f, 50.0f, 1.2f);
    drawSakuraChristmasTree(60.0f, 50.0f, 1.0f);
    drawSakuraChristmasTree(94.0f, 50.0f, 0.8f);
    drawBoat(boat, 5.0f);
    drawBlueBus();

    glutSwapBuffers();
}
void display1() {
    glViewport(0, 0, glutGet(GLUT_WINDOW_WIDTH), glutGet(GLUT_WINDOW_HEIGHT));
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 100.0, 0.0, 90.0);  // Correct projection for this scene
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    // Rest of your existing code...
    if (china) {
        drawDayScene();
    }
}
void handleResize(int w, int h) {
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if (china) {
        gluOrtho2D(0.0, 100.0, 0.0, 90.0);
    }
    glMatrixMode(GL_MODELVIEW);
}
void keyboard(unsigned char key, int x, int y) {
    switch(key) {
        case 'n': case 'N':
            isDay = false;
            break;
        case 'd': case 'D':
            isDay = true;
            break;
        case 'w': case 'W':
            globalSpeed += 0.2f;
            break;
        case 's': case 'S':
            if(globalSpeed > 0.2) globalSpeed -= 0.2f;
            break;
        case 'i': case 'I':
             isSnowing = !isSnowing;
              break;
        case 'r': case 'R':
            isTurbineRotating = !isTurbineRotating;
            break;
    }
}

void handleKeypress(unsigned char key, int x, int y)
{
    switch (key)
	{
        case 'w':
            speed += 0.5;
			globalSpeed += 0.2f;
            break;

        case 's':
            speed -= 0.5;
			if(globalSpeed > 0.2) globalSpeed -= 0.2f;
            if (speed < 0) speed = 0;
        break;

        case 'd':
            moveSun = -60;
			isNight = false;
			isDay = true;
            break;
		case 'i': case 'I':
             isSnowing = !isSnowing;
             break;
	    case 'r': case 'R':
            isTurbineRotating = !isTurbineRotating;
            break;
      case '1':
           glutDisplayFunc(display0_view);
       break;

      case '2':
          glutDisplayFunc(display1);
          break;
	  case '3':
          glutDisplayFunc(display2);
          break;
	  case '4':
          glutDisplayFunc(display3);
          break;
	  case 'n':
          isNight = true;
		  isDay = false;
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
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(1920, 1080);
    glutCreateWindow("Combined Animation: Transitions, Swiss Alpine, City View, Bridge & Village");
    initSnow();
    glutDisplayFunc(display0_view);
    glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);
    glutReshapeFunc(handleResize);
    glutTimerFunc(16, updateBoats, 0);
    glutTimerFunc(20, sunUpdateRise, 0);
    glutTimerFunc(22, update1, 0);
    glutTimerFunc(22, update2, 0);
    glutTimerFunc(22, update3, 0);
    glutTimerFunc(22, update4, 0);
    glutTimerFunc(22, update5, 0);
    glutTimerFunc(22, update6, 0);
    glutTimerFunc(0, update, 0);
    glutTimerFunc(0, updateClouds, 0);
    glutTimerFunc(0, updateBoat, 0);
    glutTimerFunc(0, updateCars, 0);
    glutMainLoop();
    return 0;
}
