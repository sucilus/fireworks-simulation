//
//  Swarm.cpp
//  Particle Simulator
//
//  Created by Dongyoon Lee on 2019-11-22.
//  Copyright © 2019 sucilus. All rights reserved.
//

#include "Swarm.hpp"

Swarm::Swarm(): lastTime(0) {
    m_pParticles = new Particle[NPARTICLES];
}

Swarm::~Swarm() {
    delete [] m_pParticles;
}

void Swarm::update(int elapsed) {
    int interval = elapsed - lastTime;
    for(int i=0 ; i<Swarm::NPARTICLES; i++) {
        m_pParticles[i].update(interval);
    }
    
    lastTime = elapsed;
}
