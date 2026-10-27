// Function : parameterValueChanged
// Namespace: juce:AudioProcessor:ParameterChangeForwarder
// Entry    : 004c8b80
// Prototype: undefined parameterValueChanged(undefined4 param_1, ParameterChangeForwarder * this, undefined4 param_3)
// Body     : 004c8b80 - 004c8bf2


/* juce::AudioProcessor::ParameterChangeForwarder::parameterValueChanged(int, float) */

void __thiscall
juce::AudioProcessor::ParameterChangeForwarder::parameterValueChanged
          (undefined4 param_1,ParameterChangeForwarder *this,undefined4 param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *(long *)(this + 8);
  if (lVar6 != 0) {
    uVar1 = *(uint *)(lVar6 + 0x24);
    uVar3 = (ulong)uVar1;
    if (0 < (int)uVar1) {
      uVar5 = uVar3 - 1;
      uVar4 = uVar3;
      if (uVar1 <= (uint)uVar5) goto LAB_004c8bce;
      do {
        plVar2 = *(long **)(*(long *)(lVar6 + 0x18) + (uVar5 & 0xffffffff) * 8);
        uVar4 = uVar3;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x10))(param_1,plVar2,lVar6,param_3);
        }
LAB_004c8bce:
        do {
          uVar3 = uVar5;
          if (uVar4 < 2) {
            return;
          }
          lVar6 = *(long *)(this + 8);
          uVar5 = uVar3 - 1;
          uVar4 = uVar3;
        } while (*(uint *)(lVar6 + 0x24) <= (uint)uVar5);
      } while( true );
    }
  }
  return;
}


