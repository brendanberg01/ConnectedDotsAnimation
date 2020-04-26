//
// Created by Brendan Berg on 26.04.20.
//

#ifndef CONNECTEDDOTSANIMATION_DOT_HPP
#define CONNECTEDDOTSANIMATION_DOT_HPP


class Dot
{
public:

    Dot (unsigned int canvasWidth, unsigned int canvasHeight, int maxVelocity);

    void Update ();


private:

    unsigned int m_CanvasWidth;
    unsigned int m_CanvasHeight;

    int m_PositionX = 0u;
    int m_PositionY = 0u;

    int m_VelocityX = 0;
    int m_VelocityY = 0;
};


#endif //CONNECTEDDOTSANIMATION_DOT_HPP
