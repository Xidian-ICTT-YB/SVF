//===- CallGraphBuilder.h ----------------------------------------------------------------//
//
//                     SVF: Static Value-Flow Analysis
//
// Copyright (C) <2013->  <Yulei Sui>
//

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Affero General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Affero General Public License for more details.

// You should have received a copy of the GNU Affero General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
//===----------------------------------------------------------------------===//


/*
 * CallGraphBuilder.h
 *
 *  Created on: 13Mar.,2020
 *      Author: Yulei Sui
 */

#ifndef INCLUDE_SVF_FE_CALLGRAPHBUILDER_H_
#define INCLUDE_SVF_FE_CALLGRAPHBUILDER_H_

#include "Graphs/ThreadCallGraph.h"

namespace SVF
{

class ICFG;
class CallGraph;
class ThreadCallGraph;

class CallGraphBuilder
{
public:
    CallGraphBuilder()=default;

    /// Buidl SVFIR callgraoh
    CallGraph* buildSVFIRCallGraph(const std::vector<const FunObjVar*>& funset);

    /// Buidl PTA callgraoh
    CallGraph* buildPTACallGraph();

    /// Build thread-aware callgraph
    ThreadCallGraph* buildThreadCallGraph();
};

} // End namespace SVF


#endif /* INCLUDE_UTIL_CALLGRAPHBUILDER_H_ */
