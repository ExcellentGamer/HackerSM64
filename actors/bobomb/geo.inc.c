#include "src/game/envfx_snow.h"

const GeoLayout bobomb_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 200, 70),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 4, 0, bobomb_root_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_ALPHA, bobomb_root_mesh_layer_4),
				GEO_ASM(4, geo_obj_opacity_as_env),
				GEO_BILLBOARD_WITH_PARAMS_AND_DL(LAYER_ALPHA, 0, 49, 0, bobomb_billboard_mesh_layer_4),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 15, 33, 0, bobomb_foot_L_mesh_layer_1),
				GEO_ANIMATED_PART(LAYER_OPAQUE, -15, 33, 0, bobomb_foot_R_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bobomb_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, bobomb_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};