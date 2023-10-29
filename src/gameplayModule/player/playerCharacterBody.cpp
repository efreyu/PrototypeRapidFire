#include "playerCharacterBody.h"
#include "playerStateMachine.h"
#include "godot_cpp/core/class_db.hpp"

using namespace rapidFire::gameplayModule;

void playerCharacterBody::_bind_methods() {
    godot::ClassDB::bind_method(godot::D_METHOD("setPlayerModel", "playerModel"), &playerCharacterBody::setPlayerModel);
    godot::ClassDB::bind_method(godot::D_METHOD("getPlayerModel"), &playerCharacterBody::getPlayerModel);
    ADD_PROPERTY(godot::PropertyInfo(godot::Variant::OBJECT, "playerModel", godot::PROPERTY_HINT_NODE_TYPE, "playerMannequin"), "setPlayerModel", "getPlayerModel");
    godot::ClassDB::bind_method(godot::D_METHOD("setStateMachine", "playerModel"), &playerCharacterBody::setStateMachine);
    godot::ClassDB::bind_method(godot::D_METHOD("getStateMachine"), &playerCharacterBody::getStateMachine);
    ADD_PROPERTY(godot::PropertyInfo(godot::Variant::OBJECT, "stateMachine", godot::PROPERTY_HINT_NODE_TYPE, "playerStateMachine"), "setStateMachine", "getStateMachine");
}

void playerCharacterBody::setPlayerModel(playerMannequin* playerModel) {
    _playerModel = playerModel;
}

playerMannequin* playerCharacterBody::getPlayerModel() const {
    return _playerModel;
}

void playerCharacterBody::setStateMachine(playerStateMachine* stateMachine) {
    _stateMachine = stateMachine;
}

playerStateMachine* playerCharacterBody::getStateMachine() const {
    return _stateMachine;
}