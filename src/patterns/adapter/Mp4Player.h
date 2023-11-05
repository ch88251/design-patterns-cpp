#ifndef MP4PLAYER_H
#define MP4PLAYER_H

#include "AdvancedMediaPlayer.h"
#include <iostream>

class Mp4Player : public AdvancedMediaPlayer {
public:
    void playVlc(const std::string& fileName) {
        // Do nothing
    }

    void playMp4(const std::string& fileName) {
        std::cout << "Playing mp4 file: " << fileName << std::endl;
    }
};

#endif
