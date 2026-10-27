// Function : push_clip
// Namespace: hb_paint_extents_context_t
// Entry    : 0046c180
// Prototype: undefined push_clip(undefined8 param_1, undefined8 param_2, long param_3)
// Body     : 0046c180 - 0046c4d1


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl */
/* hb_paint_extents_context_t::push_clip(hb_extents_t) */

void __cdecl
hb_paint_extents_context_t::push_clip(undefined8 param_1,undefined8 param_2,long param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  void *pvVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  
  fVar22 = (float)((ulong)param_2 >> 0x20);
  if (*(int *)(param_3 + 4) == 0) {
    fVar15 = 0.0;
    fVar17 = 0.0;
    _hb_CrapPool = 0;
    _DAT_0071cd88 = 0;
    DAT_0071cd90 = 0;
    fVar21 = 0.0;
    fVar13 = 0.0;
    uVar27 = 0;
  }
  else {
    uVar7 = (ulong)(*(int *)(param_3 + 4) - 1);
    lVar4 = *(long *)(param_3 + 8);
    pfVar1 = (float *)(lVar4 + uVar7 * 0x18);
    fVar15 = *pfVar1;
    fVar17 = pfVar1[1];
    pfVar1 = (float *)(lVar4 + 8 + uVar7 * 0x18);
    fVar21 = *pfVar1;
    fVar13 = pfVar1[1];
    uVar27 = *(undefined8 *)(lVar4 + 0x10 + uVar7 * 0x18);
  }
  fVar20 = (float)((ulong)param_1 >> 0x20);
  fVar19 = fVar20 * fVar21;
  fVar20 = fVar20 * fVar13;
  fVar12 = (float)param_1 * fVar15;
  fVar14 = (float)param_1 * fVar17;
  fVar16 = (float)uVar27;
  fVar25 = fVar12 + fVar19 + fVar16;
  fVar18 = (float)((ulong)uVar27 >> 0x20);
  fVar26 = fVar14 + fVar20 + fVar18;
  fVar21 = fVar22 * fVar21;
  fVar22 = fVar22 * fVar13;
  fVar13 = fVar12 + fVar21 + fVar16;
  fVar12 = fVar14 + fVar22 + fVar18;
  fVar14 = (float)(~-(uint)(fVar25 <= fVar13) & (uint)fVar13 |
                  (uint)fVar25 & -(uint)(fVar25 <= fVar13));
  fVar24 = (float)(~-(uint)(fVar26 <= fVar12) & (uint)fVar12 |
                  (uint)fVar26 & -(uint)(fVar26 <= fVar12));
  fVar25 = (float)(~-(uint)(fVar13 <= fVar25) & (uint)fVar13 |
                  (uint)fVar25 & -(uint)(fVar13 <= fVar25));
  fVar26 = (float)(~-(uint)(fVar12 <= fVar26) & (uint)fVar12 |
                  (uint)fVar26 & -(uint)(fVar12 <= fVar26));
  fVar15 = (float)param_2 * fVar15;
  fVar17 = (float)param_2 * fVar17;
  fVar13 = fVar19 + fVar15 + fVar16;
  fVar12 = fVar20 + fVar17 + fVar18;
  if (fVar25 < fVar14) {
    fVar16 = fVar15 + fVar21 + fVar16;
    fVar18 = fVar17 + fVar22 + fVar18;
    fVar20 = fVar13;
    fVar22 = fVar12;
LAB_0046c24e:
    bVar5 = fVar13 <= fVar16;
    bVar6 = fVar12 <= fVar18;
    uVar10 = ~-(uint)bVar5 & (uint)fVar16;
    uVar11 = ~-(uint)bVar6 & (uint)fVar18;
    fVar16 = (float)(~-(uint)(fVar16 <= fVar20) & (uint)fVar16 |
                    (uint)fVar20 & -(uint)(fVar16 <= fVar20));
    fVar18 = (float)(~-(uint)(fVar18 <= fVar22) & (uint)fVar18 |
                    (uint)fVar22 & -(uint)(fVar18 <= fVar22));
    fVar22 = (float)(uVar10 | (uint)fVar13 & -(uint)bVar5);
    fVar15 = (float)(uVar11 | (uint)fVar12 & -(uint)bVar6);
  }
  else {
    uVar10 = -(uint)(fVar24 <= fVar12);
    fVar14 = (float)(~-(uint)(fVar14 <= fVar13) & (uint)fVar13 |
                    (uint)fVar14 & -(uint)(fVar14 <= fVar13));
    uVar11 = -(uint)(fVar12 <= fVar26);
    uVar23 = ~uVar11 & (uint)fVar12;
    fVar20 = (float)(~-(uint)(fVar13 <= fVar25) & (uint)fVar13 |
                    (uint)fVar25 & -(uint)(fVar13 <= fVar25));
    fVar16 = fVar15 + fVar21 + fVar16;
    fVar18 = fVar17 + fVar22 + fVar18;
    fVar13 = fVar14;
    fVar12 = (float)(~uVar10 & (uint)fVar12 | (uint)fVar24 & uVar10);
    fVar22 = (float)(uVar23 | (uint)fVar26 & uVar11);
    if (fVar14 <= fVar20) goto LAB_0046c24e;
    fVar22 = fVar16;
    fVar15 = fVar18;
  }
  iVar9 = (fVar18 <= fVar15 || fVar16 <= fVar22) + 1;
  iVar2 = *(int *)(param_3 + 0x14);
  if (iVar2 == 0) {
    _hb_CrapPool = 0;
    _DAT_0071cd88 = 0;
    DAT_0071cd90 = DAT_0071cd90 & 0xffffffff00000000;
    uVar10 = *(uint *)(param_3 + 0x10);
    if (0 < (int)uVar10) goto LAB_0046c384;
  }
  else {
    uVar7 = (ulong)(iVar2 - 1);
    lVar4 = *(long *)(param_3 + 0x18);
    iVar3 = *(int *)(lVar4 + uVar7 * 0x14);
    if (iVar3 == 1) {
      iVar9 = 2;
      if (fVar18 > fVar15 && fVar16 > fVar22) {
        fVar17 = *(float *)(lVar4 + 4 + uVar7 * 0x14);
        fVar21 = *(float *)(lVar4 + 8 + uVar7 * 0x14);
        uVar10 = -(uint)(fVar17 <= fVar22);
        fVar22 = (float)(uVar10 & (uint)fVar22 | ~uVar10 & (uint)fVar17);
        uVar10 = -(uint)(fVar21 <= fVar15);
        fVar15 = (float)(uVar10 & (uint)fVar15 | ~uVar10 & (uint)fVar21);
        fVar17 = *(float *)(lVar4 + 0xc + uVar7 * 0x14);
        uVar10 = -(uint)(fVar16 <= fVar17);
        fVar16 = (float)(uVar10 & (uint)fVar16 | ~uVar10 & (uint)fVar17);
        fVar17 = *(float *)(lVar4 + 0x10 + uVar7 * 0x14);
        uVar10 = -(uint)(fVar18 <= fVar17);
        fVar18 = (float)(uVar10 & (uint)fVar18 | ~uVar10 & (uint)fVar17);
        iVar9 = (fVar18 <= fVar15 || fVar16 <= fVar22) + 1;
      }
LAB_0046c369:
      uVar10 = *(uint *)(param_3 + 0x10);
    }
    else {
      if (iVar3 != 2) goto LAB_0046c369;
      iVar9 = 2;
      uVar10 = *(uint *)(param_3 + 0x10);
    }
    if (iVar2 < (int)uVar10) goto LAB_0046c384;
  }
  if ((int)uVar10 < 0) goto LAB_0046c492;
  uVar11 = uVar10;
  if (iVar2 + 1U <= uVar10) goto LAB_0046c384;
  do {
    uVar11 = uVar11 + (uVar11 >> 1) + 8;
  } while (uVar11 < iVar2 + 1U);
  if (0xccccccc < uVar11) {
LAB_0046c48c:
    *(uint *)(param_3 + 0x10) = ~uVar10;
LAB_0046c492:
    DAT_0071cd90 = DAT_0071cd90 & 0xffffffff00000000;
    _hb_CrapPool = 0;
    _DAT_0071cd88 = 0;
    return;
  }
  if (uVar11 == 0) {
    free(*(void **)(param_3 + 0x18));
    pvVar8 = (void *)0x0;
  }
  else {
    pvVar8 = realloc(*(void **)(param_3 + 0x18),(ulong)uVar11 * 0x14);
    if (pvVar8 == (void *)0x0) {
      uVar10 = *(uint *)(param_3 + 0x10);
      if (uVar11 <= uVar10) goto LAB_0046c384;
      goto LAB_0046c48c;
    }
  }
  *(void **)(param_3 + 0x18) = pvVar8;
  *(uint *)(param_3 + 0x10) = uVar11;
LAB_0046c384:
  lVar4 = *(long *)(param_3 + 0x18);
  uVar7 = (ulong)*(uint *)(param_3 + 0x14);
  *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) + 1;
  *(int *)(lVar4 + uVar7 * 0x14) = iVar9;
  *(float *)(lVar4 + 4 + uVar7 * 0x14) = fVar22;
  *(float *)(lVar4 + 8 + uVar7 * 0x14) = fVar15;
  *(float *)(lVar4 + 0xc + uVar7 * 0x14) = fVar16;
  *(float *)(lVar4 + 0x10 + uVar7 * 0x14) = fVar18;
  return;
}


