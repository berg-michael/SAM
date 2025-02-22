#include <string>
#include <utility>
#include <vector>
#include <memory>
#include <iostream>

#include <ssc/sscapi.h>

#include "SAM_api.h"
#include "ErrorHandler.h"
#include "SAM_Windpower.h"

SAM_EXPORT int SAM_Windpower_execute(SAM_table data, int verbosity, SAM_error* err){
	return SAM_module_exec("windpower", data, verbosity, err);
}

SAM_EXPORT void SAM_Windpower_Resource_weibull_k_factor_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "weibull_k_factor", number);
	});
}

SAM_EXPORT void SAM_Windpower_Resource_weibull_reference_height_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "weibull_reference_height", number);
	});
}

SAM_EXPORT void SAM_Windpower_Resource_weibull_wind_speed_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "weibull_wind_speed", number);
	});
}

SAM_EXPORT void SAM_Windpower_Resource_wind_resource_data_tset(SAM_table ptr, SAM_table tab, SAM_error *err){
	SAM_table_set_table(ptr, "wind_resource_data", tab, err);
}



SAM_EXPORT void SAM_Windpower_Resource_wind_resource_distribution_mset(SAM_table ptr, double* mat, int nrows, int ncols, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_matrix(ptr, "wind_resource_distribution", mat, nrows, ncols);
	});
}

SAM_EXPORT void SAM_Windpower_Resource_wind_resource_filename_sset(SAM_table ptr, const char* str, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_string(ptr, "wind_resource_filename", str);
	});
}

SAM_EXPORT void SAM_Windpower_Resource_wind_resource_model_choice_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "wind_resource_model_choice", number);
	});
}

SAM_EXPORT void SAM_Windpower_Turbine_wind_resource_shear_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "wind_resource_shear", number);
	});
}

SAM_EXPORT void SAM_Windpower_Turbine_wind_turbine_hub_ht_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "wind_turbine_hub_ht", number);
	});
}

SAM_EXPORT void SAM_Windpower_Turbine_wind_turbine_max_cp_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "wind_turbine_max_cp", number);
	});
}

SAM_EXPORT void SAM_Windpower_Turbine_wind_turbine_powercurve_powerout_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "wind_turbine_powercurve_powerout", arr, length);
	});
}

SAM_EXPORT void SAM_Windpower_Turbine_wind_turbine_powercurve_windspeeds_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "wind_turbine_powercurve_windspeeds", arr, length);
	});
}

SAM_EXPORT void SAM_Windpower_Turbine_wind_turbine_rotor_diameter_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "wind_turbine_rotor_diameter", number);
	});
}

SAM_EXPORT void SAM_Windpower_Farm_max_turbine_override_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "max_turbine_override", number);
	});
}

SAM_EXPORT void SAM_Windpower_Farm_system_capacity_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "system_capacity", number);
	});
}

SAM_EXPORT void SAM_Windpower_Farm_wind_farm_wake_model_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "wind_farm_wake_model", number);
	});
}

SAM_EXPORT void SAM_Windpower_Farm_wind_farm_xCoordinates_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "wind_farm_xCoordinates", arr, length);
	});
}

SAM_EXPORT void SAM_Windpower_Farm_wind_farm_yCoordinates_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "wind_farm_yCoordinates", arr, length);
	});
}

SAM_EXPORT void SAM_Windpower_Farm_wind_resource_turbulence_coeff_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "wind_resource_turbulence_coeff", number);
	});
}

SAM_EXPORT void SAM_Windpower_Losses_avail_bop_loss_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "avail_bop_loss", number);
	});
}

SAM_EXPORT void SAM_Windpower_Losses_avail_grid_loss_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "avail_grid_loss", number);
	});
}

SAM_EXPORT void SAM_Windpower_Losses_avail_turb_loss_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "avail_turb_loss", number);
	});
}

SAM_EXPORT void SAM_Windpower_Losses_elec_eff_loss_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "elec_eff_loss", number);
	});
}

SAM_EXPORT void SAM_Windpower_Losses_elec_parasitic_loss_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "elec_parasitic_loss", number);
	});
}

SAM_EXPORT void SAM_Windpower_Losses_en_icing_cutoff_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "en_icing_cutoff", number);
	});
}

SAM_EXPORT void SAM_Windpower_Losses_en_low_temp_cutoff_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "en_low_temp_cutoff", number);
	});
}

