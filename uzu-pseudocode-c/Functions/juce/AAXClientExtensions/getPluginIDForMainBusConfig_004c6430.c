// Function : getPluginIDForMainBusConfig
// Namespace: juce:AAXClientExtensions
// Entry    : 004c6430
// Prototype: uint getPluginIDForMainBusConfig(undefined8 param_1_00, long * param_2, long * param_3, int param_4)
// Body     : 004c6430 - 004c64e6


/* juce::AAXClientExtensions::getPluginIDForMainBusConfig(juce::AudioChannelSet const&,
   juce::AudioChannelSet const&, bool) const */

uint __thiscall
juce::AAXClientExtensions::getPluginIDForMainBusConfig
          (undefined8 param_1_00,long *param_2,long *param_3,int param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar1 = std::
           __find_if<juce::AudioChannelSet_const*,__gnu_cxx::__ops::_Iter_equals_val<juce::AudioChannelSet_const>>
                     (param_2);
  uVar4 = ((long)(puVar1 + -0xe3a56) >> 3) * -0x3333333333333333;
  uVar5 = 0;
  if (uVar4 < 0x23) {
    uVar5 = uVar4;
  }
  puVar1 = std::
           __find_if<juce::AudioChannelSet_const*,__gnu_cxx::__ops::_Iter_equals_val<juce::AudioChannelSet_const>>
                     (param_3);
  uVar2 = ((long)(puVar1 + -0xe3a56) >> 3) * -0x3333333333333333;
  if (uVar2 < 0x3f) {
    uVar4 = uVar5;
  }
  if (0x22 < uVar2) {
    uVar2 = 0;
    uVar4 = uVar5;
  }
  pcVar3 = "cdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
  if (param_4 != 0) {
    pcVar3 = "yzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
  }
  return (int)"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"[uVar2] |
         (int)*pcVar3 << 0x10 |
         (int)"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"[uVar4] << 8 |
         0x6a000000;
}


