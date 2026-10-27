// Function : getIdealPopupMenuItemSize
// Namespace: juce:LookAndFeel_V2
// Entry    : 00211830
// Prototype: undefined getIdealPopupMenuItemSize(LookAndFeel_V2 * this, undefined8 * param_1, int param_2, ulong param_4_00, uint * param_4, int * param_5)
// Body     : 00211830 - 0021194c


/* juce::LookAndFeel_V2::getIdealPopupMenuItemSize(juce::String const&, bool, int, int&, int&) */

void __thiscall
juce::LookAndFeel_V2::getIdealPopupMenuItemSize
          (LookAndFeel_V2 *this,undefined8 *param_1,int param_2,ulong param_4_00,uint *param_4,
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
                    /* try { // try from 00211898 to 002118a1 has its CatchHandler @ 0021194d */
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
                    /* try { // try from 002118d2 to 00211914 has its CatchHandler @ 00211955 */
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
      *param_5 = (int)(((uint)(param_4_00 >> 0x1f) & 1) + iVar5) >> 1;
    }
  }
  return;
}