SAM_EXPORT void SAM_Windpower_Losses_env_degrad_loss_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "env_degrad_loss", number);
	});
}

SAM_EXPORT void SAM_Windpower_Losses_env_env_loss_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "env_env_loss", number);
	});
}

SAM_EXPORT void SAM_Windpower_Losses_env_exposure_loss_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "env_exposure_loss", number);
	});
}

SAM_EXPORT void SAM_Windpower_Losses_env_icing_loss_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "env_icing_loss", number);
	});
}

SAM_EXPORT void SAM_Windpower_Losses_icing_cutoff_rh_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "icing_cutoff_rh", number);
	});
}

SAM_EXPORT void SAM_Windpower_Losses_icing_cutoff_temp_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "icing_cutoff_temp", number);
	});
}

SAM_EXPORT void SAM_Windpower_Losses_low_temp_cutoff_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "low_temp_cutoff", number);
	});
}

SAM_EXPORT void SAM_Windpower_Losses_ops_env_loss_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ops_env_loss", number);
	});
}

SAM_EXPORT void SAM_Windpower_Losses_ops_grid_loss_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ops_grid_loss", number);
	});
}

SAM_EXPORT void SAM_Windpower_Losses_ops_load_loss_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ops_load_loss", number);
	});
}

SAM_EXPORT void SAM_Windpower_Losses_ops_strategies_loss_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ops_strategies_loss", number);
	});
}

SAM_EXPORT void SAM_Windpower_Losses_turb_generic_loss_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "turb_generic_loss", number);
	});
}

SAM_EXPORT void SAM_Windpower_Losses_turb_hysteresis_loss_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "turb_hysteresis_loss", number);
	});
}

SAM_EXPORT void SAM_Windpower_Losses_turb_perf_loss_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "turb_perf_loss", number);
	});
}

SAM_EXPORT void SAM_Windpower_Losses_turb_specific_loss_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "turb_specific_loss", number);
	});
}

SAM_EXPORT void SAM_Windpower_Losses_wake_ext_loss_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "wake_ext_loss", number);
	});
}

SAM_EXPORT void SAM_Windpower_Losses_wake_future_loss_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "wake_future_loss", number);
	});
}

SAM_EXPORT void SAM_Windpower_Losses_wake_int_loss_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "wake_int_loss", number);
	});
}

SAM_EXPORT void SAM_Windpower_AdjustmentFactors_adjust_constant_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "adjust_constant", number);
	});
}

SAM_EXPORT void SAM_Windpower_AdjustmentFactors_adjust_en_periods_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "adjust_en_periods", number);
	});
}

SAM_EXPORT void SAM_Windpower_AdjustmentFactors_adjust_en_timeindex_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "adjust_en_timeindex", number);
	});
}

SAM_EXPORT void SAM_Windpower_AdjustmentFactors_adjust_periods_mset(SAM_table ptr, double* mat, int nrows, int ncols, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_matrix(ptr, "adjust_periods", mat, nrows, ncols);
	});
}

SAM_EXPORT void SAM_Windpower_AdjustmentFactors_adjust_timeindex_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "adjust_timeindex", arr, length);
	});
}

SAM_EXPORT void SAM_Windpower_Uncertainty_total_uncert_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "total_uncert", number);
	});
}

SAM_EXPORT void SAM_Windpower_HybridCosts_degradation_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "degradation", arr, length);
	});
}

SAM_EXPORT void SAM_Windpower_HybridCosts_land_area_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "land_area", number);
	});
}

SAM_EXPORT void SAM_Windpower_HybridCosts_om_capacity_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "om_capacity", arr, length);
	});
}

SAM_EXPORT void SAM_Windpower_HybridCosts_om_capacity_escal_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "om_capacity_escal", number);
	});
}

SAM_EXPORT void SAM_Windpower_HybridCosts_om_fixed_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "om_fixed", arr, length);
	});
}

SAM_EXPORT void SAM_Windpower_HybridCosts_om_fixed_escal_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "om_fixed_escal", number);
	});
}

SAM_EXPORT void SAM_Windpower_HybridCosts_om_land_lease_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "om_land_lease", arr, length);
	});
}

SAM_EXPORT void SAM_Windpower_HybridCosts_om_land_lease_escal_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "om_land_lease_escal", number);
	});
}

