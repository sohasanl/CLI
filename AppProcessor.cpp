//
//  CommandProcessor.cpp
//  ECEDatabase
//
//  Created by rick gessner on 3/30/18.
//  Copyright © 2018 rick gessner. All rights reserved.
//

#include <iostream>
#include "AppProcessor.hpp"
#include "Tokenizer.hpp"
#include <memory>

namespace ECE141 {
  
  class VersionStatement : public Statement {
  public:
    VersionStatement() :  Statement(Keywords::version_kw) {}
  };

  //.....................................

  AppCmdProcessor::AppCmdProcessor(CommandProcessor *aNext) : CommandProcessor(aNext) {
  }
  
  AppCmdProcessor::~AppCmdProcessor() {}
  
  // USE: -----------------------------------------------------
  StatusResult AppCmdProcessor::interpret(const Statement &aStatement) {
    //STUDENT: write code related to given statement
    return StatusResult();
  }
  
  // USE: factory to create statement based on given tokens...
  Statement* AppCmdProcessor::getStatement(Tokenizer &aTokenizer) {
    //STUDENT: Analyze tokens in tokenizer, see if they match one of the
    //         statements you are supposed to handle. If so, create a
    //         statement object of that type on heap and return it.
    
    //         If you recognize the tokens, consider using a factory
    //         to construct a custom statement object subclass.
    
    return nullptr;
  }
  
}
