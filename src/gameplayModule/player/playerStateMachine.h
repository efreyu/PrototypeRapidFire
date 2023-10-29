#pragma once
#ifndef RAPIDFIRE_PLAYERSTATEMACHINE_H
#define RAPIDFIRE_PLAYERSTATEMACHINE_H

#include "godot_cpp/classes/input_event.hpp"
#include "godot_cpp/classes/node.hpp"
#include "godot_cpp/classes/ref.hpp"
#include "godot_cpp/godot.hpp"

namespace rapidFire::gameplayModule {

    // forward declaration
    class playerState;

    class playerStateMachine : public godot::Node {
        GDCLASS(playerStateMachine, godot::Node)
    private:
        static void _bind_methods();

    public:
        // override section
        void _ready() override;
        void _unhandled_input(const godot::Ref<godot::InputEvent>& event) override;
        void _process(double delta) override;
        void _physics_process(double delta) override;

        // methods for properties
        _FORCE_INLINE_ void set_current_state(playerState* state);
        _FORCE_INLINE_ playerState* get_current_state() const;

        // state transitions
        void transition_to(const godot::NodePath& targetStatePath, const godot::Dictionary& msg = godot::Dictionary());

    private:
        playerState* _currentState = nullptr;
        godot::StringName _currentStateName;
    };
}// namespace rapidFire::gameplayModule

#endif// RAPIDFIRE_PLAYERSTATEMACHINE_H
