#ifndef __MAIN_SCENE_H__
#define __MAIN_SCENE_H__

#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "Obstacle.h"
class Character;
class Ground;

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
    void updateReady(float dt);
    void updatePlaying(float dt);
    void updateGameOver(float dt);

    // implement the "static create()" method manually
    CREATE_FUNC(MainScene);

private:
    Character* character;
    Ground* ground;
    cocos2d::Vector<Obstacle*> obstacles;
    cocos2d::Node* background;
    State state;
    cocos2d::ui::TextBMFont* scoreLabel;
    int score;
    cocostudio::timeline::ActionTimeline* timeline;
    
    void setupTouchHandling();
    void createObstacle(float dt);
    void triggerReady();
    void triggerPlaying();
    void triggerGameOver();
    void setScore(int score);
};

#endif // __MAIN_SCENE_H__
