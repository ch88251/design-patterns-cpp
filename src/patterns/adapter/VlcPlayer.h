#ifndef VLCPLAYER_H
#define VLCPLAYER_H

#include "AdvancedMediaPlayer.h"
#include <iostream>

class VlcPlayer : public AdvancedMediaPlayer {
public:
    void playVlc(const std::string& fileName) {
        std::cout << "Playing vlc file: " << fileName << std::endl;
    }

    void playMp4(const std::string& fileName) {
        // Do nothing
    }
};

#endif
