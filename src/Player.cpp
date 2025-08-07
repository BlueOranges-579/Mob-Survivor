//
// Created by blueoranges on 8/6/25.
//

#include "../include/Player.h"

Player::Player() {
    mSpeed = 10.0f;
    mPlayerPosition.x = 10;
    mPlayerPosition.y = 590;
}

void Player::InitPlayer(){
    DrawCircleV(mPlayerPosition, 10, WHITE);
}

void Player::UpdatePlayer() {
    if (IsKeyDown(KEY_A)) {
        mPlayerPosition.x = mPlayerPosition.x - (1 * mSpeed);
        if (mPlayerPosition.x < 10) {
            mPlayerPosition.x = 10;
        }
    }
    if (IsKeyDown(KEY_D)) {
        mPlayerPosition.x = mPlayerPosition.x + (1 * mSpeed);
        if (mPlayerPosition.x > static_cast<float>(GetScreenWidth()) - 10.0f) {
            mPlayerPosition.x = static_cast<float>(GetScreenWidth()) - 10.0f;
        }
    }
}

void Player::MovePlayer() {

}
