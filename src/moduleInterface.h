#ifndef SWIPERPG_MODULEINTERFACE_H
#define SWIPERPG_MODULEINTERFACE_H

namespace swipeRpg {

	class moduleInterface {
	public:
		moduleInterface() = default;
		virtual ~moduleInterface() = default;

		virtual void registerAll() = 0;
		virtual void initModule() = 0;
	};
}

#endif //SWIPERPG_MODULEINTERFACE_H
