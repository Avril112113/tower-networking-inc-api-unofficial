#ifndef TN_API_HEADER_POWERMETER
#define TN_API_HEADER_POWERMETER

#include <api.hpp>

struct PowerMeter : public Area2D {
	using Area2D::Area2D;

	PowerMeter(Variant variant) : PowerMeter{variant.as_object().address()} {}

	PROPERTY(metering_target, Variant);
	PROPERTY(kwh_price_ratio_base, int64_t);
	PROPERTY(title, String);
	PROPERTY(kwh_now, double);
	PROPERTY(kwh_price_ratio, int64_t);
	PROPERTY(payment_title, String);
	PROPERTY(bill_due, int64_t);
	PROPERTY(logic_controller, Variant);
	PROPERTY(power_controller, Variant);

	inline Variant debug_monitor_callback() { return operator()("debug_monitor_callback"); }
	inline void play_surge_effects() { voidcall("play_surge_effects"); }
};

#endif
