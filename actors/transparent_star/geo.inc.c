#include "src/game/envfx_snow.h"

const GeoLayout transparent_star_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 155, 100),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, transparent_star_mesh_l5),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, transparent_star_mat_rrs),
	GEO_CLOSE_NODE(),
	GEO_END(),
};