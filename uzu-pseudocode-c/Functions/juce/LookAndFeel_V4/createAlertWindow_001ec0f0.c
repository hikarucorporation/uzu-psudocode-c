// Function : createAlertWindow
// Namespace: juce:LookAndFeel_V4
// Entry    : 001ec0f0
// Prototype: Component * createAlertWindow(undefined8 param_1, undefined8 param_2_00, undefined8 param_3_00, long * param_4, undefined8 * param_5, uint * param_6, uint * param_7, uint * param_8, undefined4 param_9, uint param_10, long * param_11)
// Body     : 001ec0f0 - 001ec1cc


/* WARNING: Unknown calling convention: __cdecl */
/* juce::LookAndFeel_V4::createAlertWindow(juce::String const&, juce::String const&, juce::String
   const&, juce::String const&, juce::String const&, juce::MessageBoxIconType, int,
   juce::Component*) */

Component * __cdecl
juce::LookAndFeel_V4::createAlertWindow
          (undefined8 param_1,undefined8 param_2_00,undefined8 param_3_00,long *param_4,
          undefined8 *param_5,uint *param_6,uint *param_7,uint *param_8,undefined4 param_9,
          uint param_10,long *param_11)

{
  int iVar1;
  long lVar2;
  Component *this;
  Component *this_00;
  long lVar3;
  
  this = LookAndFeel_V2::createAlertWindow
                   (param_1,param_2_00,(ulong)param_10,param_4,param_5,param_6,param_7,param_8,
                    param_9,param_10,param_11);
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


