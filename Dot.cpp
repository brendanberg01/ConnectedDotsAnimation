//
// Created by Brendan Berg on 26.04.20.
//

#include "Dot.hpp"

#include <iostream>
#include <random>


Dot::Dot(unsigned int canvasWidth, unsigned int canvasHeight, int maxVelocity)
    : m_CanvasWidth(canvasWidth), m_CanvasHeight(canvasHeight)
{
    std::random_device rd;
    std::mt19937 gen(rd());

    {
        std::uniform_int_distribution<int> dis(0, canvasWidth);
        m_PositionX = dis(gen);
    }

    {
        std::uniform_int_distribution<int> dis(0, canvasHeight);
        m_PositionY = dis(gen);
    }

    {
        std::uniform_int_distribution<int> dis(-maxVelocity, maxVelocity);
        m_VelocityX = dis(gen);
        m_VelocityY = dis(gen);
    }

    std::clog << "Constructed Dot at [" << m_PositionX << ", " << m_PositionY << "] with velocity vector [" << m_VelocityX << ", " << m_VelocityY << "]" << std::endl;
}


void Dot::Update()
{
    m_PositionX += m_VelocityX;
    m_PositionX = abs(m_PositionX);
    if (m_PositionX >= m_CanvasWidth)
    {
        m_PositionX = 2 * m_CanvasWidth - m_PositionX;
    }

    m_PositionY += m_VelocityY;
    m_PositionY = abs(m_PositionY);
    if (m_PositionY >= m_CanvasHeight)
    {
        m_PositionY = 2 * m_CanvasHeight - m_PositionY;
    }
}
