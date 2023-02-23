#include "src/game/envfx_snow.h"

const GeoLayout star_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 155, 100),
		GEO_OPEN_NODE(),
			GEO_BILLBOARD_WITH_PARAMS_AND_DL(LAYER_TRANSPARENT, 0, 0, 0, star_glow_mesh_l5),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, star_mesh_l1),
			GEO_DISPLAY_LIST(LAYER_ALPHA, star_mesh_l4),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, star_mat_rrs),
		GEO_DISPLAY_LIST(LAYER_ALPHA, star_mat_rrs),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, star_mat_rrs),
	GEO_CLOSE_NODE(),
	GEO_END(),
};