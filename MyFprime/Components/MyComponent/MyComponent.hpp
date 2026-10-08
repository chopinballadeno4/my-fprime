// ======================================================================
// \title  MyComponent.hpp
// \author baesungmin
// \brief  hpp file for MyComponent component implementation class
// ======================================================================

#ifndef MyFprime_MyComponent_HPP
#define MyFprime_MyComponent_HPP

#include "MyFprime/Components/MyComponent/MyComponentComponentAc.hpp"

namespace MyFprime {

class MyComponent final : public MyComponentComponentBase {
  public:
    // ----------------------------------------------------------------------
    // Component construction and destruction
    // ----------------------------------------------------------------------

    //! Construct MyComponent object
    MyComponent(const char* const compName  //!< The component name
    );

    //! Destroy MyComponent object
    ~MyComponent();

  private:
    // ----------------------------------------------------------------------
    // Handler implementations for commands
    // ----------------------------------------------------------------------

    //! Handler implementation for command TODO
    //!
    //! TODO
    void TODO_cmdHandler(FwOpcodeType opCode,  //!< The opcode
                         U32 cmdSeq            //!< The command sequence number
                         ) override;
};

}  // namespace MyFprime

#endif
