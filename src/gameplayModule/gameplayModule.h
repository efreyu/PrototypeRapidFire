#ifndef SWIPERPG_GAMEPLAYMODULE_H
#define SWIPERPG_GAMEPLAYMODULE_H

#include "godot_cpp/godot.hpp"

namespace swipeRpg::gameplayModule {

    void initModule(godot::ModuleInitializationLevel p_level);
    void cleanupModule(godot::ModuleInitializationLevel p_level);
}// namespace swipeRpg::gameplayModule

#endif// SWIPERPG_GAMEPLAYMODULE_H
