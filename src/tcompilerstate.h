#ifndef _tcompilerstate_h
#define _tcompilerstate_h

#include "llvmheaders.h"
#include "tinline.h"

struct terra_CompilerState {
    llvm::Module * m;
    llvm::LLVMContext * ctx;
    llvm::ExecutionEngine * ee;
    llvm::FunctionPassManager * fpm;
    llvm::TargetMachine * tm;
    llvm::ManualInliner * mi;
    size_t next_unused_id; //for creating names for dummy functions
};

#endif