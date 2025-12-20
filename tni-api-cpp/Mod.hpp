#ifndef TNI_API_HEADER_MOD
#define TNI_API_HEADER_MOD
// Generated API for game version 0.9.1
// If any constants or enum's change between versions, a rebuild of your mod with updated headers may be required!

#include <api.hpp>
#include "structs.hpp"

struct Mod : public Node {
	using Node::Node;

	constexpr Mod(Node base) : Node{base} {}
	constexpr Mod(uint64_t addr) : Node{addr} {}
	constexpr Mod(Object obj) : Mod{obj.address()} {}
	Mod(Variant variant) : Mod{variant.as_object().address()} {}


	PROPERTY(mod_entry_binary, String);
	PROPERTY(mod_type, Variant);

	inline void reload();
	inline void call_if_has();
	inline void mod_log(String s);
	inline void handle_stdout(String s);
};


inline void Mod::reload() { voidcall("reload"); }
inline void Mod::call_if_has() { voidcall("call_if_has"); }
inline void Mod::mod_log(String s) { voidcall("mod_log", s); }
inline void Mod::handle_stdout(String s) { voidcall("handle_stdout", s); }

#endif
