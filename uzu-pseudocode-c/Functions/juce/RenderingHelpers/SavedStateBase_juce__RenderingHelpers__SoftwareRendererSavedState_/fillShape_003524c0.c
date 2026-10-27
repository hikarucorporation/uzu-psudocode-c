// Function : fillShape
// Namespace: juce:RenderingHelpers:SavedStateBase_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 003524c0
// Prototype: undefined fillShape(SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> * param_1, long * param_2)
// Body     : 003524c0 - 00352953


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::RenderingHelpers::SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>::fillShape(juce::ReferenceCountedObjectPtr<juce::RenderingHelpers::ClipRegions::Base<juce::RenderingHelpers::SoftwareRendererSavedState>
   >, bool) */

void __cdecl
juce::RenderingHelpers::SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>::
fillShape(SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> *param_1,long *param_2)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  double dVar7;
  long *plVar8;
  double dVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char cVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> *pSVar17;
  undefined1 uVar18;
  ulong uVar19;
  uint *puVar20;
  long lVar21;
  void *pvVar22;
  uint uVar23;
  void *pvVar24;
  uint uVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  double dVar29;
  undefined1 auVar30 [16];
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  uint uVar41;
  uint uVar42;
  undefined8 uVar43;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  void *local_80;
  undefined8 uStack_78;
  undefined1 local_68 [8];
  float fStack_60;
  float fStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  
  (**(code **)(**(long **)param_1 + 0x18))(&local_98,*(long **)param_1,param_2);
  plVar5 = (long *)*param_2;
  *param_2 = (long)local_98;
  plVar8 = local_98;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      local_98 = plVar5;
      (**(code **)(*plVar5 + 8))();
      plVar5 = local_98;
      plVar8 = (long *)*param_2;
    }
  }
  local_98 = plVar5;
  if (plVar8 == (long *)0x0) {
    return;
  }
  puVar6 = *(undefined8 **)(param_1 + 0x38);
  if (puVar6 == (undefined8 *)0x0) {
    if (*(long *)(param_1 + 0x40) != 0) {
      renderImage(param_1,(long *)(param_1 + 0x40),(undefined8 *)(param_1 + 0x48),plVar8);
      return;
    }
    uVar4 = *(uint *)(param_1 + 0x30);
    uVar26 = uVar4 >> 8;
    uVar23 = uVar4 >> 0x10;
    uVar25 = uVar4 >> 0x18;
    cVar13 = (char)(uVar4 >> 0x18);
    if (cVar13 == -1) {
      uVar25 = uVar4;
    }
    else if (cVar13 == '\0') {
      uVar23 = 0;
      uVar26 = 0;
      uVar25 = 0;
    }
    else {
      uVar26 = (uVar26 & 0xff) * uVar25 + 0x7f >> 8;
      uVar23 = (uVar23 & 0xff) * uVar25 + 0x7f >> 8;
      uVar25 = (uVar4 & 0xff) * uVar25 + 0x7f >> 8;
    }
    (**(code **)(*plVar8 + 0x78))
              (plVar8,param_1,
               uVar25 & 0xff | (uVar26 & 0xff) << 8 | (uVar23 & 0xff) << 0x10 | uVar4 & 0xff000000,0
              );
    return;
  }
  uVar43 = *puVar6;
  uStack_90 = puVar6[1];
  local_88 = *(undefined1 *)(puVar6 + 2);
  local_80 = (void *)0x0;
  uStack_78 = 0;
  uVar4 = *(uint *)((long)puVar6 + 0x24);
  local_98 = (long *)uVar43;
  if ((long)(int)uVar4 < 1) {
    uStack_78 = (ulong)uVar4 << 0x20;
    if (uVar4 == 0) goto LAB_00352731;
    pvVar24 = (void *)((long)(int)uVar4 << 4);
    pvVar22 = (void *)0x0;
  }
  else {
    pvVar24 = (void *)puVar6[3];
    uVar25 = uVar4 + (uVar4 >> 1) + 8;
    uVar26 = uVar25 & 0xfffffff8;
    local_48 = uVar43;
    uStack_40 = uStack_90;
    if (0 < (int)uVar26) {
      local_80 = malloc((ulong)uVar26 << 4);
    }
    pvVar22 = local_80;
    uStack_78 = CONCAT44(uStack_78._4_4_,uVar25) & 0xfffffffffffffff8;
    memcpy(local_80,pvVar24,(ulong)uVar4 * 0x10);
    uStack_78 = CONCAT44(uVar4,(undefined4)uStack_78);
    pvVar24 = (void *)((ulong)uVar4 * 0x10 + (long)pvVar22);
    uVar43 = local_48;
  }
  uVar23 = _UNK_005dd25c;
  uVar26 = _UNK_005dd258;
  uVar25 = _UNK_005dd254;
  uVar4 = _DAT_005dd250;
  iVar12 = _UNK_005dd24c;
  iVar11 = _UNK_005dd248;
  iVar10 = _UNK_005dd244;
  iVar14 = _DAT_005dd240;
  dVar9 = _UNK_005d9a98;
  dVar29 = _DAT_005d9a90;
  fVar27 = (float)(byte)param_1[0x33] / DAT_005de3b0;
  uVar15 = (long)pvVar24 + (-0x10 - (long)pvVar22);
  dVar7 = DAT_005d9098;
  if (0x3f < uVar15) {
    lVar16 = (uVar15 >> 4) + 1;
    uVar19 = (ulong)((uint)lVar16 & 3);
    uVar15 = 4;
    if (uVar19 != 0) {
      uVar15 = uVar19;
    }
    lVar16 = lVar16 - uVar15;
    puVar20 = (uint *)((long)pvVar22 + 0x38);
    lVar21 = lVar16;
    do {
      uVar31 = SUB84((double)((float)(puVar20[-4] >> 0x18) * fVar27) + dVar29,0);
      uVar34 = SUB84((double)((float)(*puVar20 >> 0x18) * fVar27) + dVar9,0);
      uVar41 = SUB84((double)((float)(puVar20[-0xc] >> 0x18) * fVar27) + dVar29,0);
      uVar42 = SUB84((double)((float)(puVar20[-8] >> 0x18) * fVar27) + dVar9,0);
      uVar32 = -(uint)((int)uVar41 < iVar14);
      uVar33 = -(uint)((int)uVar42 < iVar10);
      uVar35 = -(uint)((int)uVar31 < iVar11);
      uVar36 = -(uint)((int)uVar34 < iVar12);
      puVar20[-0xc] = puVar20[-0xc] & uVar4 | (uVar32 ^ 0xffffffff | uVar41 & uVar32) << 0x18;
      puVar20[-8] = puVar20[-8] & uVar25 | (uVar33 ^ 0xffffffff | uVar42 & uVar33) << 0x18;
      puVar20[-4] = puVar20[-4] & uVar26 | (uVar35 ^ 0xffffffff | uVar31 & uVar35) << 0x18;
      *puVar20 = *puVar20 & uVar23 | (uVar36 ^ 0xffffffff | uVar34 & uVar36) << 0x18;
      puVar20 = puVar20 + 0x10;
      lVar21 = lVar21 + -4;
    } while (lVar21 != 0);
    pvVar22 = (void *)((long)pvVar22 + lVar16 * 0x10);
    dVar7 = DAT_005d9098;
  }
  do {
    dVar29 = (double)((float)*(byte *)((long)pvVar22 + 0xb) * fVar27) + dVar7;
    uVar18 = SUB81(dVar29,0);
    if (0xfe < SUB84(dVar29,0)) {
      uVar18 = 0xff;
    }
    *(undefined1 *)((long)pvVar22 + 0xb) = uVar18;
    pvVar22 = (void *)((long)pvVar22 + 0x10);
  } while (pvVar22 != pvVar24);
