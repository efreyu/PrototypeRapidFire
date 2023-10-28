#include "playerState.h"
#include "godot_cpp/core/class_db.hpp"
#include "godot_cpp/variant/utility_functions.hpp"

using namespace rapidFire::gameplayModule;

void playerState::_bind_methods() {
    // Methods
    godot::ClassDB::bind_method(godot::D_METHOD("unhandled_input"), &playerState::unhandled_input);
    godot::ClassDB::bind_method(godot::D_METHOD("process", "delta"), &playerState::process);
    godot::ClassDB::bind_method(godot::D_METHOD("physics_process", "delta:float"), &playerState::physics_process);
    godot::ClassDB::bind_method(godot::D_METHOD("enter", "msg:Dictionary"), &playerState::enter);
    godot::ClassDB::bind_method(godot::D_METHOD("exit", "delta:float"), &playerState::exit);
}

void playerState::unhandled_input(const godot::Ref<godot::InputEvent>& event) {
    //
}

void playerState::process(double delta) {
    //
}

void playerState::physics_process(double delta) {
    //
}

void playerState::enter(const godot::Dictionary& msg) {
    //
}

void playerState::exit() {
    //
}

void playerState::_ready() {
    _parentState = cast_to<playerState>(get_parent());
    if (_parentState) {
        godot::UtilityFunctions::print("[node:", get_name(), "]playerState::_ready() - parent state: [node:", _parentState->get_name(), "]");
    }
}
