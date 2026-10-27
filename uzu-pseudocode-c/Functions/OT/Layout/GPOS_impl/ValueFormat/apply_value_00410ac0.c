// Function : apply_value
// Namespace: OT:Layout:GPOS_impl:ValueFormat
// Entry    : 00410ac0
// Prototype: ulong apply_value(ValueFormat * this, long param_1, long param_2, ushort * param_3, int * param_4)
// Body     : 00410ac0 - 004112e7


/* WARNING: Type propagation algorithm not settling */
/* OT::Layout::GPOS_impl::ValueFormat::apply_value(OT::hb_ot_apply_context_t*,
   OT::Layout::GPOS_impl::ValueBase const*, OT::IntType<unsigned short, 2u> const*,
   hb_glyph_position_t&) const */

ulong __thiscall
OT::Layout::GPOS_impl::ValueFormat::apply_value
          (ValueFormat *this,long param_1,long param_2,ushort *param_3,int *param_4)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  uint uVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  ushort *puVar10;
  Device *pDVar11;
  ushort uVar12;
  ushort uVar13;
  undefined8 unaff_R12;
  ulong uVar14;
  ulong uVar15;
  bool bVar16;
  bool bVar17;
  
  uVar1 = *(ushort *)this;
  if (uVar1 == 0) {
    uVar14 = 0;
    goto LAB_00411210;
  }
  uVar5 = uVar1 >> 8;
  lVar2 = *(long *)(param_1 + 0x90);
  uVar9 = *(uint *)(param_1 + 0x128);
  if ((uVar5 & 1) == 0) {
    uVar14 = 0;
  }
  else {
    uVar7 = *param_3;
    param_3 = param_3 + 1;
    uVar14 = CONCAT71((int7)((ulong)unaff_R12 >> 8),uVar7 != 0);
    param_4[2] = param_4[2] +
                 (int)((ulong)((long)(short)(uVar7 << 8 | uVar7 >> 8) * *(long *)(lVar2 + 0x58) +
                              0x8000) >> 0x10);
  }
  if ((uVar5 & 2) != 0) {
    uVar7 = *param_3;
    param_3 = param_3 + 1;
    uVar14 = CONCAT71((int7)(uVar14 >> 8),(byte)uVar14 | uVar7 != 0);
    param_4[3] = param_4[3] +
                 (int)((ulong)((long)(short)(uVar7 << 8 | uVar7 >> 8) * *(long *)(lVar2 + 0x60) +
                              0x8000) >> 0x10);
  }
  uVar9 = uVar9 & 0xfffffffe;
  if ((uVar5 & 4) != 0) {
    if (uVar9 == 4) {
      uVar7 = *param_3;
      uVar14 = CONCAT71((int7)(uVar14 >> 8),(byte)uVar14 | uVar7 != 0);
      *param_4 = *param_4 +
                 (int)((ulong)((long)(short)(uVar7 << 8 | uVar7 >> 8) * *(long *)(lVar2 + 0x58) +
                              0x8000) >> 0x10);
    }
    param_3 = param_3 + 1;
  }
  if ((uVar5 & 8) != 0) {
    if (uVar9 != 4) {
      uVar7 = *param_3;
      uVar14 = CONCAT71((int7)(uVar14 >> 8),(byte)uVar14 | uVar7 != 0);
      param_4[1] = param_4[1] -
                   (int)((ulong)((long)(short)(uVar7 << 8 | uVar7 >> 8) * *(long *)(lVar2 + 0x60) +
                                0x8000) >> 0x10);
    }
    param_3 = param_3 + 1;
  }
  if (uVar1 < 0x1000) goto LAB_00411210;
  bVar17 = true;
  bVar16 = true;
  if (*(int *)(lVar2 + 0x68) == 0) {
    bVar16 = *(int *)(lVar2 + 0x78) != 0;
    iVar8 = *(int *)(lVar2 + 0x6c);
  }
  else {
    iVar8 = *(int *)(lVar2 + 0x6c);
  }
  if ((iVar8 == 0) && (bVar17 = *(int *)(lVar2 + 0x78) != 0, !(bool)(bVar16 | bVar17)))
  goto LAB_00411210;
  lVar3 = *(long *)(param_1 + 0x100);
  lVar4 = *(long *)(param_1 + 0x108);
  if ((uVar5 & 0x10) != 0) {
    if (bVar16) {
      uVar1 = *param_3;
      pDVar11 = (Device *)&_hb_NullPool;
      if ((ulong)((long)param_3 + (2 - *(long *)(param_1 + 0xb0))) <=
          (ulong)*(uint *)(param_1 + 0xc0)) {
        uVar7 = *param_3;
        if (uVar7 != 0) {
          puVar10 = (ushort *)((ulong)(ushort)(uVar7 << 8 | uVar7 >> 8) + param_2);
          uVar15 = (long)puVar10 - *(long *)(param_1 + 0xb0);
          if ((ulong)*(uint *)(param_1 + 0xc0) < uVar15 + 6) {
LAB_00410d62:
            if ((0x1f < *(uint *)(param_1 + 0xd4)) ||
               (*(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) + 1,
               *(char *)(param_1 + 0xd0) == '\0')) goto LAB_00410d9c;
            *param_3 = 0;
          }
          else {
            uVar7 = puVar10[2];
            if ((ushort)((uVar7 << 8 | uVar7 >> 8) - 1) < 3) {
              uVar12 = *puVar10 << 8 | *puVar10 >> 8;
              uVar13 = puVar10[1] << 8 | puVar10[1] >> 8;
              if (uVar13 < uVar12) {
                uVar6 = 6;
              }
              else {
                uVar6 = ((uint)uVar13 - (uint)uVar12 >> (4U - (char)(uVar7 >> 8) & 0x1f)) * 2 + 8;
              }
              if (((*(uint *)(param_1 + 0xc0) < uVar15) ||
                  ((uint)(*(int *)(param_1 + 0xb8) - (int)puVar10) < uVar6)) ||
                 (iVar8 = *(int *)(param_1 + 0xc4) - uVar6, *(int *)(param_1 + 0xc4) = iVar8,
                 iVar8 < 1)) goto LAB_00410d62;
            }
          }
        }
        uVar7 = *param_3;
        if (uVar7 == 0) {
          pDVar11 = (Device *)&_hb_NullPool;
        }
        else {
          pDVar11 = (Device *)((ulong)(ushort)(uVar7 << 8 | uVar7 >> 8) + param_2);
        }
      }
LAB_00410d9c:
      uVar15 = Device::get_x_delta(pDVar11,lVar2,lVar3,lVar4);
      uVar14 = CONCAT71((int7)(uVar14 >> 8),(byte)uVar14 | uVar1 != 0) & 0xffffffff;
      param_4[2] = param_4[2] + (int)uVar15;
    }
    param_3 = param_3 + 1;
  }
  if ((uVar5 & 0x20) != 0) {
    if (bVar17) {
      uVar1 = *param_3;
      pDVar11 = (Device *)&_hb_NullPool;
      if ((ulong)((long)param_3 + (2 - *(long *)(param_1 + 0xb0))) <=
          (ulong)*(uint *)(param_1 + 0xc0)) {
        uVar7 = *param_3;
        if (uVar7 != 0) {
          puVar10 = (ushort *)((ulong)(ushort)(uVar7 << 8 | uVar7 >> 8) + param_2);
          uVar15 = (long)puVar10 - *(long *)(param_1 + 0xb0);
          if ((ulong)*(uint *)(param_1 + 0xc0) < uVar15 + 6) {
LAB_00410eda:
            if ((0x1f < *(uint *)(param_1 + 0xd4)) ||
               (*(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) + 1,
               *(char *)(param_1 + 0xd0) == '\0')) goto LAB_00410f14;
            *param_3 = 0;
          }
          else {
            uVar7 = puVar10[2];
            if ((ushort)((uVar7 << 8 | uVar7 >> 8) - 1) < 3) {
              uVar12 = *puVar10 << 8 | *puVar10 >> 8;
              uVar13 = puVar10[1] << 8 | puVar10[1] >> 8;
              if (uVar13 < uVar12) {
                uVar6 = 6;
              }
              else {
                uVar6 = ((uint)uVar13 - (uint)uVar12 >> (4U - (char)(uVar7 >> 8) & 0x1f)) * 2 + 8;
              }
              if (((*(uint *)(param_1 + 0xc0) < uVar15) ||
                  ((uint)(*(int *)(param_1 + 0xb8) - (int)puVar10) < uVar6)) ||
                 (iVar8 = *(int *)(param_1 + 0xc4) - uVar6, *(int *)(param_1 + 0xc4) = iVar8,
                 iVar8 < 1)) goto LAB_00410eda;
            }
          }
        }
        uVar7 = *param_3;
        if (uVar7 == 0) {
          pDVar11 = (Device *)&_hb_NullPool;
        }
        else {
          pDVar11 = (Device *)((ulong)(ushort)(uVar7 << 8 | uVar7 >> 8) + param_2);
        }
      }
LAB_00410f14:
      uVar14 = CONCAT71((int7)(uVar14 >> 8),(byte)uVar14 | uVar1 != 0);
      uVar15 = Device::get_y_delta(pDVar11,lVar2,lVar3,lVar4);
      param_4[3] = param_4[3] + (int)uVar15;
    }
    param_3 = param_3 + 1;
  }
  if ((uVar5 & 0x40) != 0) {
    if ((bool)(uVar9 == 4 & bVar16)) {
      uVar1 = *param_3;
      pDVar11 = (Device *)&_hb_NullPool;
      if ((ulong)((long)param_3 + (2 - *(long *)(param_1 + 0xb0))) <=
          (ulong)*(uint *)(param_1 + 0xc0)) {
        uVar7 = *param_3;
        if (uVar7 != 0) {
          puVar10 = (ushort *)((ulong)(ushort)(uVar7 << 8 | uVar7 >> 8) + param_2);
          uVar15 = (long)puVar10 - *(long *)(param_1 + 0xb0);
          if ((ulong)*(uint *)(param_1 + 0xc0) < uVar15 + 6) {
LAB_00411050:
            if ((0x1f < *(uint *)(param_1 + 0xd4)) ||
               (*(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) + 1,
               *(char *)(param_1 + 0xd0) == '\0')) goto LAB_0041108a;
            *param_3 = 0;
          }
          else {
            uVar7 = puVar10[2];
            if ((ushort)((uVar7 << 8 | uVar7 >> 8) - 1) < 3) {
              uVar12 = *puVar10 << 8 | *puVar10 >> 8;
              uVar13 = puVar10[1] << 8 | puVar10[1] >> 8;
              if (uVar13 < uVar12) {
                uVar6 = 6;
              }
              else {
                uVar6 = ((uint)uVar13 - (uint)uVar12 >> (4U - (char)(uVar7 >> 8) & 0x1f)) * 2 + 8;
              }
              if (((*(uint *)(param_1 + 0xc0) < uVar15) ||
                  ((uint)(*(int *)(param_1 + 0xb8) - (int)puVar10) < uVar6)) ||
                 (iVar8 = *(int *)(param_1 + 0xc4) - uVar6, *(int *)(param_1 + 0xc4) = iVar8,
                 iVar8 < 1)) goto LAB_00411050;
            }
          }
        }
        uVar7 = *param_3;
        if (uVar7 == 0) {
          pDVar11 = (Device *)&_hb_NullPool;
        }
        else {
          pDVar11 = (Device *)((ulong)(ushort)(uVar7 << 8 | uVar7 >> 8) + param_2);
        }
      }
LAB_0041108a:
      uVar14 = CONCAT71((int7)(uVar14 >> 8),(byte)uVar14 | uVar1 != 0);
      uVar15 = Device::get_x_delta(pDVar11,lVar2,lVar3,lVar4);
      *param_4 = *param_4 + (int)uVar15;
    }
    param_3 = param_3 + 1;
  }
  if ((((uVar5 & 0x80) == 0) || (uVar9 == 4)) || (!bVar17)) goto LAB_00411210;
  uVar1 = *param_3;
  pDVar11 = (Device *)&_hb_NullPool;
  if ((ulong)((long)param_3 + (2 - *(long *)(param_1 + 0xb0))) <= (ulong)*(uint *)(param_1 + 0xc0))
  {
    uVar5 = *param_3;
    if (uVar5 != 0) {
      puVar10 = (ushort *)((ulong)(ushort)(uVar5 << 8 | uVar5 >> 8) + param_2);
      uVar15 = (long)puVar10 - *(long *)(param_1 + 0xb0);
      if ((ulong)*(uint *)(param_1 + 0xc0) < uVar15 + 6) {
LAB_004111bf:
        if ((0x1f < *(uint *)(param_1 + 0xd4)) ||
           (*(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) + 1,
           *(char *)(param_1 + 0xd0) == '\0')) goto LAB_004111fc;
        *param_3 = 0;
      }
      else {
        uVar5 = puVar10[2];
        if ((ushort)((uVar5 << 8 | uVar5 >> 8) - 1) < 3) {
          uVar13 = *puVar10 << 8 | *puVar10 >> 8;
          uVar7 = puVar10[1] << 8 | puVar10[1] >> 8;
          if (uVar7 < uVar13) {
            uVar9 = 6;
          }
          else {
            uVar9 = ((uint)uVar7 - (uint)uVar13 >> (4U - (char)(uVar5 >> 8) & 0x1f)) * 2 + 8;
          }
          if (((*(uint *)(param_1 + 0xc0) < uVar15) ||
              ((uint)(*(int *)(param_1 + 0xb8) - (int)puVar10) < uVar9)) ||
             (iVar8 = *(int *)(param_1 + 0xc4) - uVar9, *(int *)(param_1 + 0xc4) = iVar8, iVar8 < 1)
             ) goto LAB_004111bf;
        }
      }
    }
    uVar5 = *param_3;
    if (uVar5 == 0) {
      pDVar11 = (Device *)&_hb_NullPool;
    }
    else {
      pDVar11 = (Device *)(param_2 + (ulong)(ushort)(uVar5 << 8 | uVar5 >> 8));
    }
  }
LAB_004111fc:
  uVar14 = CONCAT71((int7)(uVar14 >> 8),(byte)uVar14 | uVar1 != 0);
  uVar15 = Device::get_y_delta(pDVar11,lVar2,lVar3,lVar4);
  param_4[1] = param_4[1] - (int)uVar15;
LAB_00411210:
  return uVar14 & 0xffffffff;
}


