#ifndef TN_API_HEADER_DEVICEOUTLET
#define TN_API_HEADER_DEVICEOUTLET

#include <api.hpp>

struct DeviceOutlet : public Area2D {
	using Area2D::Area2D;

	DeviceOutlet(Variant variant) : DeviceOutlet{variant.as_object().address()} {}

	PROPERTY(outlet_name, String);
	PROPERTY(logic_controller, Variant);
	PROPERTY(device_hardware_class, int64_t);
	PROPERTY(socket, Variant);

	inline Variant debug_monitor_callback() { return operator()("debug_monitor_callback"); }
};

#endif
