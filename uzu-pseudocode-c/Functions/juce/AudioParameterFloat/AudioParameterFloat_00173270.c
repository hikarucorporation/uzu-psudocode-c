// Function : AudioParameterFloat
// Namespace: juce:AudioParameterFloat
// Entry    : 00173270
// Prototype: undefined AudioParameterFloat(undefined4 param_1_00, AudioParameterFloat * this, long * param_3, long * param_4, undefined8 * param_5, long * param_6, undefined4 param_7, undefined8 * param_8, undefined8 * param_9)
// Body     : 00173270 - 0017371c


/* juce::AudioParameterFloat::AudioParameterFloat(juce::ParameterID const&, juce::String const&,
   juce::NormalisableRange<float>, float, juce::String const&,
   juce::AudioProcessorParameter::Category, std::function<juce::String (float, int)>,
   std::function<float (juce::String const&)>) */

void __thiscall
juce::AudioParameterFloat::AudioParameterFloat
          (undefined4 param_1_00,AudioParameterFloat *this,long *param_3,long *param_4,
          undefined8 *param_5,long *param_6,undefined4 param_7,undefined8 *param_8,
          undefined8 *param_9)

{
  code *pcVar1;
  String local_290 [8];
  undefined8 local_288;
  undefined8 uStack_280;
  code *local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  code *local_258;
  undefined8 local_250;
  long *local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  code *local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  code *local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  code *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  code *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  code *local_180;
  undefined8 local_178;
  String local_170 [16];
  undefined1 local_160 [16];
  code *local_150;
  undefined1 local_140 [16];
  code *local_130;
  String local_120 [16];
  undefined1 local_110 [16];
  code *local_100;
  undefined1 local_f0 [16];
  code *local_e0;
  String local_d0 [16];
  undefined1 local_c0 [16];
  code *local_b0;
  undefined1 local_a0 [16];
  code *local_90;
  String local_80 [16];
  undefined1 local_70 [16];
  code *local_60;
  undefined1 local_50 [16];
  code *local_40;
  
  local_1d8 = *(undefined1 *)(param_5 + 2);
  local_1e8 = *param_5;
  uStack_1e0 = param_5[1];
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1c0 = (code *)0x0;
  local_1b8 = param_5[6];
  pcVar1 = (code *)param_5[5];
  if (pcVar1 != (code *)0x0) {
    local_1d0 = param_5[3];
    uStack_1c8 = param_5[4];
    param_5[5] = 0;
    param_5[6] = 0;
    local_1c0 = pcVar1;
  }
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1a0 = (code *)0x0;
  local_198 = param_5[10];
  pcVar1 = (code *)param_5[9];
  if (pcVar1 != (code *)0x0) {
    local_1b0 = param_5[7];
    uStack_1a8 = param_5[8];
    param_5[9] = 0;
    param_5[10] = 0;
    local_1a0 = pcVar1;
  }
  local_190 = 0;
  uStack_188 = 0;
  local_180 = (code *)0x0;
  local_178 = param_5[0xe];
  pcVar1 = (code *)param_5[0xd];
  if (pcVar1 != (code *)0x0) {
    local_190 = param_5[0xb];
    uStack_188 = param_5[0xc];
    param_5[0xd] = 0;
    param_5[0xe] = 0;
    local_180 = pcVar1;
  }
  local_1f8 = (code *)0x0;
  uStack_1f0 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_218 = (code *)0x0;
  uStack_210 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_240 = param_4;
  juce::String::String((String *)&local_238);
  uStack_230 = CONCAT17((char)((ulong)uStack_230 >> 0x38),0x10000000000);
  local_228 = 0;
  uStack_220 = 0;
  local_218 = (code *)0x0;
  uStack_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = (code *)0x0;
  uStack_1f0 = 0;
  juce::String::String(local_290,param_6);
                    /* try { // try from 001733fe to 00173410 has its CatchHandler @ 0017381f */
  RangedAudioParameterAttributes<juce::AudioParameterFloatAttributes,float>::withLabel
            (local_170,(long *)&local_238,(undefined8 *)local_290);
                    /* try { // try from 00173411 to 00173428 has its CatchHandler @ 0017380d */
  RangedAudioParameterAttributes<juce::AudioParameterFloatAttributes,float>::withCategory
            (local_120,(long *)local_170,param_7);
  local_268 = 0;
  uStack_260 = 0;
  local_258 = (code *)0x0;
  local_250 = param_8[3];
  pcVar1 = (code *)param_8[2];
  if (pcVar1 != (code *)0x0) {
    local_268 = *param_8;
    uStack_260 = param_8[1];
    param_8[2] = 0;
    param_8[3] = 0;
    local_258 = pcVar1;
  }
                    /* try { // try from 00173468 to 00173481 has its CatchHandler @ 001737da */
  RangedAudioParameterAttributes<juce::AudioParameterFloatAttributes,float>::
  withStringFromValueFunction(local_d0,(long *)local_120,&local_268);
  local_288 = 0;
  uStack_280 = 0;
  local_278 = (code *)0x0;
  local_270 = param_9[3];
  pcVar1 = (code *)param_9[2];
  if (pcVar1 != (code *)0x0) {
    local_288 = *param_9;
    uStack_280 = param_9[1];
    param_9[2] = 0;
    param_9[3] = 0;
    local_278 = pcVar1;
  }
                    /* try { // try from 001734c1 to 001734da has its CatchHandler @ 001737a7 */
  RangedAudioParameterAttributes<juce::AudioParameterFloatAttributes,float>::
  withValueFromStringFunction(local_80,(long *)local_d0,&local_288);
                    /* try { // try from 001734db to 00173500 has its CatchHandler @ 00173795 */
  AudioParameterFloat(param_1_00,this,param_3,local_240,&local_1e8,(long *)local_80);
  if (local_40 != (code *)0x0) {
                    /* try { // try from 00173516 to 0017351f has its CatchHandler @ 0017378d */
    (*local_40)(local_50,local_50,3);
  }
  if (local_60 != (code *)0x0) {
                    /* try { // try from 00173535 to 0017353e has its CatchHandler @ 00173785 */
    (*local_60)(local_70,local_70,3);
  }
  juce::String::~String(local_80);
  if (local_278 != (code *)0x0) {
                    /* try { // try from 00173556 to 00173564 has its CatchHandler @ 0017377d */
    (*local_278)(&local_288,&local_288,3);
  }
  if (local_90 != (code *)0x0) {
                    /* try { // try from 0017357a to 00173583 has its CatchHandler @ 00173775 */
    (*local_90)(local_a0,local_a0,3);
  }
  if (local_b0 != (code *)0x0) {
                    /* try { // try from 00173599 to 001735a2 has its CatchHandler @ 0017376d */
    (*local_b0)(local_c0,local_c0,3);
  }
  juce::String::~String(local_d0);
  if (local_258 != (code *)0x0) {
                    /* try { // try from 001735ba to 001735c8 has its CatchHandler @ 00173765 */
    (*local_258)(&local_268,&local_268,3);
  }
  if (local_e0 != (code *)0x0) {
                    /* try { // try from 001735de to 001735e7 has its CatchHandler @ 0017375d */
    (*local_e0)(local_f0,local_f0,3);
  }
  if (local_100 != (code *)0x0) {
                    /* try { // try from 001735fd to 00173606 has its CatchHandler @ 00173755 */
    (*local_100)(local_110,local_110,3);
  }
  juce::String::~String(local_120);
  if (local_130 != (code *)0x0) {
                    /* try { // try from 00173629 to 00173632 has its CatchHandler @ 0017374d */
    (*local_130)(local_140,local_140,3);
  }
  if (local_150 != (code *)0x0) {
                    /* try { // try from 00173648 to 00173651 has its CatchHandler @ 00173745 */
    (*local_150)(local_160,local_160,3);
  }
  juce::String::~String(local_170);
  juce::String::~String(local_290);
  if (local_1f8 != (code *)0x0) {
                    /* try { // try from 0017367e to 00173687 has its CatchHandler @ 0017373d */
    (*local_1f8)(&local_208,&local_208,3);
  }
  if (local_218 != (code *)0x0) {
                    /* try { // try from 0017369a to 001736a3 has its CatchHandler @ 00173735 */
    (*local_218)(&local_228,&local_228,3);
  }
  juce::String::~String((String *)&local_238);
  if (local_180 != (code *)0x0) {
                    /* try { // try from 001736c3 to 001736cc has its CatchHandler @ 0017372d */
    (*local_180)(&local_190,&local_190,3);
  }
  if (local_1a0 != (code *)0x0) {
                    /* try { // try from 001736e2 to 001736eb has its CatchHandler @ 00173725 */
    (*local_1a0)(&local_1b0,&local_1b0,3);
  }
  if (local_1c0 != (code *)0x0) {
                    /* try { // try from 00173701 to 0017370a has its CatchHandler @ 0017371d */
    (*local_1c0)(&local_1d0,&local_1d0,3);
  }
  return;
}


