/* This file is part of Isomesh library, released under MIT license.
  Copyright (c) 2018-2019 Pavel Asyutchenko (sventeam@yandex.ru) */
#include <isomesh/data/mdc_octree_node.hpp>

namespace isomesh
{

MDC_OctreeNode::MDC_OctreeNode () noexcept : m_children (nullptr)
{}

MDC_OctreeNode::~MDC_OctreeNode () noexcept {
	delete[] m_children;
}

void MDC_OctreeNode::subdivide () {
	if (m_children)
		throw std::logic_error ("Octree node is already subdivided");
	m_children = new MDC_OctreeNode[8];
	for (int i = 0; i < 8; i++)
		m_children[i].m_depth = m_depth + 1;
}

void MDC_OctreeNode::collapse () noexcept {
	delete[] m_children;
	m_children = nullptr;
}

}