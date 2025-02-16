#pragma once
#include <vector>
#include <memory>

class Game {
private: 
    std::vector<std::unique_ptr<int>> items;

public:
    Game();
    ~Game();

    void loop();
};