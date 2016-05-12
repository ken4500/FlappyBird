//
//  Character.h
//  FlappyBird
//
//  Created by Ken Watanabe on 2016/05/11.
//
//

#ifndef __FlappyBird__Character__
#define __FlappyBird__Character__

#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"

class Character : public cocos2d::Node {
public:
    CREATE_FUNC(Character);
    bool init() override;
    void onEnter() override;
    void update(float dt) override;
    void jump();
    cocos2d::Rect getRect();

protected:
    cocostudio::timeline::ActionTimeline* timeline;
    
    float velocity;
    float accel;

};

#endif /* defined(__FlappyBird__Character__) */
