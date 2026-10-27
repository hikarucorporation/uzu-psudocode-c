// Function : drawLinearSliderThumb
// Namespace: juce:LookAndFeel_V2
// Entry    : 001f48b0
// Prototype: undefined drawLinearSliderThumb(float param_1, float param_2, float param_3, undefined8 param_4_00, undefined8 param_5_00, undefined8 param_6_00, long * param_7, Graphics * param_8_00, int param_9, int param_10, int param_11, int param_12, uint param_13, Component * param_14)
// Body     : 001f48b0 - 001f4ea0


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl */
/* juce::LookAndFeel_V2::drawLinearSliderThumb(juce::Graphics&, int, int, int, int, float, float,
   float, juce::Slider::SliderStyle, juce::Slider&) */

void __cdecl
juce::LookAndFeel_V2::drawLinearSliderThumb
          (float param_1,float param_2,float param_3,undefined8 param_4_00,undefined8 param_5_00,
          undefined8 param_6_00,long *param_7,Graphics *param_8_00,int param_9,int param_10,
          int param_11,int param_12,uint param_13,Component *param_14)

{
  int iVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  Desktop *pDVar7;
  long *plVar8;
  Component *pCVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  uint in_XMM5_Dc;
  uint in_XMM5_Dd;
  float local_c4;
  float local_c0;
  uint local_b8 [2];
  uint local_b0 [2];
  float local_a8;
  uint uStack_a4;
  float local_8c;
  float local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  float local_78;
  uint uStack_74;
  float local_5c;
  float local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  float local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  
  uVar18 = (uint)((ulong)param_6_00 >> 0x20);
  local_a8 = (float)param_9;
  local_8c = param_3;
  local_78 = param_1;
  local_58 = param_2;
  iVar5 = (**(code **)(*param_7 + 0x2e0))(param_7,param_14);
  uVar6 = Component::findColour(param_14,0x1001300,'\0');
  fVar14 = DAT_005de3c8;
  if (Component::currentlyFocusedComponent == param_14) {
    pCVar9 = param_14;
    do {
      if ((*(ushort *)(pCVar9 + 0xe8) & 0x8000) != 0) goto LAB_001f494b;
      pCVar9 = *(Component **)(pCVar9 + 0x30);
    } while (pCVar9 != (Component *)0x0);
    fVar14 = DAT_005de3e8;
  }
LAB_001f494b:
  uVar12 = (uint)uVar6;
  if (Desktop::instance == (Desktop *)0x0) {
    local_88 = fVar14;
    pDVar7 = operator_new(0x1d0);
                    /* try { // try from 001f4ae4 to 001f4aeb has its CatchHandler @ 001f4ea3 */
    Desktop::Desktop(pDVar7);
    lVar10 = *(long *)(pDVar7 + 0x40);
    iVar1 = *(int *)(lVar10 + 0x44);
    Desktop::instance = pDVar7;
    fVar14 = local_88;
  }
  else {
    lVar10 = *(long *)(Desktop::instance + 0x40);
    iVar1 = *(int *)(lVar10 + 0x44);
  }
  lVar3 = (long)iVar1;
  if (lVar3 != 0) {
    plVar8 = *(long **)(lVar10 + 0x38);
    plVar11 = plVar8 + lVar3;
    lVar10 = 0;
    do {
      lVar2 = *(long *)((long)plVar8 + lVar10);
      if (((*(long *)(lVar2 + 0x48) != 0) &&
          (*(Component **)(*(long *)(lVar2 + 0x48) + 0x10) == param_14)) &&
         (((*(ushort *)(lVar2 + 0x3c) & 0x1f0) != 0 || (*(int *)(lVar2 + 0x14) != 1)))) {
        pCVar9 = param_14;
        goto LAB_001f49d0;
      }
      lVar10 = lVar10 + 8;
    } while (lVar3 * 8 != lVar10);
    bVar13 = false;
    bVar4 = false;
    if (Desktop::instance == (Desktop *)0x0) goto LAB_001f49fe;
    goto LAB_001f4a49;
  }
  local_b8[0] = Colour::withMultipliedSaturation(fVar14,uVar12);
  uStack_80 = in_XMM5_Dc;
  uStack_7c = in_XMM5_Dd;
  local_b0[0] = local_b8[0];
  goto LAB_001f4b17;
  while (pCVar9 = *(Component **)(pCVar9 + 0x30), pCVar9 != (Component *)0x0) {
LAB_001f49d0:
    bVar13 = (*(ushort *)(pCVar9 + 0xe8) & 0x8000) == 0;
    if (!bVar13) break;
  }
  bVar4 = bVar13;
  if (Desktop::instance == (Desktop *)0x0) {
LAB_001f49fe:
    local_88 = fVar14;
    pDVar7 = operator_new(0x1d0);
                    /* try { // try from 001f4a11 to 001f4a18 has its CatchHandler @ 001f4ea1 */
    Desktop::Desktop(pDVar7);
    lVar10 = (long)*(int *)(*(long *)(pDVar7 + 0x40) + 0x44);
    fVar14 = local_88;
    Desktop::instance = pDVar7;
    if (lVar10 != 0) {
      plVar8 = *(long **)(*(long *)(pDVar7 + 0x40) + 0x38);
      plVar11 = plVar8 + lVar10;
      bVar4 = bVar13;
      goto LAB_001f4a49;
    }
  }
  else {
LAB_001f4a49:
    do {
      bVar13 = bVar4;
      lVar10 = *(long *)(*plVar8 + 0x48);
      if (((lVar10 != 0) && (*(Component **)(lVar10 + 0x10) == param_14)) &&
         ((*(ushort *)(*plVar8 + 0x3c) & 0x1f0) != 0)) {
        pCVar9 = param_14;
        goto LAB_001f4a70;
      }
      plVar8 = plVar8 + 1;
      bVar4 = bVar13;
    } while (plVar8 != plVar11);
  }
LAB_001f4aa5:
  local_b8[0] = Colour::withMultipliedSaturation(fVar14,uVar12);
  uStack_80 = in_XMM5_Dc;
  uStack_7c = in_XMM5_Dd;
  local_b0[0] = local_b8[0];
  if (bVar13) {
    fVar14 = DAT_005d9068;
    goto LAB_001f4ac5;
  }
  goto LAB_001f4b17;
  while (pCVar9 = *(Component **)(pCVar9 + 0x30), pCVar9 != (Component *)0x0) {
LAB_001f4a70:
    if ((*(ushort *)(pCVar9 + 0xe8) & 0x8000) != 0) goto LAB_001f4aa5;
  }
  local_b0[0] = Colour::withMultipliedSaturation(fVar14,uVar12);
  fVar14 = DAT_005d9070;
LAB_001f4ac5:
  local_b8[0] = Colour::contrasting(fVar14,(Colour *)local_b0);
  uStack_80 = in_XMM5_Dc;
  uStack_7c = in_XMM5_Dd;
LAB_001f4b17:
  fVar14 = local_a8;
  fVar17 = (float)(iVar5 + -2);
  do {
    fVar16 = DAT_005d9088;
    if ((*(ushort *)(param_14 + 0xe8) & 0x8000) != 0) goto LAB_001f4b6a;
    param_14 = *(Component **)(param_14 + 0x30);
  } while (param_14 != (Component *)0x0);
  fVar16 = DAT_005de3cc;
LAB_001f4b6a:
  if (param_13 < 2) {
    if (param_13 == 1) {
      fVar14 = local_78;
      fVar15 = (float)param_11 * DAT_005d9044 + (float)(int)local_a8;
    }
    else {
      fVar14 = (float)param_12 * DAT_005d9044 + (float)param_10;
      fVar15 = local_78;
    }
    drawGlassSphere(fVar15 - fVar17,fVar14 - fVar17,fVar17 + fVar17,fVar16,param_8_00,local_b8);
    return;
  }
  if (param_13 == 0xc) {
    local_c4 = (float)(int)local_a8;
    local_a8 = (float)param_11;
    local_c4 = DAT_005d9044 * local_a8 + local_c4;
    fVar15 = local_78 - fVar17;
    local_78 = fVar17 + fVar17;
    local_88 = fVar17;
    uStack_84 = uVar18;
    uStack_74 = uVar18;
    drawGlassSphere(local_c4 - fVar17,fVar15,local_78,fVar16,param_8_00,local_b8);
    fVar17 = local_88;
    uVar18 = uStack_84;
LAB_001f4ca0:
    local_c0 = (float)(int)fVar14;
    local_5c = DAT_005d98f0 * local_a8;
    if (fVar17 <= DAT_005d98f0 * local_a8) {
      local_5c = fVar17;
    }
    uStack_44 = _UNK_006524b4 ^ uVar18;
    uStack_40 = _UNK_006524b8 ^ uStack_80;
    uStack_3c = _UNK_006524bc ^ uStack_7c;
    local_48 = (float)(_DAT_006524b0 ^ (uint)fVar17) - fVar17;
    fVar14 = local_48 + local_c4;
    if (fVar14 <= 0.0) {
      fVar14 = 0.0;
    }
    drawGlassPointer(fVar14,(ulong)(uint)(local_58 - fVar17),local_78,fVar16,param_8_00,local_b8,1);
    fVar17 = local_c0 + local_a8 + local_48;
    fVar14 = local_c4;
    if (fVar17 <= local_c4) {
      fVar14 = fVar17;
    }
    fVar17 = local_8c - local_5c;
    iVar5 = 3;
    fVar15 = local_78;
  }
  else {
    if (param_13 == 0xb) {
      fVar14 = local_78 - fVar17;
      local_78 = DAT_005d9044 * (float)param_12 + (float)param_10;
      local_a8 = fVar17 + fVar17;
      uStack_a4 = uVar18;
      local_88 = fVar17;
      uStack_84 = uVar18;
      drawGlassSphere(fVar14,local_78 - fVar17,local_a8,fVar16,param_8_00,local_b8);
    }
    else {
      if (param_13 == 10) {
        local_c4 = DAT_005d9044 * (float)param_11 + (float)(int)local_a8;
        local_78 = fVar17 + fVar17;
        local_a8 = (float)param_11;
        uStack_74 = uVar18;
        goto LAB_001f4ca0;
      }
      if ((param_13 & 0xfffffffd) != 9) {
        return;
      }
      local_78 = DAT_005d9044 * (float)param_12 + (float)param_10;
      local_a8 = fVar17 + fVar17;
      local_88 = fVar17;
      uStack_84 = uVar18;
      uStack_a4 = uVar18;
    }
    local_c0 = (float)param_10;
    local_c4 = (float)param_12;
    fVar14 = DAT_005d98f0 * local_c4;
    if (local_88 <= DAT_005d98f0 * local_c4) {
      fVar14 = local_88;
    }
    fVar14 = local_58 - fVar14;
    uStack_54 = _UNK_006524b4 ^ uStack_84;
    uStack_50 = _UNK_006524b8 ^ uStack_80;
    uStack_4c = _UNK_006524bc ^ uStack_7c;
    local_58 = (float)(_DAT_006524b0 ^ (uint)local_88) - local_88;
    fVar17 = local_58 + local_78;
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    drawGlassPointer(fVar14,CONCAT44(uStack_54,fVar17),local_a8,fVar16,param_8_00,local_b8,2);
    fVar14 = local_8c - local_88;
    fVar15 = local_c0 + local_c4 + local_58;
    fVar17 = local_78;
    if (fVar15 <= local_78) {
      fVar17 = fVar15;
    }
    iVar5 = 4;
    fVar15 = local_a8;
  }
  drawGlassPointer(fVar14,(ulong)(uint)fVar17,fVar15,fVar16,param_8_00,local_b8,iVar5);
  return;
}


