// Function : getEffectiveHeight
// Namespace: juce:detail:FontRendering
// Entry    : 00353340
// Prototype: float getEffectiveHeight(long * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, uint * param_5, ulong param_6)
// Body     : 00353340 - 003534d8


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::detail::FontRendering::getEffectiveHeight(juce::Font const&) */

float __cdecl
juce::detail::FontRendering::getEffectiveHeight
          (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint *param_5,
          ulong param_6)

{
  long *plVar1;
  int iVar2;
  SharedFontInternal *pSVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  long *local_20;
  
  Font::SharedFontInternal::getTypefacePtr
            ((SharedFontInternal *)&local_20,*param_1,param_1,param_4,param_5,param_6);
  pSVar3 = (SharedFontInternal *)*param_1;
  if (local_20 == (long *)0x0) {
    if (0.0 < *(float *)(pSVar3 + 100)) {
      return *(float *)(pSVar3 + 100);
    }
    fVar6 = *(float *)(pSVar3 + 0x68);
                    /* try { // try from 003533a1 to 003533a8 has its CatchHandler @ 003534e9 */
    uVar4 = Font::SharedFontInternal::getAscentDescent
                      (pSVar3,param_1,extraout_RDX,param_4,param_5,param_6);
    return fVar6 * ((float)((ulong)uVar4 >> 0x20) + (float)uVar4);
  }
  iVar2 = *(int *)(pSVar3 + 0x60);
                    /* try { // try from 0035336e to 00353373 has its CatchHandler @ 003534f3 */
  auVar9 = (**(code **)(*local_20 + 0x18))(local_20);
  if (iVar2 == 1) {
    puVar5 = (undefined8 *)(auVar9._0_8_ + 0x10);
  }
  else {
    fVar6 = 0.0;
    fVar7 = 0.0;
    if (iVar2 != 0) goto LAB_003533ca;
    puVar5 = (undefined8 *)(auVar9._0_8_ + 8);
  }
  fVar6 = (float)*puVar5;
  fVar7 = (float)((ulong)*puVar5 >> 0x20);
LAB_003533ca:
                    /* try { // try from 003533d1 to 003533d8 has its CatchHandler @ 003534f1 */
  uVar4 = Font::SharedFontInternal::getAscentDescent
                    ((SharedFontInternal *)*param_1,param_1,auVar9._8_8_,param_4,param_5,param_6);
  fVar7 = DAT_005d9038 / (fVar7 + fVar6);
  pSVar3 = (SharedFontInternal *)*param_1;
  fVar6 = *(float *)(pSVar3 + 100);
  if (((_DAT_00659418 <= fVar7) || ((double)fVar7 <= DAT_00656ba0)) ||
     (fVar8 = DAT_005d9038 / ((float)((ulong)uVar4 >> 0x20) + (float)uVar4), _DAT_00659418 <= fVar8)
     ) {
    if (fVar6 <= 0.0) {
      fVar6 = *(float *)(pSVar3 + 0x68);
                    /* try { // try from 00353496 to 0035349d has its CatchHandler @ 003534d9 */
      uVar4 = Font::SharedFontInternal::getAscentDescent
                        (pSVar3,param_1,extraout_RDX_00,param_4,param_5,param_6);
      fVar6 = fVar6 * ((float)((ulong)uVar4 >> 0x20) + (float)uVar4);
    }
  }
  else {
    if (fVar6 <= 0.0) {
      fVar6 = *(float *)(pSVar3 + 0x68);
                    /* try { // try from 0035344f to 00353456 has its CatchHandler @ 003534e1 */
      uVar4 = Font::SharedFontInternal::getAscentDescent
                        (pSVar3,param_1,extraout_RDX_00,param_4,param_5,param_6);
      fVar6 = fVar6 * ((float)((ulong)uVar4 >> 0x20) + (float)uVar4);
    }
    fVar6 = (fVar8 * fVar6) / fVar7;
  }
  LOCK();
  plVar1 = local_20 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    (**(code **)(*local_20 + 8))(local_20);
  }
  return fVar6;
}


