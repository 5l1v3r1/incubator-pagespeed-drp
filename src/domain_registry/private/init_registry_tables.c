/*
 * Copyright 2011 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "domain_registry/domain_registry.h"

#include <stdlib.h>

#include "domain_registry/private/registry_types.h"
#include "domain_registry/private/trie_node.h"
#include "domain_registry/private/trie_search.h"

/* Include the generated file that contains the actual registry tables. */
#include "registry_tables_genfiles/registry_tables.h"

void InitializeDomainRegistry(void) {
  SetRegistryTables(kStringTable,
                    kNodeTable,
                    kNumRootChildren,
                    kLeafNodeTable,
                    kLeafChildOffset);
}
