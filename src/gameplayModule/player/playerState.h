#pragma once
#ifndef RAPIDFIRE_PLAYERSTATE_H
#define RAPIDFIRE_PLAYERSTATE_H

#include "godot_cpp/classes/node.hpp"
#include "godot_cpp/godot.hpp"

namespace rapidFire::gameplayModule {
    class playerState : public godot::Node {
        GDCLASS(playerState, godot::Node)
    private:
        static void _bind_methods();

    public:
        //
    };
}// namespace rapidFire::gameplayModule

#endif// RAPIDFIRE_PLAYERSTATE_H