SAM_EXPORT void SAM_Windpower_HybridCosts_om_production_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "om_production", arr, length);
	});
}

SAM_EXPORT void SAM_Windpower_HybridCosts_om_production_escal_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "om_production_escal", number);
	});
}

SAM_EXPORT void SAM_Windpower_HybridCosts_total_installed_cost_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "total_installed_cost", number);
	});
}

SAM_EXPORT double SAM_Windpower_Resource_weibull_k_factor_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "weibull_k_factor", &result))
		make_access_error("SAM_Windpower", "weibull_k_factor");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Resource_weibull_reference_height_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "weibull_reference_height", &result))
		make_access_error("SAM_Windpower", "weibull_reference_height");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Resource_weibull_wind_speed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "weibull_wind_speed", &result))
		make_access_error("SAM_Windpower", "weibull_wind_speed");
	});
	return result;
}

SAM_EXPORT SAM_table SAM_Windpower_Resource_wind_resource_data_tget(SAM_table ptr, SAM_error *err){
	SAM_table result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_table(ptr, "wind_resource_data");
	if (!result)
		make_access_error("SAM_Windpower", "wind_resource_data");
	});
	return result;
}

SAM_EXPORT double* SAM_Windpower_Resource_wind_resource_distribution_mget(SAM_table ptr, int* nrows, int* ncols, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_matrix(ptr, "wind_resource_distribution", nrows, ncols);
	if (!result)
		make_access_error("SAM_Windpower", "wind_resource_distribution");
	});
	return result;
}

SAM_EXPORT const char* SAM_Windpower_Resource_wind_resource_filename_sget(SAM_table ptr, SAM_error *err){
	const char* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_string(ptr, "wind_resource_filename");
	if (!result)
		make_access_error("SAM_Windpower", "wind_resource_filename");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Resource_wind_resource_model_choice_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "wind_resource_model_choice", &result))
		make_access_error("SAM_Windpower", "wind_resource_model_choice");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Turbine_wind_resource_shear_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "wind_resource_shear", &result))
		make_access_error("SAM_Windpower", "wind_resource_shear");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Turbine_wind_turbine_hub_ht_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "wind_turbine_hub_ht", &result))
		make_access_error("SAM_Windpower", "wind_turbine_hub_ht");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Turbine_wind_turbine_max_cp_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "wind_turbine_max_cp", &result))
		make_access_error("SAM_Windpower", "wind_turbine_max_cp");
	});
	return result;
}

SAM_EXPORT double* SAM_Windpower_Turbine_wind_turbine_powercurve_powerout_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "wind_turbine_powercurve_powerout", length);
	if (!result)
		make_access_error("SAM_Windpower", "wind_turbine_powercurve_powerout");
	});
	return result;
}

SAM_EXPORT double* SAM_Windpower_Turbine_wind_turbine_powercurve_windspeeds_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "wind_turbine_powercurve_windspeeds", length);
	if (!result)
		make_access_error("SAM_Windpower", "wind_turbine_powercurve_windspeeds");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Turbine_wind_turbine_rotor_diameter_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "wind_turbine_rotor_diameter", &result))
		make_access_error("SAM_Windpower", "wind_turbine_rotor_diameter");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Farm_max_turbine_override_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "max_turbine_override", &result))
		make_access_error("SAM_Windpower", "max_turbine_override");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Farm_system_capacity_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "system_capacity", &result))
		make_access_error("SAM_Windpower", "system_capacity");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Farm_wind_farm_wake_model_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "wind_farm_wake_model", &result))
		make_access_error("SAM_Windpower", "wind_farm_wake_model");
	});
	return result;
}

SAM_EXPORT double* SAM_Windpower_Farm_wind_farm_xCoordinates_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "wind_farm_xCoordinates", length);
	if (!result)
		make_access_error("SAM_Windpower", "wind_farm_xCoordinates");
	});
	return result;
}

