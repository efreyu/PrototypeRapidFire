#pragma once
#ifndef RAPIDFIRE_PLAYERSTATE_H
#define RAPIDFIRE_PLAYERSTATE_H

#include "godot_cpp/classes/input_event.hpp"
#include "godot_cpp/classes/node.hpp"
#include "godot_cpp/classes/ref.hpp"
#include "godot_cpp/godot.hpp"

namespace rapidFire::gameplayModule {

    // forward declaration
    class playerStateMachine;

    class playerState : public godot::Node {
        GDCLASS(playerState, godot::Node)
    private:
        static void _bind_methods();

    public:
        playerState();
        ~playerState();
        void unhandled_input(const godot::Ref<godot::InputEvent>& event);
        void process(double delta);
        void physics_process(double delta);
        void enter(const godot::Dictionary& msg);
        void exit();

        // ovwerride section
        void _ready() override;

    private:
        _FORCE_INLINE_ void set_state_machine(playerStateMachine* stateMachine) {
            _stateMachine = stateMachine;
        }
        _FORCE_INLINE_ playerStateMachine* get_state_machine() const {
            return _stateMachine;
        }

        playerStateMachine* _stateMachine = nullptr;
        playerState* _parentState = nullptr;
    };
}// namespace rapidFire::gameplayModule

#endif// RAPIDFIRE_PLAYERSTATE_H
