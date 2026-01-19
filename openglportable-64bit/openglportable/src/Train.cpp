#include "Train.h"
#include <bits/stdc++.h>

Train::Train()
{
    //ctor
}

Train::~Train()
{
    //dtor
}
float TrainPosition =400.0;

void Train::circle(float radius, float xc, float yc, float r, float g, float b){
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

void Train::draw()
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
