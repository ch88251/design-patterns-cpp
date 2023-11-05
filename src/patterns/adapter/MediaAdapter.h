// MediaAdapter.h
#ifndef MEDIAADAPTER_H
#define MEDIAADAPTER_H

#include "MediaPlayer.h"
#include "AdvancedMediaPlayer.h"

class MediaAdapter : public MediaPlayer {
private:
    AdvancedMediaPlayer* advancedPlayer;

public:
    MediaAdapter(const std::string& audioType);
    void play(const std::string& audioType, const std::string& fileName);
};

#endif
