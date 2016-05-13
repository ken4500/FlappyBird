//
//  MedalReader.cpp
//  FlappyBird
//
//  Created by Ken Watanabe on 2016/05/12.
//
//

#include "MedalReader.h"
#include "MedalBoard.h"

using namespace cocos2d;

static MedalReader* _instanceMedalReader = nullptr;

MedalReader* MedalReader::getInstance() {
    if (!_instanceMedalReader) {
        _instanceMedalReader = new MedalReader();
    }
    return _instanceMedalReader;
}

void MedalReader::purge() {
    CC_SAFE_DELETE(_instanceMedalReader);
}

Node* MedalReader::createNodeWithFlatBuffers(const flatbuffers::Table *nodeOptions) {
    MedalBoard* node = MedalBoard::create();
    setPropsWithFlatBuffers(node, nodeOptions);
    return node;
}
