#ifndef TN_API_HEADER_STICKYNOTE
#define TN_API_HEADER_STICKYNOTE

#include <api.hpp>

struct StickyNote : public Area2D {
	using Area2D::Area2D;

	StickyNote(Variant variant) : StickyNote{variant.as_object().address()} {}

	PROPERTY(note, Variant);
	PROPERTY(sprite, Variant);
	PROPERTY(tear_sfx, Variant);
	PROPERTY(content, String);
	PROPERTY(note_color, int64_t);
	PROPERTY(height_offset, double);

	inline Variant get_color_map() { return operator()("get_color_map"); }
	inline Variant clone() { return operator()("clone"); }
	inline void tear(bool destroy) { voidcall("tear", destroy); }
	inline void update_note(String c, int64_t nc) { voidcall("update_note", c, nc); }
	inline void disable_collision() { voidcall("disable_collision"); }
	inline void enable_collision() { voidcall("enable_collision"); }
	inline void stick_to_pos(Variant global_mouse_pos) { voidcall("stick_to_pos", global_mouse_pos); }
};

#endif
