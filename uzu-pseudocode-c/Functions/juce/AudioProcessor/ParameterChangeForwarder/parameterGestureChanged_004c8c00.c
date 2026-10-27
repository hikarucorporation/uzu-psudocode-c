// Function : parameterGestureChanged
// Namespace: juce:AudioProcessor:ParameterChangeForwarder
// Entry    : 004c8c00
// Prototype: undefined parameterGestureChanged(ParameterChangeForwarder * this, undefined4 param_1, byte param_2)
// Body     : 004c8c00 - 004c8cbb


/* juce::AudioProcessor::ParameterChangeForwarder::parameterGestureChanged(int, bool) */

void __thiscall
juce::AudioProcessor::ParameterChangeForwarder::parameterGestureChanged
          (ParameterChangeForwarder *this,undefined4 param_1,byte param_2)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *(long *)(this + 8);
  if ((lVar6 != 0) && (uVar4 = *(uint *)(lVar6 + 0x24), 0 < (int)uVar4)) {
    pcVar1 = (code *)((ulong)(param_2 ^ 1) * 8 + 0x21);
    uVar5 = (ulong)(uVar4 - 1);
    if (((ulong)pcVar1 & 1) == 0) {
      if (uVar4 <= uVar5) goto LAB_004c8c5a;
      do {
        lVar2 = *(long *)(*(long *)(lVar6 + 0x18) + uVar5 * 8);
        if (lVar2 != 0) {
          (*pcVar1)(lVar2,lVar6,param_1);
        }
LAB_004c8c5a:
        do {
          if ((long)uVar5 < 1) {
            return;
          }
          uVar5 = uVar5 - 1;
          lVar6 = *(long *)(this + 8);
        } while (*(uint *)(lVar6 + 0x24) <= uVar5);
      } while( true );
    }
    while( true ) {
      if ((uVar5 < uVar4) &&
         (plVar3 = *(long **)(*(long *)(lVar6 + 0x18) + uVar5 * 8), plVar3 != (long *)0x0)) {
        (**(code **)(pcVar1 + *plVar3 + -1))(plVar3,lVar6,param_1);
      }
      if ((long)uVar5 < 1) break;
      uVar5 = uVar5 - 1;
      lVar6 = *(long *)(this + 8);
      uVar4 = *(uint *)(lVar6 + 0x24);
    }
  }
  return;
}


