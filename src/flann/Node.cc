// Spatial Index Library
//
// Copyright (C) 2002 Navel Ltd.
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//
//  Email:
//    mhadji@gmail.com

#include <cstring>
#include <cmath>
#include <limits>

#include <spatialindex/SpatialIndex.h>

#include <Flann.h>
#include "Node.h"
#include "Index.h"
#include "Leaf.h"
#include "flann/flann.h"

using namespace SpatialIndex;
using namespace SpatialIndex::FlannTree;

//
// Tools::IObject interface
//
Tools::IObject* Node::clone()
{
	throw Tools::NotSupportedException("IObject::clone should never be called.");
}

//
// Tools::ISerializable interface
//
uint32_t Node::getByteArraySize()
{
}

void Node::loadFromByteArray(const byte* ptr)
{
}

void Node::storeToByteArray(byte** data, uint32_t& len)
{
}

//
// SpatialIndex::IEntry interface
//
SpatialIndex::id_type Node::getIdentifier() const
{

}

void Node::getShape(IShape** out) const
{

}

//
// SpatialIndex::INode interface
//
uint32_t Node::getChildrenCount() const
{

}

SpatialIndex::id_type Node::getChildIdentifier(uint32_t index) const
{

}

void Node::getChildShape(uint32_t index, IShape** out) const
{

}


void Node::getChildData(uint32_t index, uint32_t& length, byte** data) const
{
}

uint32_t Node::getLevel() const
{

}

bool Node::isLeaf() const
{

}

bool Node::isIndex() const
{

}

//
// Internal
//

Node::Node() :
	m_pTree(0),
	m_level(0),
	m_identifier(-1),
	m_children(0),
	m_capacity(0),
	m_pData(0),
	m_ptrMBR(0),
	m_pIdentifier(0),
	m_pDataLength(0),
	m_totalDataLength(0)
{

}

Node::Node (SpatialIndex::FlannTree::FlannTree* pTree, id_type id, uint32_t level, uint32_t capacity) :
    m_pTree(pTree),
	m_level(level),
	m_identifier(id),
	m_children(0),
	m_capacity(capacity),
	m_pData(0),
	m_ptrMBR(0),
	m_pIdentifier(0),
	m_pDataLength(0),
	m_totalDataLength(0)
{
}

Node::~Node()
{
}

Node& Node::operator=(const Node& n)
{
    throw Tools::IllegalStateException("operator =: This should never be called.");   
}

void Node::insertEntry(uint32_t dataLength, byte* pData, TimeRegion& mbr, id_type id)
{
}

bool Node::deleteEntry(uint32_t index)
{
}

bool Node::insertData(
	uint32_t dataLength, byte* pData, TimeRegion& mbr, id_type id, std::stack<id_type>& pathBuffer,
	TimeRegion& mbr2, id_type id2, bool bInsertMbr2, bool bForceAdjust)
{
}

void Node::insertData(TimeRegion& mbr1, id_type id1, TimeRegion& mbr2, id_type id2, Node* oldVersion, std::stack<id_type>& pathBuffer)
{
}

bool Node::deleteData(id_type id, double delTime, std::stack<id_type>& pathBuffer, bool bForceAdjust)
{
}

void Node::rtreeSplit(
	uint32_t dataLength, byte* pData, TimeRegion& mbr, id_type id, std::vector<uint32_t>& group1, std::vector<uint32_t>& group2,
	TimeRegion& mbr2, id_type id2, bool bInsertMbr2)
{
}

void Node::rstarSplit(
	uint32_t dataLength, byte* pData, TimeRegion& mbr, id_type id, std::vector<uint32_t>& group1, std::vector<uint32_t>& group2,
	TimeRegion& mbr2, id_type id2, bool bInsertMbr2)
{
}

void Node::pickSeeds(uint32_t& index1, uint32_t& index2, uint32_t total)
{
}

NodePtr Node::findNode(const TimeRegion& mbr, id_type id, std::stack<id_type>& pathBuffer)
{
}
