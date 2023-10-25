#pragma once
#ifndef PROTOTYPERAPIDFIRE_PLAYERSTATE_H
#define PROTOTYPERAPIDFIRE_PLAYERSTATE_H

#include "godot_cpp/classes/node.hpp"
#include "godot_cpp/godot.hpp"

namespace swipeRpg::gameplayModule {
    class playerState : public godot::Node {
        GDCLASS(playerState, godot::Node)
    private:
        static void _bind_methods();

    public:
        //
    };
}// namespace swipeRpg::gameplayModule

#endif// PROTOTYPERAPIDFIRE_PLAYERSTATE_H
