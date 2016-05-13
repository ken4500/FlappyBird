//
//  Medal.h
//  FlappyBird
//
//  Created by Eiji Ito on 2016/05/13.
//
//

#ifndef __FlappyBird__MedalBoard__
#define __FlappyBird__MedalBoard__

#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"

class MedalBoard : public cocos2d::Node {
public:
    CREATE_FUNC(MedalBoard);
    bool init() override;
    void displayMedalByScore(int score);
    
protected:
    //cocos2d::Sprite* medal;
    cocostudio::timeline::ActionTimeline* timeline;
    
    
};

#endif /* defined(__FlappyBird__Medal__) */
