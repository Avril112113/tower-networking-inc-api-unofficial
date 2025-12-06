#ifndef TN_API_HEADER_MOD
#define TN_API_HEADER_MOD

#include <api.hpp>

struct Mod : public Node {
	using Node::Node;

	Mod(Variant variant) : Mod{variant.as_object().address()} {}

	PROPERTY(mod_entry_binary, String);
	PROPERTY(mod_type, Variant);

	inline void reload() { voidcall("reload"); }
	inline void call_if_has() { voidcall("call_if_has"); }
	inline void mod_log(String s) { voidcall("mod_log", s); }
	inline void handle_stdout(String s) { voidcall("handle_stdout", s); }
};

#endif
