#ifndef TN_API_HEADER_FIXTUREOUTLET
#define TN_API_HEADER_FIXTUREOUTLET

#include <api.hpp>

struct FixtureOutlet : public Area2D {
	using Area2D::Area2D;

	FixtureOutlet(Variant variant) : FixtureOutlet{variant.as_object().address()} {}

	PROPERTY(socket, Variant);

	inline Variant debug_monitor_callback() { return operator()("debug_monitor_callback"); }
};

#endif
