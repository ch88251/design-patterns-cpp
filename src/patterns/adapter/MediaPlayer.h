#ifndef MEDIAPLAYER_H
#define MEDIAPLAYER_H

#include <string>

class MediaPlayer {
public:
    virtual void play(const std::string& audioType, const std::string& fileName) = 0;

};
#endif