SAM_EXPORT double* SAM_Windpower_Farm_wind_farm_yCoordinates_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "wind_farm_yCoordinates", length);
	if (!result)
		make_access_error("SAM_Windpower", "wind_farm_yCoordinates");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Farm_wind_resource_turbulence_coeff_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "wind_resource_turbulence_coeff", &result))
		make_access_error("SAM_Windpower", "wind_resource_turbulence_coeff");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Losses_avail_bop_loss_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "avail_bop_loss", &result))
		make_access_error("SAM_Windpower", "avail_bop_loss");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Losses_avail_grid_loss_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "avail_grid_loss", &result))
		make_access_error("SAM_Windpower", "avail_grid_loss");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Losses_avail_turb_loss_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "avail_turb_loss", &result))
		make_access_error("SAM_Windpower", "avail_turb_loss");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Losses_elec_eff_loss_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "elec_eff_loss", &result))
		make_access_error("SAM_Windpower", "elec_eff_loss");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Losses_elec_parasitic_loss_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "elec_parasitic_loss", &result))
		make_access_error("SAM_Windpower", "elec_parasitic_loss");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Losses_en_icing_cutoff_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "en_icing_cutoff", &result))
		make_access_error("SAM_Windpower", "en_icing_cutoff");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Losses_en_low_temp_cutoff_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "en_low_temp_cutoff", &result))
		make_access_error("SAM_Windpower", "en_low_temp_cutoff");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Losses_env_degrad_loss_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "env_degrad_loss", &result))
		make_access_error("SAM_Windpower", "env_degrad_loss");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Losses_env_env_loss_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "env_env_loss", &result))
		make_access_error("SAM_Windpower", "env_env_loss");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Losses_env_exposure_loss_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "env_exposure_loss", &result))
		make_access_error("SAM_Windpower", "env_exposure_loss");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Losses_env_icing_loss_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "env_icing_loss", &result))
		make_access_error("SAM_Windpower", "env_icing_loss");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Losses_icing_cutoff_rh_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "icing_cutoff_rh", &result))
		make_access_error("SAM_Windpower", "icing_cutoff_rh");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Losses_icing_cutoff_temp_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "icing_cutoff_temp", &result))
		make_access_error("SAM_Windpower", "icing_cutoff_temp");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Losses_low_temp_cutoff_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "low_temp_cutoff", &result))
		make_access_error("SAM_Windpower", "low_temp_cutoff");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Losses_ops_env_loss_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ops_env_loss", &result))
		make_access_error("SAM_Windpower", "ops_env_loss");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Losses_ops_grid_loss_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ops_grid_loss", &result))
		make_access_error("SAM_Windpower", "ops_grid_loss");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Losses_ops_load_loss_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ops_load_loss", &result))
		make_access_error("SAM_Windpower", "ops_load_loss");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Losses_ops_strategies_loss_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ops_strategies_loss", &result))
		make_access_error("SAM_Windpower", "ops_strategies_loss");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Losses_turb_generic_loss_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "turb_generic_loss", &result))
		make_access_error("SAM_Windpower", "turb_generic_loss");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Losses_turb_hysteresis_loss_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "turb_hysteresis_loss", &result))
		make_access_error("SAM_Windpower", "turb_hysteresis_loss");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Losses_turb_perf_loss_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "turb_perf_loss", &result))
		make_access_error("SAM_Windpower", "turb_perf_loss");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Losses_turb_specific_loss_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "turb_specific_loss", &result))
		make_access_error("SAM_Windpower", "turb_specific_loss");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Losses_wake_ext_loss_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "wake_ext_loss", &result))
		make_access_error("SAM_Windpower", "wake_ext_loss");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Losses_wake_future_loss_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "wake_future_loss", &result))
		make_access_error("SAM_Windpower", "wake_future_loss");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Losses_wake_int_loss_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "wake_int_loss", &result))
		make_access_error("SAM_Windpower", "wake_int_loss");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_AdjustmentFactors_adjust_constant_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "adjust_constant", &result))
		make_access_error("SAM_Windpower", "adjust_constant");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_AdjustmentFactors_adjust_en_periods_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "adjust_en_periods", &result))
		make_access_error("SAM_Windpower", "adjust_en_periods");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_AdjustmentFactors_adjust_en_timeindex_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "adjust_en_timeindex", &result))
		make_access_error("SAM_Windpower", "adjust_en_timeindex");
	});
	return result;
}

SAM_EXPORT double* SAM_Windpower_AdjustmentFactors_adjust_periods_mget(SAM_table ptr, int* nrows, int* ncols, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_matrix(ptr, "adjust_periods", nrows, ncols);
	if (!result)
		make_access_error("SAM_Windpower", "adjust_periods");
	});
	return result;
}

