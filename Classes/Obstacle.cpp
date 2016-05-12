//
//  Obstacle.cpp
//  FlappyBird
//
//  Created by Ken Watanabe on 2016/05/12.
//
//

#include "Obstacle.h"
using namespace cocos2d;

bool Obstacle::init() {
    if (!Node::init()) {
        return false;
    }

    // load the character animation timeline
    this->timeline = CSLoader::createTimeline("Obstacle.csb");
    // retain the character animation timeline so it doesn't get deallocated
    this->timeline->retain();

    return true;
}

void Obstacle::moveLeft(float distance)
{
    this->setPosition(this->getPosition() + Vec2(-distance, 0));
}

std::vector<Rect> Obstacle::getRects()
{
    std::vector<Rect> rects;
    auto pipeTop = this->getChildByName<Sprite*>("pipe_top");
    auto pipeBottom = this->getChildByName<Sprite*>("pipe_bottom");
    
    auto pipeTopRect = pipeTop->getBoundingBox();
    auto pipeBottomRect = pipeBottom->getBoundingBox();
    pipeTopRect.origin += this->getPosition();
    pipeBottomRect.origin += this->getPosition();
    rects.push_back(pipeTopRect);
    rects.push_back(pipeBottomRect);
    
    return rects;
}