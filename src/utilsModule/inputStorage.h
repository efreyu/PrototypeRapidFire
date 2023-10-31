#pragma once
#ifndef RAPIDFIRE_INPUTSTORAGE_H
#define RAPIDFIRE_INPUTSTORAGE_H

#include "godot_cpp/classes/node.hpp"
#include "godot_cpp/classes/ref.hpp"
#include "godot_cpp/classes/input_event.hpp"
#include <string>

namespace rapidFire::utilsModule {
    class inputStorage : public godot::Node {
        GDCLASS(inputStorage, godot::Node)
        static void _bind_methods();

    public:
        inputStorage();
        ~inputStorage();
        static inputStorage* getInstance();
        static void cleanup();
        static godot::StringName getSingletonName();

        // override section
        void _ready() override;
        void _unhandled_input(const godot::Ref<godot::InputEvent>& event) override;

    private:
        static void onDeadReference();

        static inputStorage* _instance;
        static bool _destroyed;
        static std::string _singletonName;
    };
}// namespace rapidFire::utilsModule

#endif// RAPIDFIRE_INPUTSTORAGE_H
