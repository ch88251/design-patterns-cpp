#ifndef ADVANCEDMEDIAPLAYER_H
#define ADVANCEDMEDIAPLAYER_H

#include <string>

class AdvancedMediaPlayer {
public:
    virtual void playVlc(const std::string& fileName) = 0;
    virtual void playMp4(const std::string& fileName) = 0;
};
#endif