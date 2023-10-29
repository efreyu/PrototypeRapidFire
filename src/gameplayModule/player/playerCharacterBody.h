#pragma once
#ifndef RAPIDFIRE_PLAYERCHARACTERBODY_H
#define RAPIDFIRE_PLAYERCHARACTERBODY_H

#include "godot_cpp/classes/character_body3d.hpp"
#include "godot_cpp/classes/node3d.hpp"
#include "godot_cpp/godot.hpp"


namespace rapidFire::gameplayModule {

    //forward declaration
    class playerStateMachine;

    class playerMannequin : public godot::Node3D {
        GDCLASS(playerMannequin, godot::Node3D)
        static void _bind_methods() {}
    };

    class playerCharacterBody : public godot::CharacterBody3D {
        GDCLASS(playerCharacterBody, godot::CharacterBody3D)
        static void _bind_methods();

    public:

        _FORCE_INLINE_ void setPlayerModel(playerMannequin* playerModel);
        _FORCE_INLINE_ playerMannequin* getPlayerModel() const;

        _FORCE_INLINE_ void setStateMachine(playerStateMachine* stateMachine);
        _FORCE_INLINE_ playerStateMachine* getStateMachine() const;

    private:
        playerMannequin* _playerModel = nullptr;
        playerStateMachine* _stateMachine = nullptr;

    };
} // namespace rapidFire::gameplayModule

#endif// RAPIDFIRE_PLAYERCHARACTERBODY_H
