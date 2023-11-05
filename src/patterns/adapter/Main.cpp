// Main.cpp
#include "MediaPlayer.h"
#include "MediaAdapter.h"

int main() {
    MediaPlayer* player = new MediaAdapter("vlc");
    player->play("vlc", "sample.vlc");

    player = new MediaAdapter("mp4");
    player->play("mp4", "sample.mp4");

    return 0;
}
