// Function : withStringFromValueFunction
// Namespace: juce:RangedAudioParameterAttributes_juce__AudioParameterFloatAttributes_float_
// Entry    : 00173b90
// Prototype: String * withStringFromValueFunction(String * param_1, long * param_2, undefined8 * param_3)
// Body     : 00173b90 - 00173ccd


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::RangedAudioParameterAttributes<juce::AudioParameterFloatAttributes,
   float>::withStringFromValueFunction(std::function<juce::String (float, int)>) const */

String * __cdecl
juce::RangedAudioParameterAttributes<juce::AudioParameterFloatAttributes,float>::
withStringFromValueFunction(String *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 local_98;
  undefined8 uStack_90;
  code *local_88;
  undefined8 local_80;
  RangedAudioParameterAttributes<juce::AudioParameterFloatAttributes,float> local_78 [8];
  undefined4 local_70;
  undefined3 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  code *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  RangedAudioParameterAttributes(local_78,param_2);
  pcVar3 = local_58;
  local_98 = 0;
  uStack_90 = 0;
  lVar1 = param_3[2];
  uVar2 = param_3[3];
  if (lVar1 != 0) {
    local_98 = *param_3;
    uStack_90 = param_3[1];
    param_3[2] = 0;
    param_3[3] = 0;
  }
  local_28 = (undefined4)local_98;
  uStack_24 = local_98._4_4_;
  uStack_20 = (undefined4)uStack_90;
  uStack_1c = uStack_90._4_4_;
  local_68 = (undefined4)local_98;
  uStack_64 = local_98._4_4_;
  uStack_60 = (undefined4)uStack_90;
  uStack_5c = uStack_90._4_4_;
  local_88 = local_58;
  local_80 = uStack_50;
  bVar4 = local_58 != (code *)0x0;
  local_58 = (code *)lVar1;
  uStack_50 = uVar2;
  if (bVar4) {
                    /* try { // try from 00173c14 to 00173c20 has its CatchHandler @ 00173cce */
    (*pcVar3)(&local_98,&local_98,3);
  }
  juce::String::String(param_1,(undefined8 *)local_78);
  *(uint *)(param_1 + 0xb) = CONCAT31(uStack_6c,local_70._3_1_);
  *(undefined4 *)(param_1 + 8) = local_70;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = uStack_50;
  if (local_58 != (code *)0x0) {
    *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_64,local_68);
    *(ulong *)(param_1 + 0x18) = CONCAT44(uStack_5c,uStack_60);
    *(code **)(param_1 + 0x20) = local_58;
    local_58 = (code *)0x0;
    uStack_50 = 0;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = uStack_30;
  if (local_38 != 0) {
    *(undefined8 *)(param_1 + 0x30) = local_48;
    *(undefined8 *)(param_1 + 0x38) = uStack_40;
    *(long *)(param_1 + 0x40) = local_38;
    local_38 = 0;
    uStack_30 = 0;
  }
  juce::String::~String((String *)local_78);
  return param_1;
}


