// Function : _M_invoke
// Namespace: std:_Function_handler_juce__String_int_int__juce__AudioParameterInt__AudioParameterInt_juce__P~bb3b2296
// Entry    : 004d07d0
// Prototype: undefined8 * _M_invoke(undefined8 * param_1, undefined8 param_2, uint * param_3)
// Body     : 004d07d0 - 004d0879


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<juce::String (int, int),
   juce::AudioParameterInt::AudioParameterInt(juce::ParameterID const&, juce::String const&, int,
   int, int, juce::AudioParameterIntAttributes const&)::$_9>::_M_invoke(std::_Any_data const&,
   int&&, int&&) */

undefined8 * __cdecl
std::
_Function_handler<juce::String(int,int),juce::AudioParameterInt::AudioParameterInt(juce::ParameterID_const&,juce::String_const&,int,int,int,juce::AudioParameterIntAttributes_const&)::$_9>
::_M_invoke(undefined8 *param_1,undefined8 param_2,uint *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  byte *pbVar3;
  bool bVar4;
  byte local_1b [11];
  
  uVar2 = *param_3;
  if ((int)uVar2 < 0) {
    pbVar3 = local_1b + 1;
    uVar2 = -uVar2;
    do {
      *pbVar3 = (char)uVar2 + (char)(uVar2 / 10) * -10 | 0x30;
      pbVar3 = pbVar3 + -1;
      bVar4 = 9 < uVar2;
      uVar2 = uVar2 / 10;
    } while (bVar4);
    *pbVar3 = 0x2d;
  }
  else {
    pbVar3 = local_1b + 2;
    do {
      pbVar3[-1] = (char)uVar2 + (char)(uVar2 / 10) * -10 | 0x30;
      pbVar3 = pbVar3 + -1;
      bVar4 = 9 < uVar2;
      uVar2 = uVar2 / 10;
    } while (bVar4);
  }
  local_1b[2] = 0;
  uVar1 = juce::StringHolderUtils::createFromFixedLength
                    (pbVar3,(long)(local_1b + ~(ulong)pbVar3 + 3));
  *param_1 = uVar1;
  return param_1;
}


