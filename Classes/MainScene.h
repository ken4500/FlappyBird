#ifndef __MAIN_SCENE_H__
#define __MAIN_SCENE_H__

#include "cocos2d.h"

class Character;
#include "Obstacle.h"

enum class State {
    Ready,
    Playing,
    GameOver
};

class MainScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();
    virtual bool init() override;
    void onEnter() override;
    void update(float dt) override;

    // implement the "static create()" method manually
    CREATE_FUNC(MainScene);

private:
    Character* character;
    cocos2d::Vector<Obstacle*> obstacles;
    cocos2d::Node* background;
    State state;
    
    void setupTouchHandling();
    void createObstacle(float dt);
    void triggerReady();
    void triggerPlaying();
    void triggerGameOver();
};

#endif // __MAIN_SCENE_H__
