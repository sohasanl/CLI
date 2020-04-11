//
//  Storage.cpp
//  Assignment2
//
//  Created by rick gessner on 4/5/20.
//  Copyright © 2020 rick gessner. All rights reserved.
//

#include "Storage.hpp"

namespace ECE141 {

  // USE: Our main class for managing storage...
  const char* StorageInfo::getDefaultStoragePath() {
    return "/tmp"; //may not be right for your platform...
  }

}


