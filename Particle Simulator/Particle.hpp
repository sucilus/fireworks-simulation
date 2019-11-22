//
//  Particle.hpp
//  Particle Simulator
//
//  Created by Dongyoon Lee on 2019-11-22.
//  Copyright © 2019 sucilus. All rights reserved.
//

#ifndef Particle_hpp
#define Particle_hpp
#include <stdlib.h>

#include <stdio.h>
struct Particle {
    double m_x;
    double m_y;
    double m_xspeed;
    double m_yspeed;
    
public:
    Particle();
    virtual ~Particle();
    void update();
};

#endif /* Particle_hpp */
