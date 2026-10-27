// Function : withCategory
// Namespace: juce:RangedAudioParameterAttributes_juce__AudioParameterFloatAttributes_float_
// Entry    : 00173a10
// Prototype: String * withCategory(String * param_1, long * param_2, undefined4 param_3)
// Body     : 00173a10 - 00173b76


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::RangedAudioParameterAttributes<juce::AudioParameterFloatAttributes,
   float>::withCategory(juce::AudioProcessorParameter::Category) const */

String * __cdecl
juce::RangedAudioParameterAttributes<juce::AudioParameterFloatAttributes,float>::withCategory
          (String *param_1,long *param_2,undefined4 param_3)

{
  String aSStack_98 [8];
  undefined4 uStack_90;
  undefined3 uStack_8c;
  String local_88 [8];
  undefined4 uStack_80;
  undefined3 uStack_7c;
  RangedAudioParameterAttributes<juce::AudioParameterFloatAttributes,float> local_78 [8];
  undefined4 local_70;
  undefined3 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  code *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  code *local_38;
  undefined8 uStack_30;
  
  RangedAudioParameterAttributes(local_78,param_2);
  juce::String::String(local_88,param_2);
  uStack_7c = (undefined3)((uint)*(undefined4 *)((long)param_2 + 0xb) >> 8);
  uStack_80 = param_3;
  juce::String::String(aSStack_98,(undefined8 *)local_88);
  uStack_8c = uStack_7c;
  uStack_90 = uStack_80;
  juce::String::~String(local_88);
  juce::String::operator=((String *)local_78,(undefined8 *)aSStack_98);
  local_70 = uStack_90;
  uStack_6c = uStack_8c;
  juce::String::String(param_1,(undefined8 *)local_78);
  *(uint *)(param_1 + 0xb) = CONCAT31(uStack_6c,local_70._3_1_);
  *(undefined4 *)(param_1 + 8) = local_70;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = uStack_50;
  if (local_58 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = local_68;
    *(undefined8 *)(param_1 + 0x18) = uStack_60;
    *(code **)(param_1 + 0x20) = local_58;
    local_58 = (code *)0x0;
    uStack_50 = 0;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = uStack_30;
  if (local_38 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = local_48;
    *(undefined8 *)(param_1 + 0x38) = uStack_40;
    *(code **)(param_1 + 0x40) = local_38;
    local_38 = (code *)0x0;
    uStack_30 = 0;
  }
  juce::String::~String(aSStack_98);
  if (local_38 != (code *)0x0) {
                    /* try { // try from 00173b3a to 00173b43 has its CatchHandler @ 00173b7f */
    (*local_38)(&local_48,&local_48,3);
  }
  if (local_58 != (code *)0x0) {
                    /* try { // try from 00173b53 to 00173b5c has its CatchHandler @ 00173b77 */
    (*local_58)(&local_68,&local_68,3);
  }
  juce::String::~String((String *)local_78);
  return param_1;
}


