#include <GL/glut.h>
#include <bits/stdc++.h>
using namespace std;

float TrainPosition =-0.0;

void circle(float radius, float xc, float yc, float r, float g, float b);
void sky();
void Railline();
void road();
void Train();

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    sky();
    road();
    Railline();
    Train();
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
void circle(float radius, float xc, float yc, float r, float g, float b)
{
    glBegin(GL_POLYGON);
    for (int i=0;i<200;i++){
        glColor3f(r, g, b);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = radius;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + xc, y + yc);
    }
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
void road()
{
    glBegin(GL_POLYGON);
    glColor3b(0, 0, 0);
    glVertex2f(-250.0f, -15.0f);
    glVertex2f(-250.0f, -55.0f);
    glVertex2f(250.0f, -55.0f);
    glVertex2f(250.0f, -15.0f);
    glEnd();
}
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
