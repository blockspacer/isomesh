/* This file is part of Isomesh library, released under MIT license.
  Copyright (c) 2018 Pavel Asyutchenko (sventeam@yandex.ru) */
/** \file
	\brief Defines material choosing functions
*/
#pragma once

#include "../data/grid.hpp"

namespace isomesh
{

/** \brief Selects material for uniform grid cell

	Pos denotes local coordinates of cell vertex closest to the 'lowest'
	vertex in the grid (-size/2, -size/2, -size/2).
	Vertex mask defines which cell vertices should be considered
	in selection. i-th bit denotes i-th vertex in YXZ traversal order.
	For example, consider cell (0, 0, 0)-(1, 1, 1), then bits will mean:
	0 - (0, 0, 0)
	1 - (0, 0, 1)
	2 - (1, 0, 0)
	3 - (1, 0, 1)
	4 - (0, 1, 0)
	5 - (0, 1, 1)
	6 - (1, 1, 0)
	7 - (1, 1, 1)
	All-zero mask is not valid.
*/
class MaterialFilter {
public:
	virtual Material select (const UniformGrid &G, glm::ivec3 pos,
	                         uint8_t vertexMask) const noexcept = 0;
};

class AnyNonemptyMaterialFilter : public MaterialFilter {
public:
	virtual Material select (const UniformGrid &G, glm::ivec3 pos,
	                         uint8_t vertexMask) const noexcept override;
};

class HistogramMaterialFilter : public MaterialFilter {
public:
	virtual Material select (const UniformGrid &G, glm::ivec3 pos,
	                         uint8_t vertexMask) const noexcept override;
};

}