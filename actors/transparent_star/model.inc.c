Lights1 transparent_star_body_lights = gdSPDefLights1(
	0x35, 0x4E, 0x69,
	0x71, 0xA1, 0xD4, 0x28, 0x28, 0x28);

Vtx transparent_star_mesh_l5_vtx_0[12] = {
	{{ {0, 19, -22}, 0, {-16, -16}, {0, 2, 129, 255} }},
	{{ {48, -33, 0}, 0, {-16, -16}, {86, 162, 0, 255} }},
	{{ {0, -15, 0}, 0, {-16, -16}, {0, 129, 0, 255} }},
	{{ {37, 6, 0}, 0, {-16, -16}, {125, 233, 0, 255} }},
	{{ {65, 38, 0}, 0, {-16, -16}, {120, 43, 0, 255} }},
	{{ {24, 42, 0}, 0, {-16, -16}, {55, 115, 0, 255} }},
	{{ {0, 78, 0}, 0, {-16, -16}, {0, 127, 0, 255} }},
	{{ {-23, 42, 0}, 0, {-16, -16}, {200, 114, 0, 255} }},
	{{ {-64, 38, 0}, 0, {-16, -16}, {136, 43, 0, 255} }},
	{{ {-36, 6, 0}, 0, {-16, -16}, {131, 233, 0, 255} }},
	{{ {-47, -33, 0}, 0, {-16, -16}, {170, 162, 0, 255} }},
	{{ {0, 19, 23}, 0, {-16, -16}, {0, 2, 127, 255} }},
};

Gfx transparent_star_mesh_l5_tri_0[] = {
	gsSPVertex(transparent_star_mesh_l5_vtx_0 + 0, 12, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(5, 4, 0, 0),
	gsSP1Triangle(5, 0, 6, 0),
	gsSP1Triangle(0, 7, 6, 0),
	gsSP1Triangle(0, 8, 7, 0),
	gsSP1Triangle(0, 9, 8, 0),
	gsSP1Triangle(0, 10, 9, 0),
	gsSP1Triangle(0, 2, 10, 0),
	gsSP1Triangle(10, 2, 11, 0),
	gsSP1Triangle(2, 1, 11, 0),
	gsSP1Triangle(1, 3, 11, 0),
	gsSP1Triangle(11, 3, 4, 0),
	gsSP1Triangle(11, 4, 5, 0),
	gsSP1Triangle(6, 11, 5, 0),
	gsSP1Triangle(6, 7, 11, 0),
	gsSP1Triangle(7, 8, 11, 0),
	gsSP1Triangle(8, 9, 11, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSPEndDisplayList(),
};


Gfx mat_transparent_star_body[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(SHADE, 0, SHADE, 0, PRIMITIVE, 0, PRIMITIVE, 0, SHADE, 0, SHADE, 0, PRIMITIVE, 0, PRIMITIVE, 0),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 217, 248, 255, 178),
	gsSPSetLights1(transparent_star_body_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_transparent_star_body[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK),
	gsSPEndDisplayList(),
};

Gfx transparent_star_mesh_l5[] = {
	gsSPDisplayList(mat_transparent_star_body),
	gsSPDisplayList(transparent_star_mesh_l5_tri_0),
	gsSPDisplayList(mat_revert_transparent_star_body),
	gsSPEndDisplayList(),
};

Gfx transparent_star_mat_rrs[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};