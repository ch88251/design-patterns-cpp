#include "MediaAdapter.h"
#include "VlcPlayer.h"
#include "Mp4Player.h"

MediaAdapter::MediaAdapter(const std::string& audioType) {
    if (audioType == "vlc") {
        advancedPlayer = new VlcPlayer();
    } else if (audioType == "mp4") {
        advancedPlayer = new Mp4Player();
    }
}

void MediaAdapter::play(const std::string& audioType, const std::string& fileName) {
    if (audioType == "vlc") {
        advancedPlayer->playVlc(fileName);
    } else if (audioType == "mp4") {
        advancedPlayer->playMp4(fileName);
    }
}
