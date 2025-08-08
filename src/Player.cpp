//
// Created by blueoranges on 8/6/25.
//

#include "../include/Player.h"

Player::Player() {
    mSpeed = 10.0f;
    mPlayerPosition.x = 10;
    mPlayerPosition.y = 590;
    mRadius = 10;
    mHit = false;
    mHealth = MAX_HEALTH;
}

void Player::InitPlayer(){
    DrawCircleV(mPlayerPosition,mRadius, WHITE);
}

void Player::UpdatePlayer() {
    UpdateHealth();
    MovePlayer();
}

void Player::MovePlayer() {
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
    // Shoot if spacebar is clicked
    if (IsKeyDown(KEY_SPACE)) {
        // TODO:: Add the bullets
    }
}

void Player::UpdateHealth() {
  //  if (CheckCollisionCircles(mPlayerPosition, mRadius, // Enemies position))
    if (mHit) {
        mHealth -= 1;
    }
}

void Player::DrawHealth() {
    DrawText("Health: ", 10, 10, 20, WHITE);
    Vector2 healthPos = {20, 40};
    for (int i = 0 ; i < mHealth; i++) {
        DrawCircleV(healthPos, 5, WHITE);
        healthPos.x += 20;
    }
}