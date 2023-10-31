#pragma once
#ifndef RAPIDFIRE_INPUTSTORAGE_H
#define RAPIDFIRE_INPUTSTORAGE_H

#include "godot_cpp/classes/object.hpp"
#include <string>

namespace rapidFire::utilsModule {
    class inputStorage : public godot::Object {
        GDCLASS(inputStorage, godot::Object)
        static void _bind_methods();

    public:
        inputStorage();
        ~inputStorage();
        static inputStorage* getInstance();
        static void cleanup();
        static godot::StringName getSingletonName();

        // override section

    private:
        static void onDeadReference();

        static inputStorage* _instance;
        static bool _destroyed;
        static std::string _singletonName;
    };
}// namespace rapidFire::utilsModule

#endif// RAPIDFIRE_INPUTSTORAGE_H
