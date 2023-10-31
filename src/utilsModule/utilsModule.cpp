#include "utilsModule.h"

#include "godot_cpp/core/class_db.hpp"
#include "godot_cpp/core/defs.hpp"
#include "godot_cpp/classes/engine.hpp"
#include "godot_cpp/godot.hpp"

#include "headers.h"

static rapidFire::utilsModule::inputStorage* _inputStorage = nullptr;

void rapidFire::utilsModule::initModule(godot::ModuleInitializationLevel p_level) {
    // Initialize all classes here
    if (p_level != godot::MODULE_INITIALIZATION_LEVEL_SCENE) {
        return;
    }

    godot::ClassDB::register_class<inputStorage>();
    _inputStorage = memnew(rapidFire::utilsModule::inputStorage);
    godot::Engine::get_singleton()->register_singleton(inputStorage::getSingletonName(), inputStorage::getInstance());
}

void rapidFire::utilsModule::cleanupModule(godot::ModuleInitializationLevel p_level) {
    // Cleanup and uninitializing all classes here
    if (p_level != godot::MODULE_INITIALIZATION_LEVEL_SCENE) {
        return;
    }
    godot::Engine::get_singleton()->unregister_singleton(inputStorage::getSingletonName());
    memdelete(_inputStorage);
}

