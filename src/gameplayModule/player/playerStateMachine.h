#pragma once
#ifndef RAPIDFIRE_PLAYERSTATEMACHINE_H
#define RAPIDFIRE_PLAYERSTATEMACHINE_H

#include "godot_cpp/classes/node.hpp"
#include "godot_cpp/godot.hpp"

namespace rapidFire::gameplayModule {
    class playerStateMachine : public godot::Node {
        GDCLASS(playerStateMachine, godot::Node)
    private:
        static void _bind_methods();

    public:
        //
    };
}// namespace rapidFire::gameplayModule

#endif// RAPIDFIRE_PLAYERSTATEMACHINE_H
