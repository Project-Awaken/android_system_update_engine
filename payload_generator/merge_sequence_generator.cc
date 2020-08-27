//
// Copyright (C) 2020 The Android Open Source Project
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#include "update_engine/payload_generator/merge_sequence_generator.h"

namespace chromeos_update_engine {

std::unique_ptr<MergeSequenceGenerator> MergeSequenceGenerator::Create(
    const std::vector<AnnotatedOperation>& aops) {
  return std::unique_ptr<MergeSequenceGenerator>(
      new MergeSequenceGenerator({}));
}

bool MergeSequenceGenerator::FindDependency(
    std::map<CowMergeOperation, std::set<CowMergeOperation>>* result) const {
  CHECK(result);
  return true;
}

bool MergeSequenceGenerator::Generate(
    std::vector<CowMergeOperation>* sequence) const {
  return true;
}

bool MergeSequenceGenerator::ValidateSequence(
    const std::vector<CowMergeOperation>& sequence) {
  return true;
}

}  // namespace chromeos_update_engine