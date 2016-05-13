//
//  MedalReader.h
//  FlappyBird
//
//  Created by Ken Watanabe on 2016/05/12.
//
//

#ifndef __FlappyBird__MedalReader__
#define __FlappyBird__MedalReader__

#include "cocos2d.h"
#include "cocostudio/WidgetReader/NodeReader/NodeReader.h"

class MedalReader : public cocostudio::NodeReader {
public:
    static MedalReader* getInstance();
    static void purge();
    cocos2d::Node* createNodeWithFlatBuffers(const flatbuffers::Table* nodeOptions);
};

#endif /* defined(__FlappyBird__Medal__) */
