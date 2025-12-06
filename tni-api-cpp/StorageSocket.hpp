#ifndef TN_API_HEADER_STORAGESOCKET
#define TN_API_HEADER_STORAGESOCKET

#include <api.hpp>

struct StorageSocket : public Area2D {
	using Area2D::Area2D;

	StorageSocket(Variant variant) : StorageSocket{variant.as_object().address()} {}

	PROPERTY(connection, Variant);
	PROPERTY(opposite_socket, Variant);
	PROPERTY(type, int64_t);
	PROPERTY(insert_sound_np, Variant);
	PROPERTY(remove_sound_np, Variant);
	PROPERTY(disable_egress, bool);
	PROPERTY(disable_ingress, bool);
	PROPERTY(insert_sound, Variant);
	PROPERTY(remove_sound, Variant);
	PROPERTY(controller, Variant);
	PROPERTY(is_blocked, bool);
	PROPERTY(root_transformer, Variant);

	inline void block() { voidcall("block"); }
	inline void unblock() { voidcall("unblock"); }
	inline Variant compatible_with(Variant plug) { return operator()("compatible_with", plug); }
	inline void show_hint(String msg) { voidcall("show_hint", msg); }
};

#endif
