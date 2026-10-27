// Function : getEventRelativeTo
// Namespace: juce:MouseEvent
// Entry    : 0022c660
// Prototype: undefined getEventRelativeTo(float * param_1, ulong * param_2, long * param_3)
// Body     : 0022c660 - 0022c95c


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::MouseEvent::getEventRelativeTo(juce::Component*) const */

void __cdecl juce::MouseEvent::getEventRelativeTo(float *param_1,ulong *param_2,long *param_3)

{
  char cVar1;
  ulong uVar2;
  float *pfVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  float fVar8;
  float fVar10;
  ulong uVar9;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar11;
  double dVar12;
  undefined1 local_98 [8];
  float fStack_90;
  float fStack_8c;
  ulong local_80;
  float local_78;
  float local_74;
  long *local_70;
  ulong *local_68;
  long *local_60;
  ulong local_58;
  ulong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_50 = param_2[10];
  plVar7 = (long *)param_2[6];
  local_98 = (undefined1  [8])*param_2;
  _fStack_90 = 0;
  if (plVar7 != (long *)0x0) {
    do {
      if (plVar7 == param_3) goto LAB_0022c799;
      plVar6 = param_3;
      while (plVar6 != (long *)0x0) {
        plVar6 = (long *)plVar6[6];
        if (plVar6 == plVar7) {
          local_98 = (undefined1  [8])
                     detail::ComponentHelpers::convertFromDistantParentSpace<juce::Point<float>>
                               (local_98,(long)plVar7,param_3);
          goto LAB_0022c799;
        }
      }
      local_80 = (ulong)local_98;
      local_70 = plVar7;
      local_68 = &local_80;
                    /* try { // try from 0022c6e3 to 0022c6ee has its CatchHandler @ 0022c965 */
      local_98 = (undefined1  [8])
                 detail::ComponentHelpers::
                 convertToParentSpace<juce::Point<float>>(juce::Component_const&,juce::Point<float>)
                 ::{lambda()#1}::operator()((_lambda___1_ *)&local_70);
      fVar10 = (float)((ulong)local_98 >> 0x20);
      fVar8 = SUB84(local_98,0);
      fStack_90 = (float)extraout_XMM0_Dc;
      fStack_8c = (float)extraout_XMM0_Dd;
      pfVar3 = (float *)plVar7[10];
      if (pfVar3 != (float *)0x0) {
        local_98._4_4_ = fVar8 * pfVar3[3] + pfVar3[4] * fVar10 + pfVar3[5];
        local_98._0_4_ = fVar8 * *pfVar3 + pfVar3[1] * fVar10 + pfVar3[2];
        fStack_90 = fVar8 * 0.0 + fVar10 * 0.0 + 0.0;
        fStack_8c = fVar8 * 0.0 + fVar10 * 0.0 + 0.0;
      }
      plVar7 = (long *)plVar7[6];
    } while (plVar7 != (long *)0x0);
  }
  plVar7 = param_3;
  do {
    plVar6 = plVar7;
    plVar7 = (long *)plVar6[6];
  } while ((long *)plVar6[6] != (long *)0x0);
                    /* try { // try from 0022c75c to 0022c798 has its CatchHandler @ 0022c96d */
  local_98 = (undefined1  [8])
             detail::ComponentHelpers::convertFromParentSpace<juce::Point<float>>(local_98,plVar6);
  if (plVar6 != param_3) {
    local_98 = (undefined1  [8])
               detail::ComponentHelpers::convertFromDistantParentSpace<juce::Point<float>>
                         (local_98,(long)plVar6,param_3);
  }
LAB_0022c799:
  local_48 = *(undefined8 *)((long)param_2 + 0x14);
  uStack_40 = *(undefined8 *)((long)param_2 + 0x1c);
  local_74 = *(float *)((long)param_2 + 0x24);
  local_58 = param_2[7];
  uVar2 = param_2[8];
  plVar7 = (long *)param_2[6];
  uVar9 = param_2[5];
  fVar8 = *(float *)(param_2 + 2);
  if (plVar7 != (long *)0x0) {
    do {
      if (plVar7 == param_3) goto LAB_0022c8d1;
      plVar6 = param_3;
      while (plVar6 != (long *)0x0) {
        plVar6 = (long *)plVar6[6];
        if (plVar6 == plVar7) {
          uVar9 = detail::ComponentHelpers::convertFromDistantParentSpace<juce::Point<float>>
                            (uVar9,(long)plVar7,param_3);
          goto LAB_0022c8d1;
        }
      }
      local_80 = uVar9;
      local_78 = fVar8;
      local_70 = plVar7;
      local_68 = &local_80;
      local_60 = param_3;
                    /* try { // try from 0022c82c to 0022c833 has its CatchHandler @ 0022c95d */
      uVar9 = detail::ComponentHelpers::
              convertToParentSpace<juce::Point<float>>(juce::Component_const&,juce::Point<float>)::
              {lambda()#1}::operator()((_lambda___1_ *)&local_70);
      fVar8 = (float)(uVar9 >> 0x20);
      pfVar3 = (float *)plVar7[10];
      if (pfVar3 != (float *)0x0) {
        uVar9 = CONCAT44((float)uVar9 * pfVar3[3] + pfVar3[4] * fVar8 + pfVar3[5],
                         (float)uVar9 * *pfVar3 + pfVar3[1] * fVar8 + pfVar3[2]);
      }
      plVar7 = (long *)plVar7[6];
      param_3 = local_60;
      fVar8 = local_78;
    } while (plVar7 != (long *)0x0);
  }
  plVar7 = param_3;
  do {
    plVar6 = plVar7;
    plVar7 = (long *)plVar6[6];
  } while ((long *)plVar6[6] != (long *)0x0);
                    /* try { // try from 0022c8ac to 0022c8d0 has its CatchHandler @ 0022c96d */
  uVar9 = detail::ComponentHelpers::convertFromParentSpace<juce::Point<float>>(uVar9,plVar6);
  if (plVar6 != param_3) {
    uVar9 = detail::ComponentHelpers::convertFromDistantParentSpace<juce::Point<float>>
                      (uVar9,(long)plVar6,param_3);
  }
LAB_0022c8d1:
  uVar4 = param_2[9];
  uVar5 = param_2[0xb];
  cVar1 = *(char *)((long)param_2 + 0x59);
  dVar11 = (double)(float)local_98._0_4_ + _DAT_005d9a90;
  dVar12 = (double)(float)local_98._4_4_ + _UNK_005d9a98;
  *param_1 = (float)local_98._0_4_;
  param_1[1] = (float)local_98._4_4_;
  param_1[2] = SUB84(dVar11,0);
  param_1[3] = SUB84(dVar12,0);
  param_1[4] = fVar8;
  *(undefined8 *)(param_1 + 5) = local_48;
  *(undefined8 *)(param_1 + 7) = uStack_40;
  param_1[9] = local_74;
  *(ulong *)(param_1 + 10) = uVar9;
  *(long **)(param_1 + 0xc) = param_3;
  *(ulong *)(param_1 + 0xe) = local_58;
  *(ulong *)(param_1 + 0x10) = uVar2;
  *(ulong *)(param_1 + 0x12) = uVar4;
  *(ulong *)(param_1 + 0x14) = local_50;
  *(char *)(param_1 + 0x16) = (char)uVar5;
  *(bool *)((long)param_1 + 0x59) = cVar1 != '\0';
  return;
}


