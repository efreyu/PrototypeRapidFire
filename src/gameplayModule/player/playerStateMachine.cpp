#include "playerStateMachine.h"
#include "godot_cpp/core/class_db.hpp"
#include "playerState.h"

using namespace rapidFire::gameplayModule;

void playerStateMachine::_bind_methods() {
//    godot::ClassDB::bind_method(godot::D_METHOD("_unhandled_input"), &playerStateMachine::_unhandled_input);
    godot::ClassDB::bind_method(godot::D_METHOD("set_state", "state"), &playerStateMachine::set_current_state);
    godot::ClassDB::bind_method(godot::D_METHOD("get_state"), &playerStateMachine::get_current_state);
    ADD_PROPERTY(godot::PropertyInfo(godot::Variant::OBJECT, "initialState", godot::PROPERTY_HINT_NODE_TYPE, "playerState"), "set_state", "get_state");
}

void playerStateMachine::_unhandled_input(const godot::Ref<godot::InputEvent>& event) {
    //
}

void playerStateMachine::_process(double delta) {
    //
}

void playerStateMachine::_physics_process(double delta) {
    //
}

void playerStateMachine::set_current_state(playerState* state) {
    _currentState = state;
    _currentStateName = state->get_name();
}

playerState* playerStateMachine::get_current_state() const {
    return _currentState;
}
