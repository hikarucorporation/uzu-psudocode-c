// Function : operator()
// Namespace: const:_lambda___1_
// Entry    : 002ffe10
// Prototype: _func_createSystemFallback_String_const_ptr_String_const_ptr * operator()({lambda()#1} * this, long * param_1)
// Body     : 002ffe10 - 002ffff9


/* juce::FreeTypeTypeface::createSystemFallback(juce::String const&, juce::String const&)
   const::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

_func_createSystemFallback_String_const_ptr_String_const_ptr * __thiscall
const::{lambda()#1}::operator()(_lambda___1_ *this,long *param_1)

{
  byte bVar1;
  byte *__s;
  undefined8 uVar2;
  long lVar3;
  size_t sVar4;
  _func_createSystemFallback_String_const_ptr_String_const_ptr *p_Var5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  
  lVar3 = *param_1;
  uVar2 = FcPatternCreate();
  *(undefined8 *)this = uVar2;
                    /* try { // try from 002ffe44 to 002ffe5a has its CatchHandler @ 00300010 */
  FcPatternAdd(uVar2,"style",3,*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0x28) + 0x30),0);
                    /* try { // try from 002ffe5b to 002ffe5f has its CatchHandler @ 0030000e */
  lVar3 = FcCharSetCreate();
  __s = *(byte **)param_1[1];
  sVar4 = strlen((char *)__s);
  if (sVar4 != 0) {
    pbVar7 = __s;
    do {
      bVar1 = *pbVar7;
      uVar9 = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        uVar9 = (uint)bVar1;
        if ((bVar1 & 0x40) == 0) {
          uVar9 = uVar9 & 0x7f;
        }
        else {
          uVar6 = uVar9 & 0x10 ^ 0x1f;
          if ((bVar1 & 0x20) == 0) {
            uVar6 = 0x3f;
          }
          uVar9 = uVar6 & uVar9;
          if (((((pbVar7[1] & 0xffffffc0) == 0x80) &&
               (uVar9 = pbVar7[1] & 0x3f | uVar9 << 6, (bVar1 & 0x20) != 0)) &&
              ((pbVar7[2] & 0xffffffc0) == 0x80)) &&
             ((uVar9 = pbVar7[2] & 0x3f | uVar9 << 6, (bVar1 >> 5 & (bVar1 & 0x10) == 0) == 0 &&
              ((pbVar7[3] & 0xffffffc0) == 0x80)))) {
            uVar9 = uVar9 << 6 | pbVar7[3] & 0x3f;
          }
        }
      }
                    /* try { // try from 002fff50 to 002fff57 has its CatchHandler @ 00300024 */
      FcCharSetAddChar(lVar3,uVar9);
      pbVar8 = pbVar7 + 1;
      bVar1 = *pbVar7;
      if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
        if ((bVar1 & 0x20) == 0) {
          pbVar8 = pbVar7 + 2;
        }
        else {
          pbVar8 = pbVar7 + (4 - (ulong)((bVar1 & 0x10) == 0));
        }
      }
      pbVar7 = pbVar8;
    } while (pbVar8 != __s + sVar4);
  }
                    /* try { // try from 002fff83 to 002fff94 has its CatchHandler @ 0030000c */
  FcPatternAddCharSet(uVar2,"charset",lVar3);
  if (lVar3 != 0) {
                    /* try { // try from 002fff9a to 002fffa1 has its CatchHandler @ 00300004 */
    FcCharSetDestroy(lVar3);
  }
  p_Var5 = *(_func_createSystemFallback_String_const_ptr_String_const_ptr **)param_1[2];
  if (*p_Var5 != (_func_createSystemFallback_String_const_ptr_String_const_ptr)0x0) {
                    /* try { // try from 002fffaf to 002fffb3 has its CatchHandler @ 00300002 */
    lVar3 = FcLangSetCreate();
                    /* try { // try from 002fffc4 to 002fffdd has its CatchHandler @ 00300015 */
    FcLangSetAdd(lVar3,*(undefined8 *)param_1[2]);
    p_Var5 = (_func_createSystemFallback_String_const_ptr_String_const_ptr *)
             FcPatternAddLangSet(uVar2,&DAT_005e50fb,lVar3);
    if (lVar3 != 0) {
                    /* try { // try from 002fffe3 to 002fffea has its CatchHandler @ 002ffffa */
      p_Var5 = (_func_createSystemFallback_String_const_ptr_String_const_ptr *)
               FcLangSetDestroy(lVar3);
    }
  }
  return p_Var5;
}