LAB_00352731:
  if (param_1[0x28] == (SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>)0x0) {
    fVar27 = *(float *)(param_1 + 8);
    fVar28 = *(float *)(param_1 + 0xc);
    fVar37 = (float)*(undefined8 *)(param_1 + 0x48);
    fVar38 = (float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20);
    fStack_60 = fVar27 * *(float *)(param_1 + 0x50) + fVar28 * *(float *)(param_1 + 0x5c) +
                *(float *)(param_1 + 0x10);
    fVar2 = *(float *)(param_1 + 0x14);
    fVar3 = *(float *)(param_1 + 0x18);
    fVar39 = (float)*(undefined8 *)(param_1 + 0x54);
    fVar40 = (float)((ulong)*(undefined8 *)(param_1 + 0x54) >> 0x20);
    local_68._0_4_ = fVar27 * fVar37 + fVar28 * fVar39;
    local_68._4_4_ = fVar27 * fVar38 + fVar28 * fVar40;
    fStack_5c = fVar2 * fVar37 + fVar3 * fVar39;
    fVar28 = fVar2 * fVar38 + fVar3 * fVar40;
    fVar27 = fVar2 * *(float *)(param_1 + 0x50) + *(float *)(param_1 + 0x5c) * fVar3;
    pSVar17 = param_1 + 0x1c;
  }
  else {
    fVar27 = (float)(int)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
    fStack_60 = (float)(int)*(undefined8 *)(param_1 + 0x20) + *(float *)(param_1 + 0x50);
    local_68._0_4_ = SUB84(*(undefined8 *)(param_1 + 0x48),0);
    local_68._4_4_ = SUB84((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20,0);
    pSVar17 = param_1 + 0x5c;
    fStack_5c = (float)*(undefined8 *)(param_1 + 0x54);
    fVar28 = (float)((ulong)*(undefined8 *)(param_1 + 0x54) >> 0x20);
  }
  fStack_60 = fStack_60 + _DAT_0065d700;
  fVar27 = fVar27 + *(float *)pSVar17 + _UNK_0065d704;
  local_58 = CONCAT44(fVar27,fVar28);
  auVar30._4_4_ = -(uint)(_UNK_005dd404 != (float)local_68._4_4_);
  auVar30._0_4_ = -(uint)(_DAT_005dd400 != (float)local_68._0_4_);
  auVar30._8_4_ = -(uint)(_UNK_005dd408 != fStack_5c);
  auVar30._12_4_ = -(uint)(_UNK_005dd40c != fVar28);
  iVar14 = movmskps((int)pSVar17,auVar30);
  if (iVar14 == 0) {
    fVar28 = (float)((ulong)uVar43 >> 0x20);
    local_98 = (long *)CONCAT44((float)uVar43 * fStack_5c + fVar28 + fVar27,
                                (float)local_68._4_4_ * fVar28 + (float)uVar43 + fStack_60);
    uStack_90 = CONCAT44(fStack_5c * (float)uStack_90 + uStack_90._4_4_ + fVar27,
                         (float)local_68._4_4_ * uStack_90._4_4_ + (float)uStack_90 + fStack_60);
    _local_68 = ZEXT416(DAT_005d9038);
    local_58 = 0x3f800000;
  }
                    /* try { // try from 003528a5 to 003528b5 has its CatchHandler @ 00352954 */
  (**(code **)(*(long *)*param_2 + 0x80))
            ((long *)*param_2,param_1,&local_98,local_68,(char)iVar14 == '\0');
  uStack_78 = uStack_78 & 0xffffffff;
  free(local_80);
  return;
}


