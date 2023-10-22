#ifndef SWIPERPG_GAMEPLAYMODULE_H
#define SWIPERPG_GAMEPLAYMODULE_H

#include "../moduleInterface.h"

namespace swipeRpg::gameplayModule {

	class gameplayModule : public moduleInterface {
	public:
		gameplayModule() = default;
		~gameplayModule() override = default;

		void registerAll() override;
		void initModule() override;
	};
}

#endif //SWIPERPG_GAMEPLAYMODULE_H
