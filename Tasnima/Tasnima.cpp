#include <iostream>
#include <cmath>
#include <GL/gl.h>
#include <GL/glut.h>
#define PI 3.1416

bool china = true;
float cloud = 50.0f;
float cloudSpeed = 0.02f;
float boat = 30.0f;
float boatSpeed = 0.2f;
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
void drawStars() {
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
void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
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
void handleKeypress(unsigned char key, int x, int y) {
    switch (key) {
        case 'n':
            case 'N':
                isNight = true;
                break;
        case 'd':
            case 'D':
                isNight = false;
                break;
        case 27:
            exit(0); // ESC
    }
    glutPostRedisplay();
}
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(1200, 800);
    glutCreateWindow("City_View_2D");
    //initRendering();
    glutDisplayFunc(display);
    glutKeyboardFunc(handleKeypress);
    glutReshapeFunc(handleResize);
    glutTimerFunc(0, updateClouds, 0);
    glutTimerFunc(0, updateBoat, 0);
    glutTimerFunc(0, updateCars, 0);
    glutMainLoop();
    return 0;
}
