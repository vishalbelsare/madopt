/*
 * Copyright 2014 National ICT Australia Limited (NICTA)
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "simstack.hpp"

namespace MadOpt {

void SimStack::doAdd(const Idx& nofelems){

}

void SimStack::doMull(){

}

double& SimStack::lastG(){
    return dummy;
}

void SimStack::doUnaryOp(const double& jac_value, const double& hess_value){

}

void SimStack::emplace_back(const Idx& id){

}

void SimStack::emplace_back(const double& value){

}

void SimStack::setX(const double* xx, const Idx& size){

}

void CStack::clear(){

}
}
