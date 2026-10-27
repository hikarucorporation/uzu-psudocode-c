// Function : mouseMagnify
// Namespace: juce:Component
// Entry    : 002229a0
// Prototype: undefined mouseMagnify(undefined4 param_1, long param_2, ulong * param_3)
// Body     : 002229a0 - 00222a25


/* WARNING: Unknown calling convention: __cdecl */
/* juce::Component::mouseMagnify(juce::MouseEvent const&, float) */

void __cdecl juce::Component::mouseMagnify(undefined4 param_1,long param_2,ulong *param_3)

{
  long *plVar1;
  long *plVar2;
  float local_70 [24];
  
  plVar1 = *(long **)(param_2 + 0x30);
  do {
    if (plVar1 == (long *)0x0) {
      return;
    }
    plVar2 = plVar1;
    while ((*(ushort *)(plVar2 + 0x1d) & 0x8000) == 0) {
      plVar2 = (long *)plVar2[6];
      if (plVar2 == (long *)0x0) {
        if (plVar1 == (long *)0x0) {
          return;
        }
        MouseEvent::getEventRelativeTo(local_70,param_3,plVar1);
        (**(code **)(*plVar1 + 0x50))(param_1,plVar1,local_70);
        return;
      }
    }
    plVar1 = (long *)plVar1[6];
  } while( true );
}


