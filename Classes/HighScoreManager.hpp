//
//  HighScoreManager.hpp
//  FlappyBird
//
//  Created by Fumiya Amano on 2016/05/13.
//
//

#ifndef HighScoreManager_hpp
#define HighScoreManager_hpp

class HighScoreManager {

public:
    void registerCurrentScore(int score);
    int getHighScore();

};

#endif /* HighScoreManager_hpp */
