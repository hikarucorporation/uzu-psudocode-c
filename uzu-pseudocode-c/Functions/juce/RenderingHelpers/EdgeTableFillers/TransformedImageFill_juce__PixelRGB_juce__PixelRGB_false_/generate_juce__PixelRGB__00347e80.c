// Function : generate<juce::PixelRGB>
// Namespace: juce:RenderingHelpers:EdgeTableFillers:TransformedImageFill_juce__PixelRGB_juce__PixelRGB_false_
// Entry    : 00347e80
// Prototype: void generate<juce::PixelRGB>(TransformedImageFill<juce::PixelRGB,juce::PixelRGB,false> * this, long param_1, int param_2, int param_3)
// Body     : 00347e80 - 0034847d


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void juce::RenderingHelpers::EdgeTableFillers::TransformedImageFill<juce::PixelRGB,
   juce::PixelRGB, false>::generate<juce::PixelRGB>(juce::PixelRGB*, int, int) */

void __thiscall
juce::RenderingHelpers::EdgeTableFillers::TransformedImageFill<juce::PixelRGB,juce::PixelRGB,false>
::generate<juce::PixelRGB>
          (TransformedImageFill<juce::PixelRGB,juce::PixelRGB,false> *this,long param_1,int param_2,
          int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  long *plVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined1 uVar18;
  uint uVar16;
  long lVar17;
  long lVar19;
  undefined1 *puVar20;
  long lVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  long lVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  long lVar31;
  int iVar32;
  long lVar33;
  byte *pbVar34;
  bool bVar35;
  int iVar36;
  float fVar37;
  int iVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  int local_88;
  int local_60;
  
  fVar39 = (float)param_2 + *(float *)(this + 0x40);
  fVar37 = (float)*(int *)(this + 0x68) + *(float *)(this + 0x40);
  fVar40 = *(float *)(this + 4) * fVar37;
  fVar37 = fVar37 * *(float *)(this + 0x10);
  fVar41 = (*(float *)(this + 8) + *(float *)this * ((float)param_3 + fVar39) + fVar40) *
           _DAT_005dd2d0;
  iVar38 = (int)((*(float *)(this + 8) + *(float *)this * fVar39 + fVar40) * _UNK_005dd2d4);
  *(int *)(this + 0x1c) = param_3;
  local_88 = (int)fVar41 - iVar38;
  local_60 = local_88 / param_3;
  local_88 = local_88 % param_3;
  *(int *)(this + 0x20) = local_60;
  *(int *)(this + 0x28) = local_88;
  if (local_88 < 1) {
    local_88 = local_88 + param_3;
    *(int *)(this + 0x28) = local_88;
    local_60 = local_60 + -1;
    *(int *)(this + 0x20) = local_60;
  }
  fVar40 = (*(float *)(this + 0x14) + *(float *)(this + 0xc) * ((float)param_3 + fVar39) + fVar37) *
           _DAT_005dd2d0;
  iVar36 = (int)((*(float *)(this + 0x14) + *(float *)(this + 0xc) * fVar39 + fVar37) *
                _UNK_005dd2d4);
  *(int *)(this + 0x30) = param_3;
  iVar13 = (int)fVar40 - iVar36;
  iVar14 = iVar13 / param_3;
  iVar13 = iVar13 % param_3;
  *(int *)(this + 0x34) = iVar14;
  *(int *)(this + 0x3c) = iVar13;
  if (iVar13 < 1) {
    iVar13 = iVar13 + param_3;
    *(int *)(this + 0x3c) = iVar13;
    iVar14 = iVar14 + -1;
    *(int *)(this + 0x34) = iVar14;
  }
  iVar30 = local_88 - param_3;
  iVar27 = iVar13 - param_3;
  iVar9 = *(int *)(this + 0x5c);
  uVar10 = *(uint *)(this + 0x60);
  uVar11 = *(uint *)(this + 100);
  plVar12 = *(long **)(this + 0x50);
  puVar20 = (undefined1 *)(param_1 + 2);
  iVar23 = param_3 + 1;
  uVar28 = iVar38 + *(int *)(this + 0x44);
  uVar22 = iVar36 + *(int *)(this + 0x44);
  do {
    uVar24 = local_60 + uVar28;
    bVar35 = SCARRY4(iVar30,local_88);
    iVar30 = iVar30 + local_88;
    *(int *)(this + 0x24) = iVar30;
    *(uint *)(this + 0x18) = uVar24;
    if (iVar30 != 0 && bVar35 == iVar30 < 0) {
      iVar30 = iVar30 - param_3;
      *(int *)(this + 0x24) = iVar30;
      uVar24 = uVar24 + 1;
      *(uint *)(this + 0x18) = uVar24;
    }
    uVar26 = iVar14 + uVar22;
    bVar35 = SCARRY4(iVar27,iVar13);
    iVar27 = iVar27 + iVar13;
    *(int *)(this + 0x38) = iVar27;
    *(uint *)(this + 0x2c) = uVar26;
    if (iVar27 != 0 && bVar35 == iVar27 < 0) {
      iVar27 = iVar27 - param_3;
      *(int *)(this + 0x38) = iVar27;
      uVar26 = uVar26 + 1;
      *(uint *)(this + 0x2c) = uVar26;
    }
    uVar15 = (int)uVar28 >> 8;
    uVar16 = (int)uVar22 >> 8;
    if (iVar9 == 0) {
LAB_00347ff0:
      if ((int)uVar15 < 0) {
        uVar15 = 0;
      }
      if ((int)uVar16 < 0) {
        uVar16 = 0;
      }
      if ((int)uVar10 < (int)uVar15) {
        uVar15 = uVar10;
      }
      if ((int)uVar11 < (int)uVar16) {
        uVar16 = uVar11;
      }
      lVar19 = (long)*(int *)((long)plVar12 + 0x14) * (long)(int)uVar16 + *plVar12;
      lVar17 = (long)(int)plVar12[3] * (long)(int)uVar15;
      puVar20[-2] = *(undefined1 *)(lVar17 + lVar19);
      puVar20[-1] = *(undefined1 *)(lVar17 + 1 + lVar19);
      *puVar20 = *(undefined1 *)(lVar17 + 2 + lVar19);
    }
    else if (uVar15 < uVar10) {
      if (uVar16 < uVar11) {
        lVar19 = (long)*(int *)((long)plVar12 + 0x14);
        lVar31 = (int)uVar16 * lVar19 + *plVar12;
        lVar21 = (long)(int)plVar12[3];
        lVar25 = (int)uVar15 * lVar21;
        lVar17 = lVar25 + lVar31;
        uVar28 = uVar28 & 0xff;
        uVar22 = uVar22 & 0xff;
        iVar38 = (0x100 - uVar22) * (0x100 - uVar28);
        bVar1 = *(byte *)(lVar25 + lVar31);
        iVar36 = (0x100 - uVar22) * uVar28;
        bVar2 = *(byte *)(lVar21 + lVar17);
        bVar3 = *(byte *)(lVar25 + 1 + lVar31);
        bVar4 = *(byte *)(lVar21 + 1 + lVar17);
        lVar33 = lVar17 + lVar21;
        iVar29 = uVar28 * uVar22;
        bVar5 = *(byte *)(lVar19 + lVar33);
        bVar6 = *(byte *)(lVar19 + 1 + lVar33);
        pbVar34 = (byte *)((lVar33 + lVar19) - lVar21);
        iVar32 = (0x100 - uVar28) * uVar22;
        bVar7 = *pbVar34;
        bVar8 = pbVar34[1];
        *puVar20 = (char)((uint)pbVar34[2] * iVar32 +
                          (uint)*(byte *)(lVar19 + 2 + lVar33) * iVar29 +
                          (uint)*(byte *)(lVar21 + 2 + lVar17) * iVar36 +
                          (uint)*(byte *)(lVar25 + 2 + lVar31) * iVar38 + 0x8000 >> 0x10);
        puVar20[-1] = (char)((uint)bVar6 * iVar29 + (uint)bVar4 * iVar36 + (uint)bVar3 * iVar38 +
                             (uint)bVar8 * iVar32 + 0x8000 >> 0x10);
        puVar20[-2] = (char)((uint)bVar7 * iVar32 +
                             (uint)bVar5 * iVar29 + (uint)bVar2 * iVar36 + (uint)bVar1 * iVar38 +
                             0x8000 >> 0x10);
      }
      else {
        lVar17 = *plVar12;
        if ((int)uVar22 < 0) {
          lVar25 = (long)(int)plVar12[3];
          lVar21 = (int)uVar15 * lVar25;
          lVar19 = lVar17 + lVar21;
          uVar22 = uVar28 & 0xff;
          iVar29 = 0x100 - uVar22;
          iVar36 = (uint)*(byte *)(lVar17 + 2 + lVar21) * iVar29;
          iVar38 = (uint)*(byte *)(lVar17 + lVar21) * iVar29 + *(byte *)(lVar25 + lVar19) * uVar22;
          uVar18 = (undefined1)
                   (*(byte *)(lVar25 + 1 + lVar19) * uVar22 +
                    (uint)*(byte *)(lVar17 + 1 + lVar21) * iVar29 + 0x80 >> 8);
          bVar1 = *(byte *)(lVar25 + 2 + lVar19);
        }
        else {
          lVar17 = lVar17 + (long)*(int *)((long)plVar12 + 0x14) * (long)(int)uVar11;
          lVar25 = (long)(int)plVar12[3];
          lVar21 = (int)uVar15 * lVar25;
          lVar19 = lVar17 + lVar21;
          uVar22 = uVar28 & 0xff;
          iVar29 = 0x100 - uVar22;
          iVar36 = (uint)*(byte *)(lVar21 + 2 + lVar17) * iVar29;
          iVar38 = (uint)*(byte *)(lVar21 + lVar17) * iVar29 + *(byte *)(lVar25 + lVar19) * uVar22;
          uVar18 = (undefined1)
                   (*(byte *)(lVar25 + 1 + lVar19) * uVar22 +
                    (uint)*(byte *)(lVar21 + 1 + lVar17) * iVar29 + 0x80 >> 8);
          bVar1 = *(byte *)(lVar25 + 2 + lVar19);
        }
        *puVar20 = (char)(iVar36 + (uint)bVar1 * (uVar28 & 0xff) + 0x80 >> 8);
        puVar20[-1] = uVar18;
        puVar20[-2] = (char)((uint)(iVar38 + 0x80) >> 8);
      }
    }
    else {
      if (uVar11 <= uVar16) goto LAB_00347ff0;
      lVar17 = (long)*(int *)((long)plVar12 + 0x14);
      pbVar34 = (byte *)((int)uVar16 * lVar17 + *plVar12);
      if ((int)uVar28 < 0) {
        uVar22 = uVar22 & 0xff;
        iVar36 = 0x100 - uVar22;
        bVar1 = pbVar34[1];
        iVar38 = (uint)*pbVar34 * iVar36 + pbVar34[lVar17] * uVar22;
        bVar2 = pbVar34[lVar17 + 1];
        *puVar20 = (char)(pbVar34[lVar17 + 2] * uVar22 + (uint)pbVar34[2] * iVar36 + 0x80 >> 8);
        puVar20[-1] = (char)((uint)bVar1 * iVar36 + bVar2 * uVar22 + 0x80 >> 8);
      }
      else {
        lVar19 = (long)(int)plVar12[3] * (long)(int)uVar10;
        uVar22 = uVar22 & 0xff;
        iVar36 = 0x100 - uVar22;
        bVar1 = pbVar34[lVar19 + 1];
        iVar38 = (uint)pbVar34[lVar19] * iVar36 + pbVar34[lVar17 + lVar19] * uVar22;
        bVar2 = pbVar34[lVar17 + 1 + lVar19];
        *puVar20 = (char)((uint)pbVar34[lVar19 + 2] * iVar36 + pbVar34[lVar17 + 2 + lVar19] * uVar22
                          + 0x80 >> 8);
        puVar20[-1] = (char)((uint)bVar1 * iVar36 + bVar2 * uVar22 + 0x80 >> 8);
      }
      puVar20[-2] = (char)((uint)(iVar38 + 0x80) >> 8);
    }
    puVar20 = puVar20 + 3;
    iVar23 = iVar23 + -1;
    uVar28 = uVar24;
    uVar22 = uVar26;
    if (iVar23 < 2) {
      return;
    }
  } while( true );
}


