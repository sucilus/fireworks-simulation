//
//  Particle.cpp
//  Particle Simulator
//
//  Created by Dongyoon Lee on 2019-11-22.
//  Copyright © 2019 sucilus. All rights reserved.
//

#include "Particle.hpp"
#include <stdlib.h>
#include <math.h>

Particle::Particle(): m_x(0), m_y(0) {
    init();
};

Particle::~Particle() {
    
};

void Particle::init() {
    m_x = 0; m_y = 0;
    m_direction = (2 * M_PI * (rand()))/RAND_MAX;
    m_speed = (0.04 * rand())/RAND_MAX;
    
    m_speed *= m_speed; //this makes the distances between particles greater as it goes outward

}

void Particle::update(int interval) {
    //interval to overcome the speed difference between different computers
    m_direction += interval * 0.0003 ; // curl
    
    double xspeed = m_speed * cos(m_direction);
    double yspeed = m_speed * sin(m_direction);
    
    m_x += xspeed * interval;
    m_y += yspeed * interval;
    
    if (m_x < - 1 || m_x > 1 || m_y < -1 || m_y > 1) {
        init();
    }
    if(rand() < RAND_MAX/100) {
        init();
    }
}

