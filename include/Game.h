//
// Created by blueoranges on 8/5/25.
//

#ifndef GAME_H
#define GAME_H
#include "Player.h"


class Game {
private:

    int mWindowWidth = 800;
    int mWindowHeight = 600;
public:
    Game();
    void UpdateWindow(int, int);
    void RenderWindow() const;
    void InitGame();
    void DrawGame();
    void UpdateGame();
};



#endif //GAME_H
