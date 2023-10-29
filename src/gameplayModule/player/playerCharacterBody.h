#pragma once
#ifndef RAPIDFIRE_PLAYERCHARACTERBODY_H
#define RAPIDFIRE_PLAYERCHARACTERBODY_H

#include "godot_cpp/classes/character_body3d.hpp"
#include "godot_cpp/godot.hpp"


namespace rapidFire::gameplayModule {
    class playerCharacterBody : public godot::CharacterBody3D {
        GDCLASS(playerCharacterBody, godot::CharacterBody3D)
        static void _bind_methods();

    public:

    };
} // namespace rapidFire::gameplayModule

#endif// RAPIDFIRE_PLAYERCHARACTERBODY_H
