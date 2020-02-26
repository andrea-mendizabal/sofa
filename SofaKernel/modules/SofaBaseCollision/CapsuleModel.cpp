/******************************************************************************
*       SOFA, Simulation Open-Framework Architecture, development version     *
*                (c) 2006-2019 INRIA, USTL, UJF, CNRS, MGH                    *
*                                                                             *
* This program is free software; you can redistribute it and/or modify it     *
* under the terms of the GNU Lesser General Public License as published by    *
* the Free Software Foundation; either version 2.1 of the License, or (at     *
* your option) any later version.                                             *
*                                                                             *
* This program is distributed in the hope that it will be useful, but WITHOUT *
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or       *
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License *
* for more details.                                                           *
*                                                                             *
* You should have received a copy of the GNU Lesser General Public License    *
* along with this program. If not, see <http://www.gnu.org/licenses/>.        *
*******************************************************************************
* Authors: The SOFA Team and external contributors (see Authors.txt)          *
*                                                                             *
* Contact information: contact@sofa-framework.org                             *
******************************************************************************/
#define SOFA_COMPONENT_COLLISION_CAPSULECOLLISIONMODEL_CPP
#include <SofaBaseCollision/CapsuleModel.inl>
#include <sofa/core/ObjectFactory.h>

namespace sofa
{

namespace component
{

namespace collision
{

using namespace sofa::defaulttype;

int CapsuleCollisionModelClass = core::RegisterObject("Collision model which represents a set of Capsules")
        .add< CapsuleCollisionModel<sofa::defaulttype::Vec3Types> >()

        .addAlias("Capsule")
        .addAlias("CapsuleModel")
        .addAlias("TCapsuleModel")

        ;

template class SOFA_BASE_COLLISION_API TCapsule<defaulttype::Vec3Types>;
template class SOFA_BASE_COLLISION_API CapsuleCollisionModel<defaulttype::Vec3Types>;



} // namespace collision

} // namespace component

} // namespace sofa

