//
//  Swarm.hpp
//  Particle Simulator
//
//  Created by Dongyoon Lee on 2019-11-22.
//  Copyright © 2019 sucilus. All rights reserved.
//

#ifndef Swarm_hpp
#define Swarm_hpp
#include "Particle.hpp"
#include <stdio.h>
class Swarm {
public:
    const static int NPARTICLES = 1000;
private:
    Particle * m_pParticles;
public:
    Swarm();
    virtual ~Swarm();
    void update();
    
    const Particle * const getParticles() { return m_pParticles; };
};
#endif /* Swarm_hpp */
