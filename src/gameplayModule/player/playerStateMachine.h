#pragma once
#ifndef PROTOTYPERAPIDFIRE_PLAYERSTATEMACHINE_H
#define PROTOTYPERAPIDFIRE_PLAYERSTATEMACHINE_H

#include "godot_cpp/classes/node.hpp"
#include "godot_cpp/godot.hpp"

namespace swipeRpg::gameplayModule {
    class playerStateMachine : public godot::Node {
        GDCLASS(playerStateMachine, godot::Node)
    private:
        static void _bind_methods();

    public:
        //
    };
}// namespace swipeRpg::gameplayModule

#endif// PROTOTYPERAPIDFIRE_PLAYERSTATEMACHINE_H
