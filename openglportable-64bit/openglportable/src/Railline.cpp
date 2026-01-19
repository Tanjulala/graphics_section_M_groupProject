#include "Railline.h"

Railline::Railline()
{
    //ctor
}

Railline::~Railline()
{
    //dtor
}

void Railline::draw()
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
