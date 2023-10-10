/* register_types.cpp */

#include "register_types.h"
#include "core/object/class_db.h"
#include "stack.h"

void initialize_GodotStack_module(ModuleInitializationLevel p_level) {
	if (p_level == MODULE_INITIALIZATION_LEVEL_SCENE) {
		ClassDB::register_class<Stack>();
	}
}

void uninitialize_GodotStack_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
}