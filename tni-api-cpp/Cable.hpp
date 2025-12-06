#ifndef TN_API_HEADER_CABLE
#define TN_API_HEADER_CABLE

#include <api.hpp>

struct Cable : public Node2D {
	using Node2D::Node2D;

	Cable(Variant variant) : Cable{variant.as_object().address()} {}

	PROPERTY(with_mouse_stretch_factor, Variant);
	PROPERTY(without_mouse_stretch_factor, Variant);
	PROPERTY(cable_width, double);
	PROPERTY(cable_color, Variant);
	PROPERTY(cable_length, double);
	PROPERTY(blacklist_nodes_as_ends, Variant);
	PROPERTY(pixels_per_cable_piece, int64_t);
	PROPERTY(piece_scn, Variant);
	PROPERTY(save_cable_length, bool);
	PROPERTY(end_a, Variant);
	PROPERTY(end_b, Variant);
	PROPERTY(cable_pieces, Variant);
	PROPERTY(cable_idle, Variant);
	PROPERTY(initial_setup_grace, Variant);
	PROPERTY(delay_timer, Variant);
	PROPERTY(smoothing_enabled, bool);
	PROPERTY(mvtwn, Variant);
	PROPERTY(smooth_positions, Variant);
	PROPERTY(smooth_factor, double);
	PROPERTY(smooth_initialized, bool);

	inline Variant get_other_end(Variant end) { return operator()("get_other_end", end); }
	inline void reposition(Variant newpos) { voidcall("reposition", newpos); }
	inline void elevator_move(Variant pos_delta) { voidcall("elevator_move", pos_delta); }
	inline void force_cable_unidle() { voidcall("force_cable_unidle"); }
	inline void remove_and_free_object() { voidcall("remove_and_free_object"); }
	inline void unmake_cable() { voidcall("unmake_cable"); }
};

#endif
