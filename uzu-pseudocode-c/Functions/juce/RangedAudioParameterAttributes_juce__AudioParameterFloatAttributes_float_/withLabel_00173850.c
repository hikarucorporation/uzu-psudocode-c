// Function : withLabel
// Namespace: juce:RangedAudioParameterAttributes_juce__AudioParameterFloatAttributes_float_
// Entry    : 00173850
// Prototype: String * withLabel(String * param_1, long * param_2, undefined8 * param_3)
// Body     : 00173850 - 001739f2


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::RangedAudioParameterAttributes<juce::AudioParameterFloatAttributes,
   float>::withLabel(juce::String) const */

String * __cdecl
juce::RangedAudioParameterAttributes<juce::AudioParameterFloatAttributes,float>::withLabel
          (String *param_1,long *param_2,undefined8 *param_3)

{
  String local_a0 [8];
  undefined4 uStack_98;
  undefined3 uStack_94;
  String local_90 [8];
  undefined4 uStack_88;
  undefined3 uStack_84;
  String local_80 [8];
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
  juce::String::String(local_80,param_3);
  juce::String::String(local_90,param_2);
  uStack_88 = (undefined4)param_2[1];
  uStack_84 = (undefined3)((uint)*(undefined4 *)((long)param_2 + 0xb) >> 8);
  juce::String::operator=(local_90,(undefined8 *)local_80);
  juce::String::String(local_a0,(undefined8 *)local_90);
  uStack_94 = uStack_84;
  uStack_98 = uStack_88;
  juce::String::~String(local_90);
  juce::String::operator=((String *)local_78,(undefined8 *)local_a0);
  local_70 = uStack_98;
  uStack_6c = uStack_94;
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
  juce::String::~String(local_a0);
  juce::String::~String(local_80);
  if (local_38 != (code *)0x0) {
                    /* try { // try from 001739b2 to 001739bb has its CatchHandler @ 001739fb */
    (*local_38)(&local_48,&local_48,3);
  }
  if (local_58 != (code *)0x0) {
                    /* try { // try from 001739cb to 001739d4 has its CatchHandler @ 001739f3 */
    (*local_58)(&local_68,&local_68,3);
  }
  juce::String::~String((String *)local_78);
  return param_1;
}


