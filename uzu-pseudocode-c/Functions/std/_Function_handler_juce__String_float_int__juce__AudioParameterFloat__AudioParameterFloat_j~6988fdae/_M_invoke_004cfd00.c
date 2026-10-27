// Function : _M_invoke
// Namespace: std:_Function_handler_juce__String_float_int__juce__AudioParameterFloat__AudioParameterFloat_j~6988fdae
// Entry    : 004cfd00
// Prototype: _Function_handler<juce::String(float,int),juce::AudioParameterFloat::AudioParameterFloat(juce::ParameterID_const&,juce::String_const&,juce::NormalisableRange<float>,float,juce::AudioParameterFloatAttributes_const&)::$_5> * _M_invoke(_Function_handler<juce::String(float,int),juce::AudioParameterFloat::AudioParameterFloat(juce::ParameterID_const&,juce::String_const&,juce::NormalisableRange<float>,float,juce::AudioParameterFloatAttributes_const&)::$_5> * this, uint * param_1, float * param_2, int * param_3)
// Body     : 004cfd00 - 004cfe52


/* std::_Function_handler<juce::String (float, int),
   juce::AudioParameterFloat::AudioParameterFloat(juce::ParameterID const&, juce::String const&,
   juce::NormalisableRange<float>, float, juce::AudioParameterFloatAttributes
   const&)::$_5>::_M_invoke(std::_Any_data const&, float&&, int&&) */

_Function_handler<juce::String(float,int),juce::AudioParameterFloat::AudioParameterFloat(juce::ParameterID_const&,juce::String_const&,juce::NormalisableRange<float>,float,juce::AudioParameterFloatAttributes_const&)::__5>
* __thiscall
std::
_Function_handler<juce::String(float,int),juce::AudioParameterFloat::AudioParameterFloat(juce::ParameterID_const&,juce::String_const&,juce::NormalisableRange<float>,float,juce::AudioParameterFloatAttributes_const&)::$_5>
::_M_invoke(_Function_handler<juce::String(float,int),juce::AudioParameterFloat::AudioParameterFloat(juce::ParameterID_const&,juce::String_const&,juce::NormalisableRange<float>,float,juce::AudioParameterFloatAttributes_const&)::__5>
            *this,uint *param_1,float *param_2,int *param_3)

{
  float fVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  byte *__src;
  undefined4 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  size_t __n;
  int iVar8;
  ulong uVar9;
  undefined4 *__dest;
  undefined *local_a8 [7];
  locale local_70 [8];
  byte local_68 [56];
  
  uVar3 = *param_1;
  fVar1 = *param_2;
  iVar8 = *param_3;
                    /* try { // try from 004cfd22 to 004cfd30 has its CatchHandler @ 004cfe9e */
  juce::NumberToStringConverters::StackArrayStream::StackArrayStream
            ((StackArrayStream *)local_a8,(long)local_68);
                    /* try { // try from 004cfd3b to 004cfd48 has its CatchHandler @ 004cfe79 */
  lVar4 = juce::NumberToStringConverters::StackArrayStream::writeDouble
                    ((double)fVar1,(StackArrayStream *)local_a8,uVar3,'\0');
  local_a8[0] = PTR_vtable_00715ca8 + 0x10;
  std::locale::~locale(local_70);
  __src = (byte *)juce::StringHolderUtils::createFromFixedLength(local_68,lVar4);
  if (iVar8 < 1) {
LAB_004cfdb7:
    *(byte **)this = __src;
    LOCK();
    *(int *)(__src + -0x10) = *(int *)(__src + -0x10) + 1;
    UNLOCK();
    LOCK();
    pbVar6 = __src + -0x10;
    iVar8 = *(int *)pbVar6;
    *(int *)pbVar6 = *(int *)pbVar6 + -1;
    UNLOCK();
  }
  else {
    pbVar6 = __src;
    do {
      bVar2 = *pbVar6;
      if (bVar2 == 0) goto LAB_004cfdb7;
      pbVar7 = pbVar6 + 1;
      if (((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) {
        if ((bVar2 & 0x20) == 0) {
          pbVar7 = pbVar6 + 2;
        }
        else {
          pbVar7 = pbVar6 + (4 - (ulong)((bVar2 & 0x10) == 0));
        }
      }
      iVar8 = iVar8 + -1;
      pbVar6 = pbVar7;
    } while (iVar8 != 0);
    if (*__src == 0) {
      __dest = (undefined4 *)&DAT_0061ac58;
    }
    else {
      __n = (long)pbVar7 - (long)__src;
      uVar9 = __n + 4 & 0xfffffffffffffffc;
                    /* try { // try from 004cfe05 to 004cfe09 has its CatchHandler @ 004cfe53 */
      puVar5 = operator_new__(uVar9 + 0x17);
      LOCK();
      *puVar5 = 0;
      UNLOCK();
      *(ulong *)(puVar5 + 2) = uVar9;
      __dest = puVar5 + 4;
      memcpy(__dest,__src,__n);
      *(undefined1 *)((long)puVar5 + __n + 0x10) = 0;
    }
    *(undefined4 **)this = __dest;
    LOCK();
    pbVar6 = __src + -0x10;
    iVar8 = *(int *)pbVar6;
    *(int *)pbVar6 = *(int *)pbVar6 + -1;
    UNLOCK();
  }
  if (iVar8 == 0) {
    operator_delete__(__src + -0x10);
  }
  return this;
}


