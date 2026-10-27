// Function : createAlertWindow
// Namespace: juce:LookAndFeel_V4
// Entry    : 00201f40
// Prototype: Component * createAlertWindow(void)
// Body     : 00201f40 - 00201f44


/* non-virtual thunk to juce::LookAndFeel_V4::createAlertWindow(juce::String const&, juce::String
   const&, juce::String const&, juce::String const&, juce::String const&, juce::MessageBoxIconType,
   int, juce::Component*) */

Component * __thiscall juce::LookAndFeel_V4::createAlertWindow(void)

{
  int iVar1;
  long lVar2;
  Component *this;
  Component *this_00;
  uint *in_RCX;
  undefined8 *in_RDX;
  long lVar3;
  long *in_RSI;
  uint *in_R8;
  uint *in_R9;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined4 in_stack_00000008;
  uint in_stack_00000010;
  long *in_stack_00000018;
  
  this = LookAndFeel_V2::createAlertWindow
                   (in_XMM0_Qa,in_XMM1_Qa,(ulong)in_stack_00000010,in_RSI,in_RDX,in_RCX,in_R8,in_R9,
                    in_stack_00000008,in_stack_00000010,in_stack_00000018);
  Component::setBounds
            (this,(int)*(undefined8 *)(this + 0x38) + -0x19,
             (int)((ulong)*(undefined8 *)(this + 0x38) >> 0x20) + -0x19,
             (int)*(undefined8 *)(this + 0x40) + 0x32,
             (int)((ulong)*(undefined8 *)(this + 0x40) >> 0x20) + 0x32);
  iVar1 = *(int *)(this + 100);
  if ((long)iVar1 != 0) {
    lVar2 = *(long *)(this + 0x58);
    lVar3 = 0;
    do {
      if (*(long *)(lVar2 + lVar3) != 0) {
        this_00 = (Component *)
                  __dynamic_cast(*(long *)(lVar2 + lVar3),&Component::typeinfo,&TextButton::typeinfo
                                 ,0);
        if (this_00 != (Component *)0x0) {
          Component::setBounds
                    (this_00,(int)*(undefined8 *)(this_00 + 0x38) + 0x19,
                     (int)((ulong)*(undefined8 *)(this_00 + 0x38) >> 0x20) + 0x28,
                     (int)*(undefined8 *)(this_00 + 0x40),
                     (int)((ulong)*(undefined8 *)(this_00 + 0x40) >> 0x20));
        }
      }
      lVar3 = lVar3 + 8;
    } while ((long)iVar1 * 8 != lVar3);
  }
  return this;
}


