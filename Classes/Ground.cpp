//
//  Ground.cpp
//  FlappyBird
//
//  Created by Ken Watanabe on 2016/05/13.
//
//

#include "Ground.h"
using namespace cocos2d;

bool Ground::init() {
    if (!Node::init()) {
        return false;
    }

    // load the character animation timeline
    this->timeline = cocos2d::CSLoader::createTimeline("Ground.csb");
    // retain the character animation timeline so it doesn't get deallocated
    this->timeline->retain();
    
    return true;
}

void Ground::onEnter()
{
    Node::onEnter();

    auto ground1 = this->getChildByName<Sprite*>("ground1");
    auto ground2 = this->getChildByName<Sprite*>("ground2");
    this->groundImages.pushBack(ground1);
    this->groundImages.pushBack(ground2);
}


void Ground::moveLeft(float distance)
{
    for(auto groundImage : this->groundImages) {
        groundImage->setPosition(groundImage->getPosition() + Vec2(-distance, 0));
        if (groundImage->getPositionX() <= 0.0f) {
            groundImage->setPosition(groundImage->getPosition() + Vec2(groundImage->getContentSize().width * 2, 0));
        }
    }
}
