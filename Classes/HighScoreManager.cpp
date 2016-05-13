//
//  HighScoreManager.cpp
//  FlappyBird
//
//  Created by Fumiya Amano on 2016/05/13.
//
//

#include "HighScoreManager.hpp"
#include "Constants.h"
USING_NS_CC;

void HighScoreManager::registerCurrentScore(int score)
{
    UserDefault* userDef = UserDefault::getInstance();
    if (score > userDef->getIntegerForKey(KEY_HIGHSCORE.c_str(), 0))
    {
        userDef->setIntegerForKey(KEY_HIGHSCORE.c_str(), score);
    }
}

int HighScoreManager::getHighScore()
{
    UserDefault* userDef = UserDefault::getInstance();
    int highScore = userDef->getIntegerForKey(KEY_HIGHSCORE.c_str(), 0);
    return highScore;
}