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
void display() {
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

void initSnow() {
    for (int i = 0; i < MAX_SNOW; i++) {
        snowX[i] = (rand() % 500) - 250;
        snowY[i] = (rand() % 500) - 250;
    }
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1200, 800);
    glutCreateWindow("Swiss Alpine Scene - Bus Added");
    initSnow();
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-250, 250, -250, 250);
    glMatrixMode(GL_MODELVIEW);
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutTimerFunc(0, update, 0);
    glutMainLoop();
    return 0;
}
