//
// Created by blueoranges on 8/6/25.
//

#ifndef MOBSURVIVOR_PLAYER_H
#define MOBSURVIVOR_PLAYER_H

#include <raylib.h>

class Player {
private:
    Vector2 mWindowPosition;
    Vector2 mPlayerPosition;
    float mSpeed;
    int mHealth;
    bool mHit;
public:
    Player();
    void InitPlayer();
    void MovePlayer();
    void UpdatePlayer();

};


#endif //MOBSURVIVOR_PLAYER_H