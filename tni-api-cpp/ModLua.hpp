#ifndef TNI_API_HEADER_MODLUA
#define TNI_API_HEADER_MODLUA
// Generated API for game version 0.9.1
// If any constants or enum's change between versions, a rebuild of your mod with updated headers may be required!

#include <api.hpp>
#include "structs.hpp"

struct ModLua : public Node {
	using Node::Node;

	constexpr ModLua(Node base) : Node{base} {}
	constexpr ModLua(uint64_t addr) : Node{addr} {}
	constexpr ModLua(Object obj) : ModLua{obj.address()} {}
	ModLua(Variant variant) : ModLua{variant.as_object().address()} {}


	PROPERTY(lua_entry_file, String);
	PROPERTY(mod_entry_binary, String);
	PROPERTY(mod_type, Variant);

	inline void reload();
	inline void call_if_has();
	inline void mod_log(String s);
	inline void handle_stdout(String s);
};


inline void ModLua::reload() { voidcall("reload"); }
inline void ModLua::call_if_has() { voidcall("call_if_has"); }
inline void ModLua::mod_log(String s) { voidcall("mod_log", s); }
inline void ModLua::handle_stdout(String s) { voidcall("handle_stdout", s); }

#endif
