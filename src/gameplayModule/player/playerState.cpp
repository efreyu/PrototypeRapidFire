#include "playerState.h"
#include "playerStateMachine.h"
#include "godot_cpp/core/class_db.hpp"
#include "godot_cpp/variant/utility_functions.hpp"
#include "godot_cpp/classes/global_constants.hpp"
#include "godot_cpp/classes/engine.hpp"
#include <cassert>

using namespace rapidFire::gameplayModule;

void playerState::_bind_methods() {
    // Methods
    godot::ClassDB::bind_method(godot::D_METHOD("unhandled_input_state"), &playerState::unhandled_input_state);
    godot::ClassDB::bind_method(godot::D_METHOD("process_state", "delta"), &playerState::process_state);
    godot::ClassDB::bind_method(godot::D_METHOD("physics_process_state", "delta:float"), &playerState::physics_process_state);
    godot::ClassDB::bind_method(godot::D_METHOD("enter_state", "msg:Dictionary"), &playerState::enter_state);
    godot::ClassDB::bind_method(godot::D_METHOD("exit_state"), &playerState::exit_state);
    godot::ClassDB::bind_method(godot::D_METHOD("set_state_machine", "stateMachine"), &playerState::set_state_machine);
    godot::ClassDB::bind_method(godot::D_METHOD("get_state_machine"), &playerState::get_state_machine);
    ADD_PROPERTY(godot::PropertyInfo(godot::Variant::OBJECT, "stateMachine", godot::PROPERTY_HINT_NODE_TYPE, "playerStateMachine"), "set_state_machine", "get_state_machine");
}

playerState::playerState() {
    if (!godot::Engine::get_singleton()->is_editor_hint()) {
        assert(_stateMachine && "playerState::_stateMachine - should not be null! Setup the state machine node in the editor!");
    }
}

playerState::~playerState() {}

void playerState::unhandled_input_state(const godot::Ref<godot::InputEvent>& event) {
    //
}

void playerState::process_state(double delta) {
    //
}

void playerState::physics_process_state(double delta) {
    //
}

void playerState::enter_state(const godot::Dictionary& msg) {
    //
}

void playerState::exit_state() {
    //
}

void playerState::_ready() {
    _parentState = cast_to<playerState>(get_parent());
    if (_parentState) {
        godot::UtilityFunctions::print(
          "[node:", get_name(), "]playerState::_ready() - parent state: [node:", _parentState->get_name(), "]");
    }
}
