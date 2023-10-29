#include "playerStateMachine.h"
#include "godot_cpp/core/class_db.hpp"
#include "godot_cpp/variant/utility_functions.hpp"
#include "playerState.h"

using namespace rapidFire::gameplayModule;

void playerStateMachine::_bind_methods() {
    godot::ClassDB::bind_method(godot::D_METHOD("set_state", "state"), &playerStateMachine::set_current_state);
    godot::ClassDB::bind_method(godot::D_METHOD("get_state"), &playerStateMachine::get_current_state);
    ADD_PROPERTY(
      godot::PropertyInfo(godot::Variant::OBJECT, "initialState", godot::PROPERTY_HINT_NODE_TYPE, "playerState"), "set_state", "get_state");
    ADD_SIGNAL(godot::MethodInfo("onTransitionEnded", godot::PropertyInfo(godot::Variant::NODE_PATH, "targetStatePath")));
}

void playerStateMachine::_ready() {
    if (_currentState)
        _currentState->enter_state();
    else
        godot::UtilityFunctions::print("[node:", get_name(), "]playerStateMachine::_ready() - current state is null!");
}

void playerStateMachine::_unhandled_input(const godot::Ref<godot::InputEvent>& event) {
    if (_currentState) {
        _currentState->unhandled_input_state(event);
    } else {
        godot::UtilityFunctions::print("[node:", get_name(), "]playerStateMachine::_unhandled_input() - current state is null!");
    }
}

void playerStateMachine::_process(double delta) {
    if (_currentState) {
        _currentState->process_state(delta);
    } else {
        godot::UtilityFunctions::print("[node:", get_name(), "]playerStateMachine::_process() - current state is null!");
    }
}

void playerStateMachine::_physics_process(double delta) {
    if (_currentState) {
        _currentState->physics_process_state(delta);
    } else {
        godot::UtilityFunctions::print("[node:", get_name(), "]playerStateMachine::_physics_process() - current state is null!");
    }
}

void playerStateMachine::set_current_state(playerState* state) {
    _currentState = state;
    _currentStateName = state->get_name();
}

playerState* playerStateMachine::get_current_state() const {
    return _currentState;
}

void playerStateMachine::transition_to(const godot::NodePath& targetStatePath, const godot::Dictionary& msg) {
    if (!has_node(targetStatePath)) {
        godot::UtilityFunctions::print(
          "[node:", get_name(), "]playerStateMachine::transition_to() - target state [node:", targetStatePath, "] does not exist!");
        return;
    }

    if (_currentState) {
        _currentState->exit_state();
    }

    if (auto targetState = get_node<playerState>(targetStatePath)) {
        _currentState = targetState;
        _currentState->enter_state(msg);
        emit_signal("onTransitionEnded", targetStatePath);
    } else {
        godot::UtilityFunctions::print(
          "[node:", get_name(), "]playerStateMachine::transition_to() - target state [node:", targetStatePath, "] is not a playerState!");
    }
}