SAM_EXPORT double* SAM_Windpower_AdjustmentFactors_adjust_timeindex_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "adjust_timeindex", length);
	if (!result)
		make_access_error("SAM_Windpower", "adjust_timeindex");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Uncertainty_total_uncert_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "total_uncert", &result))
		make_access_error("SAM_Windpower", "total_uncert");
	});
	return result;
}

SAM_EXPORT double* SAM_Windpower_HybridCosts_degradation_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "degradation", length);
	if (!result)
		make_access_error("SAM_Windpower", "degradation");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_HybridCosts_land_area_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "land_area", &result))
		make_access_error("SAM_Windpower", "land_area");
	});
	return result;
}

SAM_EXPORT double* SAM_Windpower_HybridCosts_om_capacity_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "om_capacity", length);
	if (!result)
		make_access_error("SAM_Windpower", "om_capacity");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_HybridCosts_om_capacity_escal_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "om_capacity_escal", &result))
		make_access_error("SAM_Windpower", "om_capacity_escal");
	});
	return result;
}

SAM_EXPORT double* SAM_Windpower_HybridCosts_om_fixed_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "om_fixed", length);
	if (!result)
		make_access_error("SAM_Windpower", "om_fixed");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_HybridCosts_om_fixed_escal_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "om_fixed_escal", &result))
		make_access_error("SAM_Windpower", "om_fixed_escal");
	});
	return result;
}

SAM_EXPORT double* SAM_Windpower_HybridCosts_om_land_lease_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "om_land_lease", length);
	if (!result)
		make_access_error("SAM_Windpower", "om_land_lease");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_HybridCosts_om_land_lease_escal_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "om_land_lease_escal", &result))
		make_access_error("SAM_Windpower", "om_land_lease_escal");
	});
	return result;
}

SAM_EXPORT double* SAM_Windpower_HybridCosts_om_production_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "om_production", length);
	if (!result)
		make_access_error("SAM_Windpower", "om_production");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_HybridCosts_om_production_escal_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "om_production_escal", &result))
		make_access_error("SAM_Windpower", "om_production_escal");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_HybridCosts_total_installed_cost_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "total_installed_cost", &result))
		make_access_error("SAM_Windpower", "total_installed_cost");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Outputs_annual_energy_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_energy", &result))
		make_access_error("SAM_Windpower", "annual_energy");
	});
	return result;
}

SAM_EXPORT double* SAM_Windpower_Outputs_annual_energy_distribution_time_mget(SAM_table ptr, int* nrows, int* ncols, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_matrix(ptr, "annual_energy_distribution_time", nrows, ncols);
	if (!result)
		make_access_error("SAM_Windpower", "annual_energy_distribution_time");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Outputs_annual_energy_p75_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_energy_p75", &result))
		make_access_error("SAM_Windpower", "annual_energy_p75");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Outputs_annual_energy_p90_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_energy_p90", &result))
		make_access_error("SAM_Windpower", "annual_energy_p90");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Outputs_annual_energy_p95_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_energy_p95", &result))
		make_access_error("SAM_Windpower", "annual_energy_p95");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Outputs_annual_gross_energy_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_gross_energy", &result))
		make_access_error("SAM_Windpower", "annual_gross_energy");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Outputs_avail_losses_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "avail_losses", &result))
		make_access_error("SAM_Windpower", "avail_losses");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Outputs_capacity_factor_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "capacity_factor", &result))
		make_access_error("SAM_Windpower", "capacity_factor");
	});
	return result;
}

SAM_EXPORT double* SAM_Windpower_Outputs_cf_battery_replacement_cost_schedule_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_battery_replacement_cost_schedule", length);
	if (!result)
		make_access_error("SAM_Windpower", "cf_battery_replacement_cost_schedule");
	});
	return result;
}

SAM_EXPORT double* SAM_Windpower_Outputs_cf_energy_net_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_energy_net", length);
	if (!result)
		make_access_error("SAM_Windpower", "cf_energy_net");
	});
	return result;
}

SAM_EXPORT double* SAM_Windpower_Outputs_cf_fuelcell_replacement_cost_schedule_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_fuelcell_replacement_cost_schedule", length);
	if (!result)
		make_access_error("SAM_Windpower", "cf_fuelcell_replacement_cost_schedule");
	});
	return result;
}

