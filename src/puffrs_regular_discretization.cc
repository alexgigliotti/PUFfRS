// Copyright 2017 John T. Foster

// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at

//    http://www.apache.org/licenses/LICENSE-2.0

// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
#include "puffrs_regular_discretization.h"
#include "puffrs_discretization.h"


/** Input file parser
 *
 * @param kInputFile input file
 * @return puffrs_parameters parsed input file
 */
puffrs::RegularDiscretization::RegularDiscretization(
    const Teuchos::RCP<const Teuchos::Comm<puffrs::types::PuffrsComm> >& kComm,
    const Teuchos::RCP<Teuchos::ParameterList>& kDiscretizationParameters)
    : Discretization(kComm, kDiscretizationParameters), kComm_(kComm) {
    const auto kFileName =
        kDiscretizationParameters->get<std::string>("file name");

    this->initialize();
}
