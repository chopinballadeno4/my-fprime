// ======================================================================
// \title  MyComponent.cpp
// \author baesungmin
// \brief  cpp file for MyComponent component implementation class
// ======================================================================

#include "MyFprime/Components/MyComponent/MyComponent.hpp"

namespace MyFprime {

// ----------------------------------------------------------------------
// Component construction and destruction
// ----------------------------------------------------------------------

MyComponent ::MyComponent(const char* const compName) : MyComponentComponentBase(compName) {}

MyComponent ::~MyComponent() {}

// ----------------------------------------------------------------------
// Handler implementations for commands
// ----------------------------------------------------------------------

void MyComponent ::TODO_cmdHandler(FwOpcodeType opCode, U32 cmdSeq) {
    // TODO
    this->cmdResponse_out(opCode, cmdSeq, Fw::CmdResponse::OK);
}

}  // namespace MyFprime
