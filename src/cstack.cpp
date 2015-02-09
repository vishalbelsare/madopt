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

#include "cstack.hpp"

namespace MadOpt {

void CStack::doAdd(const Idx& nofelems){

}

void CStack::doMull(){

}

double& CStack::lastG(){
    return dummy;
}

void CStack::doUnaryOp(const double& jac_value, const double& hess_value){

}

void CStack::emplace_back(const Idx& id){

}

void CStack::emplace_back(const double& value){

}

void CStack::setX(const double* xx, const Idx& size){

}

void CStack::clear(){

}

void CStack::fill(double* jac, double* hess){

}

void CStack::resize(const SimStack& simstack){

}

}

