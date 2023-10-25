#include "gameplayModule.h"

#include "godot_cpp/core/class_db.hpp"
#include "godot_cpp/core/defs.hpp"
#include "godot_cpp/godot.hpp"

#include "headers.h"

void swipeRpg::gameplayModule::initModule(godot::ModuleInitializationLevel p_level) {
    // Initialize all classes here
    if (p_level != godot::MODULE_INITIALIZATION_LEVEL_SCENE) {
        return;
    }

    //    godot::ClassDB::register_class<ExampleVirtual>( true );
    //    godot::ClassDB::register_abstract_class<ExampleAbstract>();
    godot::ClassDB::register_class<playerStateMachine>();
    godot::ClassDB::register_class<playerState>();
}

void swipeRpg::gameplayModule::cleanupModule(godot::ModuleInitializationLevel p_level) {
    // Cleanup and uninitializing all classes here
    if (p_level != godot::MODULE_INITIALIZATION_LEVEL_SCENE) {
        return;
    }
}