SAM_EXPORT double* SAM_Windpower_Outputs_cf_land_lease_expense_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_land_lease_expense", length);
	if (!result)
		make_access_error("SAM_Windpower", "cf_land_lease_expense");
	});
	return result;
}

SAM_EXPORT double* SAM_Windpower_Outputs_cf_om_capacity_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_om_capacity", length);
	if (!result)
		make_access_error("SAM_Windpower", "cf_om_capacity");
	});
	return result;
}

SAM_EXPORT double* SAM_Windpower_Outputs_cf_om_fixed_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_om_fixed", length);
	if (!result)
		make_access_error("SAM_Windpower", "cf_om_fixed");
	});
	return result;
}

SAM_EXPORT double* SAM_Windpower_Outputs_cf_om_fuel_cost_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_om_fuel_cost", length);
	if (!result)
		make_access_error("SAM_Windpower", "cf_om_fuel_cost");
	});
	return result;
}

SAM_EXPORT double* SAM_Windpower_Outputs_cf_om_land_lease_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_om_land_lease", length);
	if (!result)
		make_access_error("SAM_Windpower", "cf_om_land_lease");
	});
	return result;
}

SAM_EXPORT double* SAM_Windpower_Outputs_cf_om_production_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_om_production", length);
	if (!result)
		make_access_error("SAM_Windpower", "cf_om_production");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Outputs_cutoff_losses_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cutoff_losses", &result))
		make_access_error("SAM_Windpower", "cutoff_losses");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Outputs_elec_losses_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "elec_losses", &result))
		make_access_error("SAM_Windpower", "elec_losses");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Outputs_elev_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "elev", &result))
		make_access_error("SAM_Windpower", "elev");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Outputs_env_losses_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "env_losses", &result))
		make_access_error("SAM_Windpower", "env_losses");
	});
	return result;
}

SAM_EXPORT double* SAM_Windpower_Outputs_gen_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "gen", length);
	if (!result)
		make_access_error("SAM_Windpower", "gen");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Outputs_kwh_per_kw_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "kwh_per_kw", &result))
		make_access_error("SAM_Windpower", "kwh_per_kw");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Outputs_lat_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "lat", &result))
		make_access_error("SAM_Windpower", "lat");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Outputs_lon_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "lon", &result))
		make_access_error("SAM_Windpower", "lon");
	});
	return result;
}

SAM_EXPORT double* SAM_Windpower_Outputs_monthly_energy_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "monthly_energy", length);
	if (!result)
		make_access_error("SAM_Windpower", "monthly_energy");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Outputs_ops_losses_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ops_losses", &result))
		make_access_error("SAM_Windpower", "ops_losses");
	});
	return result;
}

SAM_EXPORT double* SAM_Windpower_Outputs_pressure_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "pressure", length);
	if (!result)
		make_access_error("SAM_Windpower", "pressure");
	});
	return result;
}

SAM_EXPORT double* SAM_Windpower_Outputs_temp_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "temp", length);
	if (!result)
		make_access_error("SAM_Windpower", "temp");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Outputs_turb_losses_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "turb_losses", &result))
		make_access_error("SAM_Windpower", "turb_losses");
	});
	return result;
}

SAM_EXPORT double* SAM_Windpower_Outputs_turbine_output_by_windspeed_bin_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "turbine_output_by_windspeed_bin", length);
	if (!result)
		make_access_error("SAM_Windpower", "turbine_output_by_windspeed_bin");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Outputs_wake_losses_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "wake_losses", &result))
		make_access_error("SAM_Windpower", "wake_losses");
	});
	return result;
}

SAM_EXPORT double* SAM_Windpower_Outputs_wind_direction_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "wind_direction", length);
	if (!result)
		make_access_error("SAM_Windpower", "wind_direction");
	});
	return result;
}

SAM_EXPORT double* SAM_Windpower_Outputs_wind_speed_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "wind_speed", length);
	if (!result)
		make_access_error("SAM_Windpower", "wind_speed");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Outputs_wind_speed_average_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "wind_speed_average", &result))
		make_access_error("SAM_Windpower", "wind_speed_average");
	});
	return result;
}

SAM_EXPORT double SAM_Windpower_Outputs_year_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "year", &result))
		make_access_error("SAM_Windpower", "year");
	});
	return result;
}

