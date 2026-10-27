// Function : renderImage
// Namespace: juce:RenderingHelpers:SavedStateBase_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 00335770
// Prototype: undefined renderImage(SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> * this, long * param_1, undefined8 * param_2, long * param_3)
// Body     : 00335770 - 00335d59


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::RenderingHelpers::SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>::renderImage(juce::Image
   const&, juce::AffineTransform const&,
   juce::RenderingHelpers::ClipRegions::Base<juce::RenderingHelpers::SoftwareRendererSavedState>
   const*) */

void __thiscall
juce::RenderingHelpers::SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>::
renderImage(SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> *this,long *param_1,
           undefined8 *param_2,long *param_3)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> SVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> *pSVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  long *local_d0;
  uint local_c4;
  ulong local_c0;
  long *local_b8;
  long *local_b0;
  ulong local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  long *local_88;
  ulong uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  ulong local_58;
  long *local_50;
  long local_48;
  ulong local_40;
  ulong local_38;
  
  if (this[0x28] == (SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>)0x0) {
    fVar20 = *(float *)(this + 8);
    fVar2 = *(float *)(this + 0xc);
    fVar17 = (float)*(undefined8 *)((long)param_2 + 0xc);
    fVar18 = (float)((ulong)*(undefined8 *)((long)param_2 + 0xc) >> 0x20);
    local_98 = fVar20 * *(float *)(param_2 + 1) + fVar2 * *(float *)((long)param_2 + 0x14) +
               *(float *)(this + 0x10);
    fVar3 = *(float *)(this + 0x14);
    fVar4 = *(float *)(this + 0x18);
    fVar19 = (float)*param_2;
    fVar21 = (float)((ulong)*param_2 >> 0x20);
    uVar7 = CONCAT44(fVar20 * fVar21 + fVar2 * fVar18,fVar20 * fVar19 + fVar2 * fVar17);
    uVar10 = CONCAT44(fVar3 * fVar21 + fVar4 * fVar18,fVar3 * fVar19 + fVar4 * fVar17);
    local_8c = fVar3 * *(float *)(param_2 + 1) + *(float *)((long)param_2 + 0x14) * fVar4;
    pSVar12 = this + 0x1c;
  }
  else {
    local_8c = (float)(int)((ulong)*(undefined8 *)(this + 0x20) >> 0x20);
    local_98 = (float)(int)*(undefined8 *)(this + 0x20) + *(float *)(param_2 + 1);
    uVar7 = *param_2;
    uVar10 = *(undefined8 *)((long)param_2 + 0xc);
    pSVar12 = (SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> *)
              ((long)param_2 + 0x14);
  }
  local_8c = local_8c + *(float *)pSVar12;
  local_a0 = (float)uVar7;
  local_9c = (float)((ulong)uVar7 >> 0x20);
  local_90 = (float)((ulong)uVar10 >> 0x20);
  local_94 = (float)uVar10;
  SVar5 = this[0x33];
  if (((((float)((uint)local_9c & _DAT_005d91c0) < DAT_005de570) &&
       ((float)((uint)local_94 & _DAT_005d91c0) < DAT_005de570)) &&
      ((float)((uint)(DAT_005d9054 + local_a0) & _DAT_005d91c0) < DAT_005de570)) &&
     ((float)((uint)(DAT_005d9054 + local_90) & _DAT_005d91c0) < DAT_005de570)) {
    if ((*(int *)(this + 0x60) == 0) ||
       ((((int)(local_8c * DAT_005de53c) | (int)(local_98 * DAT_005de53c)) & 0xe0U) == 0)) {
      uVar15 = (int)((int)(local_98 * DAT_005de53c) + 0x80U) >> 8;
      local_a8 = (ulong)uVar15;
      local_c4 = (int)((int)(local_8c * DAT_005de53c) + 0x80U) >> 8;
      if (param_3 != (long *)0x0) {
        (**(code **)(*param_3 + 0x90))(param_3,this,param_1,SVar5,local_a8,(ulong)local_c4,1);
        return;
      }
      if (*param_1 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(*param_1 + 0x10);
      }
      if (*(long *)(this + 0x68) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined8 *)(*(long *)(this + 0x68) + 0x10);
      }
      uVar11 = 0;
      if (-1 < (int)uVar15) {
        uVar11 = uVar15;
      }
      local_40 = 0;
      if (-1 < (int)local_c4) {
        local_40 = (ulong)local_c4;
      }
      iVar16 = (int)uVar7 + uVar15;
      if ((int)uVar10 < iVar16) {
        iVar16 = (int)uVar10;
      }
      iVar6 = iVar16 - uVar11;
      if (iVar6 < 0) {
        return;
      }
      uVar15 = (int)((ulong)uVar7 >> 0x20) + local_c4;
      uVar9 = (uint)((ulong)uVar10 >> 0x20);
      if ((int)uVar9 < (int)uVar15) {
        uVar15 = uVar9;
      }
      local_38 = (ulong)uVar15;
      uVar15 = uVar15 - (int)local_40;
      if ((int)uVar15 < 0) {
        return;
      }
      if (iVar6 < 1) {
        return;
      }
      if (uVar15 == 0) {
        return;
      }
      local_c0 = (ulong)uVar15;
      local_48 = CONCAT44(uVar15,iVar6);
      local_58 = local_40 << 0x20 | (ulong)uVar11;
      local_b0 = *(long **)this;
      local_50 = operator_new(0x40);
      *(undefined4 *)(local_50 + 1) = 0;
      *local_50 = (long)&PTR__EdgeTableRegion_00711be0;
      local_50[4] = local_58;
      local_50[5] = local_48;
      local_50[6] = 0x4100000020;
      *(undefined1 *)(local_50 + 7) = 1;
      lVar14 = local_c0 * 0x4100000000 + 0x8200000000;
      local_c0 = lVar14 >> 0x20;
      puVar8 = malloc(lVar14 >> 0x1e);
      local_50[2] = (long)puVar8;
      local_50[3] = local_c0;
      *puVar8 = 0;
      iVar6 = uVar11 << 8;
      iVar16 = iVar16 << 8;
      uVar11 = uVar15 & 3;
      if (uVar11 != 0) {
        iVar13 = uVar11 * 0x104;
        do {
          *puVar8 = 2;
          puVar8[1] = iVar6;
          puVar8[2] = 0xff;
          puVar8[3] = iVar16;
          puVar8[4] = 0;
          puVar8 = puVar8 + 0x41;
          iVar13 = iVar13 + -0x104;
        } while (iVar13 != 0);
        uVar15 = (int)local_38 - ((uint)local_40 + uVar11);
      }
      if (2 < ~(uint)local_40 + (int)local_38) {
        uVar15 = uVar15 - 1;
        do {
          *puVar8 = 2;
          puVar8[1] = iVar6;
          puVar8[2] = 0xff;
          puVar8[3] = iVar16;
          puVar8[4] = 0;
          puVar8[0x41] = 2;
          puVar8[0x42] = iVar6;
          puVar8[0x43] = 0xff;
          puVar8[0x44] = iVar16;
          puVar8[0x45] = 0;
          puVar8[0x82] = 2;
          puVar8[0x83] = iVar6;
          puVar8[0x84] = 0xff;
          puVar8[0x85] = iVar16;
          puVar8[0x86] = 0;
          puVar8[0xc3] = 2;
          puVar8[0xc4] = iVar6;
          puVar8[0xc5] = 0xff;
          puVar8[0xc6] = iVar16;
          puVar8[199] = 0;
          uVar15 = uVar15 - 4;
          puVar8 = puVar8 + 0x104;
        } while (uVar15 < 0xfffffffe);
      }
      local_d0 = local_50;
      *(undefined4 *)(local_50 + 1) = 1;
                    /* try { // try from 00335cd7 to 00335ce3 has its CatchHandler @ 00335d64 */
      (**(code **)(*local_b0 + 0x18))(&local_88,local_b0,&local_d0);
      if (local_d0 != (long *)0x0) {
        plVar1 = local_d0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        if ((int)*plVar1 == 0) {
          (**(code **)(*local_d0 + 8))();
        }
      }
      if (local_88 == (long *)0x0) {
        return;
      }
                    /* try { // try from 00335d26 to 00335d36 has its CatchHandler @ 00335d5a */
      (**(code **)(*local_88 + 0x90))(local_88,this,param_1,SVar5,local_a8,local_c4,0);
      if (local_88 == (long *)0x0) {
        return;
      }
      plVar1 = local_88 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      if ((int)*plVar1 == 0) {
        (**(code **)(*local_88 + 8))();
        return;
      }
      return;
    }
  }
  fVar20 = local_90 * local_a0 - local_9c * local_94;
  if ((fVar20 != 0.0) || (NAN(fVar20))) {
    if (param_3 == (long *)0x0) {
      local_78 = 0;
      uStack_70 = 0;
      local_88 = (long *)0x0;
      uStack_80 = 0;
      local_68 = 1;
      if (*param_1 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(*param_1 + 0x10);
      }
      Path::addRectangle(0.0,0.0,(float)(int)uVar7,(float)(int)((ulong)uVar7 >> 0x20),
                         (Path *)&local_88);
                    /* try { // try from 003359ab to 003359b2 has its CatchHandler @ 00335daa */
      (**(code **)(**(long **)this + 0x10))(&local_b8);
                    /* try { // try from 003359bb to 003359cc has its CatchHandler @ 00335d8f */
      (**(code **)(*local_b8 + 0x38))(&local_d0,local_b8,&local_88,&local_a0);
      if (local_b8 != (long *)0x0) {
        plVar1 = local_b8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        if ((int)*plVar1 == 0) {
          (**(code **)(*local_b8 + 8))();
        }
      }
                    /* try { // try from 003359fb to 00335a10 has its CatchHandler @ 00335d85 */
      if ((local_d0 != (long *)0x0) &&
         ((**(code **)(*local_d0 + 0x88))
                    (local_d0,this,param_1,SVar5,&local_a0,*(undefined4 *)(this + 0x60),0),
         local_d0 != (long *)0x0)) {
        plVar1 = local_d0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        if ((int)*plVar1 == 0) {
          (**(code **)(*local_d0 + 8))();
        }
      }
      uStack_80 = uStack_80 & 0xffffffff;
      free(local_88);
    }
    else {
      (**(code **)(*param_3 + 0x88))
                (param_3,this,param_1,SVar5,&local_a0,*(undefined4 *)(this + 0x60),1);
    }
  }
  return;
}


