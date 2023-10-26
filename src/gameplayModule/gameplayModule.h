#ifndef RAPIDFIRE_GAMEPLAYMODULE_H
#define RAPIDFIRE_GAMEPLAYMODULE_H

#include "godot_cpp/godot.hpp"

namespace rapidFire::gameplayModule {

    void initModule(godot::ModuleInitializationLevel p_level);
    void cleanupModule(godot::ModuleInitializationLevel p_level);
}// namespace rapidFire::gameplayModule

#endif// RAPIDFIRE_GAMEPLAYMODULE_H
