// Function : getIdealPopupMenuItemSize
// Namespace: juce:LookAndFeel_V4
// Entry    : 001f1450
// Prototype: undefined getIdealPopupMenuItemSize(LookAndFeel_V4 * this, undefined8 * param_1, int param_2, undefined8 param_4_00, uint * param_4, int * param_5)
// Body     : 001f1450 - 001f157d


/* juce::LookAndFeel_V4::getIdealPopupMenuItemSize(juce::String const&, bool, int, int&, int&) */

void __thiscall
juce::LookAndFeel_V4::getIdealPopupMenuItemSize
          (LookAndFeel_V4 *this,undefined8 *param_1,int param_2,undefined8 param_4_00,uint *param_4,
          int *param_5)

{
  SharedFontInternal *pSVar1;
  undefined8 uVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  float fVar8;
  SharedFontInternal *local_30;
  float local_24;
  
  iVar5 = (int)param_4_00;
  if (param_2 == 0) {
    puVar6 = param_4;
    piVar7 = param_5;
    (**(code **)(*(long *)this + 0x1d8))(&local_30,this);
    fVar8 = *(float *)(local_30 + 100);
    uVar3 = extraout_EDX;
    uVar4 = extraout_var;
    if (fVar8 <= 0.0) {
      local_24 = *(float *)(local_30 + 0x68);
                    /* try { // try from 001f14c7 to 001f14d0 has its CatchHandler @ 001f157e */
      uVar2 = Font::SharedFontInternal::getAscentDescent
                        (local_30,(long *)&local_30,CONCAT44(extraout_var,extraout_EDX),param_4_00,
                         puVar6,(ulong)piVar7);
      fVar8 = local_24 * ((float)((ulong)uVar2 >> 0x20) + (float)uVar2);
      uVar3 = extraout_EDX_00;
      uVar4 = extraout_var_00;
    }
    if (iVar5 < 1) {
      fVar8 = fVar8 * DAT_005de3e8;
      iVar5 = SUB84((double)fVar8 + DAT_005d9098,0);
    }
    else if ((float)iVar5 / DAT_005de3e8 < fVar8) {
                    /* try { // try from 001f1501 to 001f1544 has its CatchHandler @ 001f1586 */
      Font::setHeight((float)iVar5 / DAT_005de3e8,(Font *)&local_30);
      uVar3 = extraout_EDX_01;
      uVar4 = extraout_var_01;
    }
    *param_5 = iVar5;
    GlyphArrangement::getStringBounds
              (&local_30,(byte *)*param_1,CONCAT44(uVar4,uVar3),param_4_00,puVar6,(ulong)piVar7);
    fVar8 = ceilf(fVar8);
    *param_4 = (int)fVar8 + *param_5 * 2;
    if (local_30 != (SharedFontInternal *)0x0) {
      LOCK();
      pSVar1 = local_30 + 8;
      *(int *)pSVar1 = *(int *)pSVar1 + -1;
      UNLOCK();
      if (*(int *)pSVar1 == 0) {
        (**(code **)(*(long *)local_30 + 8))();
      }
    }
  }
  else {
    *param_4 = 0x32;
    if (iVar5 < 1) {
      *param_5 = 10;
    }
    else {
      *param_5 = iVar5 / 10;
    }
  }
  return;
}


