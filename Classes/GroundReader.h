//
//  GroundReader.h
//  FlappyBird
//
//  Created by Ken Watanabe on 2016/05/13.
//
//

#ifndef __FlappyBird__GroundReader__
#define __FlappyBird__GroundReader__

#include "cocos2d.h"
#include "cocostudio/WidgetReader/NodeReader/NodeReader.h"

class GroundReader : public cocostudio::NodeReader {
public:
    static GroundReader* getInstance();
    static void purge();
    cocos2d::Node* createNodeWithFlatBuffers(const flatbuffers::Table* nodeOptions);
};

#endif /* defined(__FlappyBird__Ground__) */
