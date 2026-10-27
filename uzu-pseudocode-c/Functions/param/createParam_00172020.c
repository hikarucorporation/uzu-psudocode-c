// Function : createParam
// Namespace: param
// Entry    : 00172020
// Prototype: undefined createParam(undefined4 param_1_00, vector<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>,std::allocator<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>>> * param_2, uint param_3, undefined8 * param_4, uint param_5, undefined4 param_6)
// Body     : 00172020 - 00172260


/* WARNING: Unknown calling convention: __cdecl */
/* param::createParam(std::vector<std::unique_ptr<juce::RangedAudioParameter,
   std::default_delete<juce::RangedAudioParameter> >,
   std::allocator<std::unique_ptr<juce::RangedAudioParameter,
   std::default_delete<juce::RangedAudioParameter> > > >&, param::PID,
   juce::NormalisableRange<float> const&, float, param::Unit, int) */

void __cdecl
param::createParam(undefined4 param_1_00,
                  vector<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>,std::allocator<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>>>
                  *param_2,uint param_3,undefined8 *param_4,uint param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  char *pcVar2;
  byte *local_b8;
  byte *local_b0;
  String local_a8 [8];
  String local_a0 [8];
  undefined4 local_98;
  String local_90 [8];
  String local_88 [8];
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  code *local_68;
  undefined *puStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  code *local_48;
  undefined *puStack_40;
  
  local_48 = (code *)0x0;
  puStack_40 = (undefined *)0x0;
  local_68 = (code *)0x0;
  puStack_60 = (undefined *)0x0;
  if (param_5 < 5) {
    local_48 = (code *)(&PTR__M_manager_00701d58)[(int)param_5];
    puStack_40 = (&PTR__M_invoke_00701d80)[(int)param_5];
    local_68 = (code *)(&PTR__M_manager_00701dd0)[(int)param_5];
    puStack_60 = (&PTR__M_invoke_00701da8)[(int)param_5];
  }
  if (param_3 < 10) {
    pcVar2 = *(char **)(&DAT_00701df8 + (long)(int)param_3 * 8);
  }
  else {
    pcVar2 = "Unknown";
  }
                    /* try { // try from 001720cf to 001720d8 has its CatchHandler @ 00172301 */
  uStack_50 = 0;
  local_58 = 0;
  uStack_70 = 0;
  local_78 = 0;
  local_7c = param_1_00;
  juce::String::String(local_a8,(byte *)pcVar2);
                    /* try { // try from 001720d9 to 001720e7 has its CatchHandler @ 001722d8 */
  juce::String::toLowerCase((undefined8 *)local_a0,(undefined8 *)local_a8);
  juce::StringRef::StringRef((StringRef *)&local_b8,&DAT_005e3c3c);
                    /* try { // try from 001720fb to 00172109 has its CatchHandler @ 001722c9 */
  juce::String::removeCharacters((undefined8 *)local_88,(undefined8 *)local_a0,local_b8);
  juce::String::~String(local_a0);
  juce::String::String(local_a0,(long *)local_88);
  if (param_5 < 5) {
    pcVar2 = &DAT_005d9614 + *(int *)(&DAT_005d9614 + (long)(int)param_5 * 4);
  }
  else {
    pcVar2 = "Unknown";
  }
                    /* try { // try from 00172147 to 00172150 has its CatchHandler @ 001722b5 */
  local_98 = param_6;
  juce::String::String(local_90,(byte *)pcVar2);
  local_80 = 0;
                    /* try { // try from 00172159 to 00172193 has its CatchHandler @ 001722a6 */
  std::
  make_unique<juce::AudioParameterFloat,juce::ParameterID,juce::String_const&,juce::NormalisableRange<float>const&,float&,juce::String,juce::AudioProcessorParameter::Category,std::function<juce::String(float,int)>&,std::function<float(juce::String_const&)>&>
            (&local_b0,(long *)local_a0,(long *)local_a8,param_4,&local_7c,(long *)local_90,
             &local_80,(long)&local_58,(long)&local_78);
  local_b8 = local_b0;
  local_b0 = (byte *)0x0;
  puVar1 = *(undefined8 **)(param_2 + 8);
  if (puVar1 == *(undefined8 **)(param_2 + 0x10)) {
                    /* try { // try from 001721ba to 001721c4 has its CatchHandler @ 00172261 */
    std::
    vector<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>,std::allocator<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>>>
    ::
    _M_realloc_insert<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>>
              (param_2,puVar1,&local_b8);
    if (local_b8 != (byte *)0x0) {
      (**(code **)(*(long *)local_b8 + 8))();
    }
  }
  else {
    *puVar1 = local_b8;
    *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 8;
  }
  local_b8 = (byte *)0x0;
  if (local_b0 != (byte *)0x0) {
    (**(code **)(*(long *)local_b0 + 8))();
  }
  local_b0 = (byte *)0x0;
  juce::String::~String(local_90);
  juce::String::~String(local_a0);
  juce::String::~String(local_88);
  juce::String::~String(local_a8);
  if (local_68 != (code *)0x0) {
                    /* try { // try from 00172227 to 00172235 has its CatchHandler @ 0017229e */
    (*local_68)(&local_78,&local_78,3);
  }
  if (local_48 != (code *)0x0) {
                    /* try { // try from 00172240 to 0017224e has its CatchHandler @ 00172296 */
    (*local_48)(&local_58,&local_58,3);
  }
  return;
}


