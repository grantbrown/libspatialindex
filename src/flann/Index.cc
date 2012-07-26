#include <spatialindex/SpatialIndex.h>
#include "Flann.h"
#include "Node.h"
#include "Leaf.h"
#include "Index.h"


using namespace SpatialIndex;
using namespace SpatialIndex::Flann;

Index::~Index()
{
}

Index::Index(SpatialIndex::Flann::Flann* pTree, id_type id, uint32_t level) : Node(pTree, id, level, pTree->m_indexCapacity)
{
}

NodePtr Index::chooseSubtree(const TimeRegion& mbr, uint32_t insertionLevel, std::stack<id_type>& pathBuffer)
{

}


NodePtr Index::findLeaf(const TimeRegion& mbr, id_type id, std::stack<id_type>& pathBuffer)
{
}

void Index::split(
	uint32_t dataLength, byte* pData, TimeRegion& mbr, id_type id, NodePtr& pLeft, NodePtr& pRight,
	TimeRegion& mbr2, id_type id2, bool bInsertMbr2)
{

}

uint32_t Index::findLeastEnlargement(const TimeRegion& r) const
{

}

uint32_t Index::findLeastOverlap(const TimeRegion& r) const
{

}

void Index::adjustTree(Node* n, std::stack<id_type>& pathBuffer)
{
}

void Index::adjustTree(Node* n, Node* nn, std::stack<id_type>& pathBuffer)
{
}
