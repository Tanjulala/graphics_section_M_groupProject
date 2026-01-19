#ifndef TRAIN_H
#define TRAIN_H

#include <GL/glut.h>

class Train
{
    public:
        Train();
        virtual ~Train();
        void draw();
        void circle(float radius, float xc, float yc, float r, float g, float b);
    protected:

    private:
};

#endif // TRAIN_H
