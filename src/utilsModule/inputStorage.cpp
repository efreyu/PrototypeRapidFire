#include "inputStorage.h"

using namespace rapidFire::utilsModule;

inputStorage* inputStorage::_instance = nullptr;
bool inputStorage::_destroyed = false;
std::string inputStorage::_singletonName = "inputStorage";

void inputStorage::_bind_methods() {
    //
}

inputStorage::inputStorage() {
    ERR_FAIL_COND(_instance != nullptr);
    _instance = this;
}

inputStorage::~inputStorage() {
    //
}

void inputStorage::onDeadReference() {
    ERR_FAIL_COND_MSG(false, "Founded dead reference!");
}

inputStorage* inputStorage::getInstance() {
    if (!_instance) {
        if (_destroyed) {
            onDeadReference();
        }
    }
    return _instance;
}

void inputStorage::cleanup() {
    _destroyed = true;
    _instance = nullptr;
}

godot::StringName inputStorage::getSingletonName() {
    return {_singletonName.c_str()};
}
