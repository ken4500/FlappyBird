//
//  medalBoard.cpp
//  FlappyBird
//
//  Created by Eiji Ito on 2016/05/13.
//
//

#include "MedalBoard.h"
using namespace cocos2d;

bool MedalBoard::init() {
    if (!Node::init()) {
        return false;
    }
    
    //this->bronze = Sprite::create("Assets/medal/medal_bronze.png");
    
    // load the character animation timeline
    this->timeline = CSLoader::createTimeline("Medal.csb");
    // retain the character animation timeline so it doesn't get deallocated
    this->timeline->retain();
    
    //this->addChild(this->bronze);
    return true;
}

void MedalBoard::displayMedalByScore(int score)
{
    this->setPosition(Vec2(144, 0));
    this->runAction(EaseSineOut::create(MoveBy::create(0.8f, Vec2(0.0f, 358.0f))));
    
    auto board = this->getChildByName("board");
    if(score < 10)
    {
        return;
    } else if(score < 20)
    {
        board->getChildByName("medal_bronze")->setVisible(true);
    } else if(score < 30)
    {
        board->getChildByName("metal_silver")->setVisible(true);
    } else if(score < 40)
    {
        board->getChildByName("medal_gold")->setVisible(true);
    } else {
        board->getChildByName("metal_platium")->setVisible(true);
    }
    
//    this->bronze->setPosition(Vec2(0, 0));
//    Sprite* sprite = Sprite::create();
//    sprite->setTextureRect(Rect(0,0,100,100));
//    sprite->setColor(Color3B::WHITE);
//    this->addChild(sprite);
}