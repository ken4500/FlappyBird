//
//  HighScoreManager.cpp
//  FlappyBird
//
//  Created by Fumiya Amano on 2016/05/13.
//
//

#include "HighScoreManager.hpp"
using namespace cocos2d;

void HighScoreManager::saveHighScore(int score)
{
    UserDefault* userDef = UserDefault::getInstance();
    userDef->setIntegerForKey("highScore", score);
}

int HighScoreManager::loadHighScore()
{
    UserDefault* userDef = UserDefault::getInstance();
    int highScore = userDef->getIntegerForKey("highScore", 0);
    return highScore;
}