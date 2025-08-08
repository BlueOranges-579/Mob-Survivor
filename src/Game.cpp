//
// Created by blueoranges on 8/5/25.
//

#include "../include/Game.h"
#include <raylib.h>

#include "../include/Player.h"
Player mPlayer;   // TODO:: Fix global variable

Game::Game() {
    RenderWindow();
}

void Game::UpdateWindow(int windowWidth, int windowHeight) {
    this->mWindowWidth = windowWidth;
    this->mWindowHeight = windowHeight;
}

void Game::RenderWindow() const {
    InitWindow(mWindowWidth, mWindowHeight, "Mob Survivor");
    SetTargetFPS(60);
}

void Game::InitGame() {
    while (!WindowShouldClose()) {
        UpdateGame();
        DrawGame();
    }
    CloseWindow();
}

void Game::UpdateGame() {
    mPlayer.UpdatePlayer();
 }

void Game::DrawGame() {
    BeginDrawing();
    ClearBackground(BLACK);
    mPlayer.InitPlayer();
    mPlayer.DrawHealth();
    EndDrawing();
}