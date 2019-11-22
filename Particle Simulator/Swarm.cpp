//
//  Swarm.cpp
//  Particle Simulator
//
//  Created by Dongyoon Lee on 2019-11-22.
//  Copyright © 2019 sucilus. All rights reserved.
//

#include "Swarm.hpp"

Swarm::Swarm() {
    m_pParticles = new Particle[NPARTICLES];
}

Swarm::~Swarm() {
    delete [] m_pParticles;
}

void Swarm::update() {
    for(int i=0 ; i<Swarm::NPARTICLES; i++) {
        m_pParticles[i].update();
    }
}
