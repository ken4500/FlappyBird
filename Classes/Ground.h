//
//  Ground.h
//  FlappyBird
//
//  Created by Ken Watanabe on 2016/05/13.
//
//

#ifndef __FlappyBird__Ground__
#define __FlappyBird__Ground__

#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"

class Ground : public cocos2d::Node {
public:
    CREATE_FUNC(Ground);
    bool init() override;
    void onEnter() override;
    void moveLeft(float distance);

protected:
    cocostudio::timeline::ActionTimeline* timeline;
    cocos2d::Vector<cocos2d::Sprite*> groundImages;
};

#endif /* defined(__FlappyBird__Ground__) */
