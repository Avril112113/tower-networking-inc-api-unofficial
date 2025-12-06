#ifndef TN_API_HEADER_LINKOUTLET
#define TN_API_HEADER_LINKOUTLET

#include <api.hpp>

struct LinkOutlet : public Area2D {
	using Area2D::Area2D;

	LinkOutlet(Variant variant) : LinkOutlet{variant.as_object().address()} {}

	PROPERTY(link_type, int64_t);
	PROPERTY(link_np, Variant);
	PROPERTY(tower_link, Variant);
	PROPERTY(serial_num, String);
	PROPERTY(linked, bool);
	PROPERTY(floor_num, int64_t);
	PROPERTY(socket, Variant);

	inline void get_link_type_string(Variant lo) { voidcall("get_link_type_string", lo); }
	inline void update_link_outlet_labels() { voidcall("update_link_outlet_labels"); }
	inline void link_setup(Variant lnk) { voidcall("link_setup", lnk); }
	inline void remove() { voidcall("remove"); }
	inline Variant debug_monitor_callback() { return operator()("debug_monitor_callback"); }
};

#endif
