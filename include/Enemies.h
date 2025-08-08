//
// Created by blueoranges on 8/8/25.
//

#ifndef MOBSURVIVOR_ENEMIES_H
#define MOBSURVIVOR_ENEMIES_H
#include "raylib.h"
#include "Player.h"


class Enemies: public Player {
private:
    enum mShapes {CIRCLE, RECTANGLE, TRIANGLE};
public:
    Enemies();
};


#endif //MOBSURVIVOR_ENEMIES_H