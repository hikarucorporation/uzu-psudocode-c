// Function : get_extents
// Namespace: OT:glyf_accelerator_t
// Entry    : 00451090
// Prototype: ulong get_extents(glyf_accelerator_t * this, long param_1, uint param_2, int * param_3)
// Body     : 00451090 - 004513e9


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::glyf_accelerator_t::get_extents(hb_font_t*, unsigned int, hb_glyph_extents_t*) const */

ulong __thiscall
OT::glyf_accelerator_t::get_extents(glyf_accelerator_t *this,long param_1,uint param_2,int *param_3)

{
  int iVar1;
  uint *puVar2;
  ulong uVar3;
  ushort uVar4;
  ulong uVar5;
  ushort *puVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  short *psVar11;
  ushort *puVar12;
  ushort uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ushort *puVar17;
  ushort uVar18;
  undefined8 unaff_R15;
  undefined7 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float __x;
  
  if (*(uint *)(this + 0x1c) <= param_2) {
    uVar5 = 0;
    goto LAB_004513d0;
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    uVar5 = get_points<OT::glyf_accelerator_t::points_aggregator_t>((ushort *)this,param_1,param_2);
    return uVar5;
  }
  puVar10 = *(undefined4 **)(this + 0x20);
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = &_hb_NullPool;
  }
  uVar3 = (ulong)param_2;
  uVar19 = (undefined7)((ulong)unaff_R15 >> 8);
  if (this[0x18] == (glyf_accelerator_t)0x0) {
    uVar8 = *(uint *)(*(long *)(puVar10 + 4) + uVar3 * 4);
    uVar15 = *(uint *)(*(long *)(puVar10 + 4) + 4 + uVar3 * 4);
    uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
    uVar15 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18;
    uVar5 = CONCAT71(uVar19,1);
    uVar14 = uVar15 - uVar8;
    if (uVar15 < uVar8) goto LAB_004513d0;
  }
  else {
    uVar13 = *(ushort *)(*(long *)(puVar10 + 4) + uVar3 * 2);
    uVar18 = *(ushort *)(*(long *)(puVar10 + 4) + 2 + uVar3 * 2);
    uVar14 = (uint)(ushort)(uVar13 << 8 | uVar13 >> 8);
    uVar8 = uVar14 * 2;
    uVar15 = (uint)(ushort)(uVar18 << 8 | uVar18 >> 8) * 2;
    uVar5 = CONCAT71(uVar19,1);
    uVar14 = uVar15 + uVar14 * -2;
    if (uVar15 < uVar8) goto LAB_004513d0;
  }
  uVar5 = CONCAT71(uVar19,1);
  puVar10 = *(undefined4 **)(this + 0x28);
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = &_hb_NullPool;
  }
  if ((uint)puVar10[6] < uVar15) goto LAB_004513d0;
  psVar11 = (short *)((ulong)uVar8 + *(long *)(puVar10 + 4));
  if (uVar14 < 10) {
    psVar11 = (short *)&_hb_NullPool;
  }
  if (*psVar11 == 0) goto LAB_004513d0;
  uVar18 = psVar11[1] << 8 | (ushort)psVar11[1] >> 8;
  uVar13 = psVar11[3] << 8 | (ushort)psVar11[3] >> 8;
  puVar6 = (ushort *)(psVar11 + 1);
  if ((short)uVar13 < (short)uVar18) {
    puVar6 = (ushort *)(psVar11 + 3);
  }
  puVar2 = *(uint **)(this + 8);
  uVar8 = *puVar2;
  uVar15 = (uint)(ushort)(*puVar6 << 8 | *puVar6 >> 8);
  if (param_2 < uVar8) {
    puVar10 = &_hb_NullPool;
    if (*(undefined4 **)(puVar2 + 6) != (undefined4 *)0x0) {
      puVar10 = *(undefined4 **)(puVar2 + 6);
    }
    puVar6 = (ushort *)(*(long *)(puVar10 + 4) + uVar3 * 4 + 2);
LAB_0045121c:
    uVar14 = (uint)(ushort)(*puVar6 << 8 | *puVar6 >> 8);
  }
  else {
    uVar14 = uVar15;
    if (param_2 < puVar2[1]) {
      puVar10 = &_hb_NullPool;
      if (*(undefined4 **)(puVar2 + 6) != (undefined4 *)0x0) {
        puVar10 = *(undefined4 **)(puVar2 + 6);
      }
      puVar6 = (ushort *)((ulong)uVar8 * 4 + *(long *)(puVar10 + 4) + (ulong)(param_2 - uVar8) * 2);
      goto LAB_0045121c;
    }
  }
  uVar4 = psVar11[2] << 8 | (ushort)psVar11[2] >> 8;
  uVar7 = psVar11[4] << 8 | (ushort)psVar11[4] >> 8;
  puVar6 = (ushort *)(psVar11 + 2);
  if ((short)uVar4 < (short)uVar7) {
    puVar6 = (ushort *)(psVar11 + 4);
  }
  puVar12 = (ushort *)(psVar11 + 2);
  if ((short)uVar7 < (short)uVar4) {
    puVar12 = (ushort *)(psVar11 + 4);
  }
  puVar17 = (ushort *)(psVar11 + 1);
  if ((short)uVar18 < (short)uVar13) {
    puVar17 = (ushort *)(psVar11 + 3);
  }
  fVar24 = *(float *)(param_1 + 0x4c) *
           (float)((int)((((ushort)(*puVar17 << 8 | *puVar17 >> 8) - uVar15) + uVar14) * 0x10000) >>
                  0x10);
  __x = *(float *)(param_1 + 0x4c) * (float)(int)(short)uVar14;
  fVar22 = *(float *)(param_1 + 0x50) * (float)(int)(short)(*puVar6 << 8 | *puVar6 >> 8);
  fVar23 = *(float *)(param_1 + 0x50) * (float)(int)(short)(*puVar12 << 8 | *puVar12 >> 8);
  fVar21 = *(float *)(param_1 + 0x48);
  if ((fVar21 != 0.0) || (NAN(fVar21))) {
    fVar20 = fVar21 * fVar22;
    fVar21 = fVar21 * fVar23;
    fVar24 = fVar24 + (float)(~-(uint)(fVar21 <= fVar20) & (uint)fVar21 |
                             (uint)fVar20 & -(uint)(fVar21 <= fVar20));
    __x = __x + (float)(~-(uint)(fVar20 <= fVar21) & (uint)fVar21 |
                       (uint)fVar20 & -(uint)(fVar20 <= fVar21));
  }
  fVar21 = floorf(__x);
  *param_3 = (int)fVar21;
  fVar22 = floorf(fVar22);
  param_3[1] = (int)fVar22;
  fVar24 = ceilf(fVar24);
  param_3[2] = (int)(fVar24 - (float)(int)fVar21);
  fVar23 = ceilf(fVar23);
  param_3[3] = (int)(fVar23 - (float)(int)fVar22);
  iVar1 = *(int *)(param_1 + 0x3c);
  iVar9 = *(int *)(param_1 + 0x40);
  if (iVar1 != 0 || iVar9 != 0) {
    iVar16 = -iVar9;
    if (-1 < *(int *)(param_1 + 0x2c)) {
      iVar16 = iVar9;
    }
    param_3[1] = (int)fVar22 + iVar16;
    param_3[3] = (int)(fVar23 - (float)(int)fVar22) - iVar16;
    iVar9 = -iVar1;
    if (-1 < *(int *)(param_1 + 0x28)) {
      iVar9 = iVar1;
    }
    if (*(char *)(param_1 + 0x38) != '\0') {
      *param_3 = (int)fVar21 - iVar9 / 2;
    }
    param_3[2] = iVar9 + (int)(fVar24 - (float)(int)fVar21);
  }
LAB_004513d0:
  return uVar5 & 0xffffffff;
}


