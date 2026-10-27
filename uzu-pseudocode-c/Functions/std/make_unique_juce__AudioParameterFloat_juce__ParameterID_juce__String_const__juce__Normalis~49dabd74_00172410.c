// Function : make_unique<juce::AudioParameterFloat,juce::ParameterID,juce::String_const&,juce::NormalisableRange<float>const&,float&,juce::String,juce::AudioProcessorParameter::Category,std::function<juce::String(float,int)>&,std::function<float(juce::String_const&)>&>
// Namespace: std
// Entry    : 00172410
// Prototype: undefined8 * make_unique<juce::AudioParameterFloat,juce::ParameterID,juce::String_const&,juce::NormalisableRange<float>const&,float&,juce::String,juce::AudioProcessorParameter::Category,std::function<juce::String(float,int)>&,std::function<float(juce::String_const&)>&>(undefined8 * param_1, long * param_2, long * param_3, undefined8 * param_4, undefined4 * param_5, long * param_6, undefined4 * param_7, long param_8, long param_9)
// Body     : 00172410 - 001725c8


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::__detail::_MakeUniq<juce::AudioParameterFloat>::__single_object
   std::make_unique<juce::AudioParameterFloat, juce::ParameterID, juce::String const&,
   juce::NormalisableRange<float> const&, float&, juce::String,
   juce::AudioProcessorParameter::Category, std::function<juce::String (float, int)>&,
   std::function<float (juce::String const&)>&>(juce::ParameterID&&, juce::String const&,
   juce::NormalisableRange<float> const&, float&, juce::String&&,
   juce::AudioProcessorParameter::Category&&, std::function<juce::String (float, int)>&,
   std::function<float (juce::String const&)>&) */

undefined8 * __cdecl
std::
make_unique<juce::AudioParameterFloat,juce::ParameterID,juce::String_const&,juce::NormalisableRange<float>const&,float&,juce::String,juce::AudioProcessorParameter::Category,std::function<juce::String(float,int)>&,std::function<float(juce::String_const&)>&>
          (undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4,undefined4 *param_5,
          long *param_6,undefined4 *param_7,long param_8,long param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  AudioParameterFloat *this;
  undefined8 *puVar3;
  undefined8 local_108;
  undefined8 uStack_100;
  code *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  code *local_d8;
  undefined8 uStack_d0;
  AudioParameterFloat *local_c0;
  undefined8 *local_b8;
  long *local_b0;
  NormalisableRange<float> local_a8 [24];
  undefined1 local_90 [16];
  code *local_80;
  undefined1 local_70 [16];
  code *local_60;
  undefined1 local_50 [16];
  code *local_40;
  
  local_b8 = param_1;
  local_b0 = param_6;
  local_c0 = operator_new(0x140);
                    /* try { // try from 00172446 to 00172452 has its CatchHandler @ 0017268e */
  juce::NormalisableRange<float>::NormalisableRange(local_a8,param_4);
  uVar1 = *param_5;
  uVar2 = *param_7;
  local_d8 = (code *)0x0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  if (*(code **)(param_8 + 0x10) != (code *)0x0) {
                    /* try { // try from 00172487 to 00172495 has its CatchHandler @ 00172617 */
    (**(code **)(param_8 + 0x10))(&local_e8,param_8,2);
    uStack_d0 = *(undefined8 *)(param_8 + 0x18);
    local_d8 = *(code **)(param_8 + 0x10);
  }
  this = local_c0;
  local_f8 = (code *)0x0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  if (*(code **)(param_9 + 0x10) != (code *)0x0) {
                    /* try { // try from 001724cb to 001724d9 has its CatchHandler @ 001725f1 */
    (**(code **)(param_9 + 0x10))(&local_108,param_9,2);
    uStack_f0 = *(undefined8 *)(param_9 + 0x18);
    local_f8 = *(code **)(param_9 + 0x10);
  }
                    /* try { // try from 001724ec to 0017251c has its CatchHandler @ 0017263d */
  juce::AudioParameterFloat::AudioParameterFloat
            (uVar1,this,param_2,param_3,(undefined8 *)local_a8,local_b0,uVar2,&local_e8,&local_108);
  puVar3 = local_b8;
  *local_b8 = this;
  if (local_f8 != (code *)0x0) {
                    /* try { // try from 0017252f to 0017253d has its CatchHandler @ 001725e9 */
    (*local_f8)(&local_108,&local_108,3);
  }
  if (local_d8 != (code *)0x0) {
                    /* try { // try from 00172548 to 00172556 has its CatchHandler @ 001725e1 */
    (*local_d8)(&local_e8,&local_e8,3);
  }
  if (local_40 != (code *)0x0) {
                    /* try { // try from 0017256c to 00172575 has its CatchHandler @ 001725d9 */
    (*local_40)(local_50,local_50,3);
  }
  if (local_60 != (code *)0x0) {
                    /* try { // try from 0017258b to 00172594 has its CatchHandler @ 001725d1 */
    (*local_60)(local_70,local_70,3);
  }
  if (local_80 != (code *)0x0) {
                    /* try { // try from 001725aa to 001725b3 has its CatchHandler @ 001725c9 */
    (*local_80)(local_90,local_90,3);
  }
  return puVar3;
}


