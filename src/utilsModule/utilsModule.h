#pragma once
#ifndef RAPIDFIRE_UTILSMODULE_H
#define RAPIDFIRE_UTILSMODULE_H

#include "godot_cpp/godot.hpp"

namespace rapidFire::utilsModule {

    void initModule(godot::ModuleInitializationLevel p_level);
    void cleanupModule(godot::ModuleInitializationLevel p_level);
}// namespace rapidFire::gameplayModule

#endif// RAPIDFIRE_UTILSMODULE_H
