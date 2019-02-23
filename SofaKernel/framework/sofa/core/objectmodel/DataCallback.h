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
#ifndef SOFA_CORE_OBJECTMODEL_DATACALLBACK_H
#define SOFA_CORE_OBJECTMODEL_DATACALLBACK_H

#include <functional>
#include <sofa/core/objectmodel/BaseData.h>
#include <sofa/simulation/Node.h>

namespace sofa
{

namespace core
{

namespace objectmodel
{

/// DataCallback
class DataCallback : public sofa::core::objectmodel::DDGNode
{
public:

    typedef sofa::core::objectmodel::BaseData BaseData;

    DataCallback(BaseData* data);
    DataCallback(std::initializer_list<BaseData*> datas);

    void addCallback(std::function<void(void)>);

    void notifyEndEdit(const core::ExecParams* params) override;
    void update() override {}

    const std::string& getName() const override ;
    sofa::core::objectmodel::Base* getOwner() const override ;
    sofa::core::objectmodel::BaseData* getData() const override ;

private:
    bool m_updating;
    std::vector<std::function<void(void)>> m_callbacks;
    std::vector<sofa::core::objectmodel::BaseData*> m_datas;
};

}

}

}

#endif /// SOFA_CORE_OBJECTMODEL_DATACALLBACK_H

