// Function : map_coords
// Namespace: OT:avar
// Entry    : 004410a0
// Prototype: undefined map_coords(avar * this, long param_1, uint param_2)
// Body     : 004410a0 - 00441782


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::avar::map_coords(int*, unsigned int) const */

void __thiscall OT::avar::map_coords(avar *this,long param_1,uint param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  int iVar6;
  undefined4 uVar7;
  avar *paVar8;
  void *__ptr;
  void *pvVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ushort uVar14;
  int iVar15;
  uint uVar16;
  avar *paVar17;
  uint uVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  avar *paVar23;
  ulong uVar24;
  avar *this_00;
  float fVar25;
  void *local_60;
  ulong local_50;
  
  uVar11 = (uint)(ushort)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8);
  if (param_2 <= uVar11) {
    uVar11 = param_2;
  }
  paVar17 = this + 8;
  if (uVar11 != 0) {
    uVar24 = 0;
    do {
      iVar6 = *(int *)(param_1 + uVar24 * 4);
      uVar5 = *(ushort *)paVar17;
      uVar14 = uVar5 << 8 | uVar5 >> 8;
      if (uVar14 < 2) {
        if (uVar5 != 0) {
          iVar6 = (iVar6 - (short)(*(ushort *)(paVar17 + 2) << 8 | *(ushort *)(paVar17 + 2) >> 8)) +
                  (int)(short)(*(ushort *)(paVar17 + 4) << 8 | *(ushort *)(paVar17 + 4) >> 8);
        }
      }
      else {
        iVar15 = (int)(short)(*(ushort *)(paVar17 + 2) << 8 | *(ushort *)(paVar17 + 2) >> 8);
        iVar10 = iVar6 - iVar15;
        if (iVar10 == 0 || iVar6 < iVar15) {
          iVar6 = iVar10 + (short)(*(ushort *)(paVar17 + 4) << 8 | *(ushort *)(paVar17 + 4) >> 8);
        }
        else {
          uVar16 = uVar14 - 1;
          uVar12 = 1;
          if (1 < uVar16) {
            uVar12 = 1;
            do {
              if (iVar6 <= (short)(*(ushort *)(paVar17 + uVar12 * 4 + 2) << 8 |
                                  *(ushort *)(paVar17 + uVar12 * 4 + 2) >> 8)) goto LAB_0044119b;
              uVar12 = uVar12 + 1;
            } while (uVar16 != uVar12);
            uVar12 = (ulong)uVar16;
          }
LAB_0044119b:
          uVar13 = uVar12 & 0xffffffff;
          uVar5 = *(ushort *)(paVar17 + uVar13 * 4 + 2);
          iVar10 = (int)(short)(uVar5 << 8 | uVar5 >> 8);
          if (iVar6 < iVar10) {
            uVar12 = (ulong)((int)uVar12 - 1);
            uVar2 = *(ushort *)(paVar17 + uVar12 * 4 + 2);
            if (uVar2 == uVar5) {
              iVar6 = (int)(short)(*(ushort *)(paVar17 + uVar12 * 4 + 4) << 8 |
                                  *(ushort *)(paVar17 + uVar12 * 4 + 4) >> 8);
            }
            else {
              iVar15 = (int)(short)(uVar2 << 8 | uVar2 >> 8);
              iVar19 = (int)(short)(*(ushort *)(paVar17 + uVar12 * 4 + 4) << 8 |
                                   *(ushort *)(paVar17 + uVar12 * 4 + 4) >> 8);
              fVar25 = floorf(((float)(iVar6 - iVar15) *
                              (float)((short)(*(ushort *)(paVar17 + uVar13 * 4 + 4) << 8 |
                                             *(ushort *)(paVar17 + uVar13 * 4 + 4) >> 8) - iVar19))
                              / (float)(iVar10 - iVar15) + (float)iVar19 + DAT_005d9044);
              iVar6 = (int)fVar25;
            }
          }
          else {
            iVar6 = (iVar6 - iVar10) +
                    (int)(short)(*(ushort *)(paVar17 + uVar13 * 4 + 4) << 8 |
                                *(ushort *)(paVar17 + uVar13 * 4 + 4) >> 8);
          }
        }
      }
      *(int *)(param_1 + uVar24 * 4) = iVar6;
      paVar17 = paVar17 + (ulong)(uint)uVar14 * 4 + 2;
      uVar24 = uVar24 + 1;
    } while (uVar24 != uVar11);
  }
  if ((ushort)(*(ushort *)this << 8 | *(ushort *)this >> 8) < 2) {
    return;
  }
  uVar5 = *(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8;
  if (uVar11 < uVar5) {
    uVar22 = ~uVar11;
    uVar16 = uVar5 - uVar11 & 3;
    if (uVar16 != 0) {
      uVar18 = uVar16;
      do {
        paVar17 = paVar17 + (ulong)(ushort)(*(ushort *)paVar17 << 8 | *(ushort *)paVar17 >> 8) * 4 +
                            2;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
      uVar11 = uVar11 + uVar16;
    }
    if (2 < uVar22 + uVar5) {
      iVar6 = uVar5 - uVar11;
      do {
        uVar24 = (ulong)(ushort)(*(ushort *)paVar17 << 8 | *(ushort *)paVar17 >> 8);
        uVar12 = (ulong)(ushort)(*(ushort *)(paVar17 + uVar24 * 4 + 2) << 8 |
                                *(ushort *)(paVar17 + uVar24 * 4 + 2) >> 8);
        lVar20 = uVar12 * 4 + uVar24 * 4;
        uVar24 = (ulong)(ushort)(*(ushort *)(paVar17 + uVar12 * 4 + uVar24 * 4 + 4) << 8 |
                                *(ushort *)(paVar17 + uVar12 * 4 + uVar24 * 4 + 4) >> 8);
        paVar17 = paVar17 + (ulong)(ushort)(*(ushort *)(paVar17 + uVar24 * 4 + lVar20 + 6) << 8 |
                                           *(ushort *)(paVar17 + uVar24 * 4 + lVar20 + 6) >> 8) * 4
                            + uVar24 * 4 + lVar20 + 8;
        iVar6 = iVar6 + -4;
      } while (iVar6 != 0);
    }
  }
  uVar11 = *(uint *)paVar17;
  paVar8 = (avar *)&_hb_NullPool;
  this_00 = (avar *)&_hb_NullPool;
  if (uVar11 != 0) {
    this_00 = this + (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                     uVar11 << 0x18);
  }
  uVar11 = *(uint *)(paVar17 + 4);
  paVar17 = (avar *)&_hb_NullPool;
  if (uVar11 != 0) {
    paVar17 = this + (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                     uVar11 << 0x18);
  }
  uVar11 = *(uint *)(paVar17 + 2);
  if (uVar11 != 0) {
    paVar8 = paVar17 + (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                       uVar11 << 0x18);
  }
  uVar5 = *(ushort *)(paVar8 + 2);
  uVar14 = uVar5 << 8 | uVar5 >> 8;
  __ptr = malloc((ulong)uVar14 << 2);
  uVar4 = _UNK_005de068;
  uVar3 = _DAT_005de060;
  if (__ptr == (void *)0x0) {
    __ptr = (void *)0x0;
  }
  else if (uVar5 != 0) {
    uVar11 = 1;
    if (1 < uVar14) {
      uVar11 = (uint)uVar14;
    }
    if ((ushort)uVar11 < 8) {
      uVar24 = 0;
    }
    else {
      uVar24 = (ulong)(uVar11 & 0xfff8);
      uVar13 = (uVar24 - 8 >> 3) + 1;
      uVar12 = (ulong)((uint)uVar13 & 7);
      if (uVar24 - 8 < 0x38) {
        lVar20 = 0;
      }
      else {
        uVar13 = uVar13 & 0xfffffffffffffff8;
        lVar20 = 0;
        do {
          puVar1 = (undefined8 *)((long)__ptr + lVar20 * 4);
          *puVar1 = uVar3;
          puVar1[1] = uVar4;
          puVar1 = (undefined8 *)((long)__ptr + lVar20 * 4 + 0x10);
          *puVar1 = uVar3;
          puVar1[1] = uVar4;
          puVar1 = (undefined8 *)((long)__ptr + lVar20 * 4 + 0x20);
          *puVar1 = uVar3;
          puVar1[1] = uVar4;
          puVar1 = (undefined8 *)((long)__ptr + lVar20 * 4 + 0x30);
          *puVar1 = uVar3;
          puVar1[1] = uVar4;
          puVar1 = (undefined8 *)((long)__ptr + lVar20 * 4 + 0x40);
          *puVar1 = uVar3;
          puVar1[1] = uVar4;
          puVar1 = (undefined8 *)((long)__ptr + lVar20 * 4 + 0x50);
          *puVar1 = uVar3;
          puVar1[1] = uVar4;
          puVar1 = (undefined8 *)((long)__ptr + lVar20 * 4 + 0x60);
          *puVar1 = uVar3;
          puVar1[1] = uVar4;
          puVar1 = (undefined8 *)((long)__ptr + lVar20 * 4 + 0x70);
          *puVar1 = uVar3;
          puVar1[1] = uVar4;
          puVar1 = (undefined8 *)((long)__ptr + lVar20 * 4 + 0x80);
          *puVar1 = uVar3;
          puVar1[1] = uVar4;
          puVar1 = (undefined8 *)((long)__ptr + lVar20 * 4 + 0x90);
          *puVar1 = uVar3;
          puVar1[1] = uVar4;
          puVar1 = (undefined8 *)((long)__ptr + lVar20 * 4 + 0xa0);
          *puVar1 = uVar3;
          puVar1[1] = uVar4;
          puVar1 = (undefined8 *)((long)__ptr + lVar20 * 4 + 0xb0);
          *puVar1 = uVar3;
          puVar1[1] = uVar4;
          puVar1 = (undefined8 *)((long)__ptr + lVar20 * 4 + 0xc0);
          *puVar1 = uVar3;
          puVar1[1] = uVar4;
          puVar1 = (undefined8 *)((long)__ptr + lVar20 * 4 + 0xd0);
          *puVar1 = uVar3;
          puVar1[1] = uVar4;
          puVar1 = (undefined8 *)((long)__ptr + lVar20 * 4 + 0xe0);
          *puVar1 = uVar3;
          puVar1[1] = uVar4;
          puVar1 = (undefined8 *)((long)__ptr + lVar20 * 4 + 0xf0);
          *puVar1 = uVar3;
          puVar1[1] = uVar4;
          lVar20 = lVar20 + 0x40;
          uVar13 = uVar13 - 8;
        } while (uVar13 != 0);
      }
      uVar4 = _UNK_005de068;
      uVar3 = _DAT_005de060;
      if (uVar12 != 0) {
        lVar21 = 0;
        do {
          puVar1 = (undefined8 *)((long)__ptr + lVar21 + lVar20 * 4);
          *puVar1 = uVar3;
          puVar1[1] = uVar4;
          puVar1 = (undefined8 *)((long)__ptr + lVar21 + lVar20 * 4 + 0x10);
          *puVar1 = uVar3;
          puVar1[1] = uVar4;
          lVar21 = lVar21 + 0x20;
        } while (uVar12 * 0x20 != lVar21);
      }
      if (uVar24 == uVar11) goto joined_r0x004414b3;
    }
    do {
      *(undefined4 *)((long)__ptr + uVar24 * 4) = 0x40000000;
      uVar24 = uVar24 + 1;
    } while (uVar11 != uVar24);
  }
joined_r0x004414b3:
  local_60 = __ptr;
  if (param_2 == 0) goto LAB_00441495;
  local_50 = 0;
  do {
    uVar11 = (uint)local_50 + ((uint)local_50 >> 1) + 8;
    local_50 = (ulong)uVar11;
  } while (uVar11 < param_2);
  if (uVar11 < 0x40000000) {
    if (uVar11 == 0) {
      local_60 = (void *)0x0;
    }
    else {
      local_60 = malloc((ulong)uVar11 << 2);
      if (local_60 == (void *)0x0) goto LAB_00441768;
    }
  }
  else {
LAB_00441768:
    local_60 = (void *)0x0;
    local_50 = 0xffffffff;
  }
  uVar24 = 0;
  uVar11 = 0;
  do {
    while( true ) {
      iVar6 = *(int *)(param_1 + uVar24 * 4);
                    /* try { // try from 00441513 to 0044151c has its CatchHandler @ 00441783 */
      uVar16 = DeltaSetIndexMap::map((DeltaSetIndexMap *)this_00,(uint)uVar24);
      if (uVar16 >> 0x10 <
          (uint)(ushort)(*(ushort *)(paVar17 + 6) << 8 | *(ushort *)(paVar17 + 6) >> 8)) {
        uVar22 = *(uint *)(paVar17 + (ulong)(uVar16 >> 0x10) * 4 + 8);
        paVar8 = (avar *)&_hb_NullPool;
        if (uVar22 != 0) {
          paVar8 = paVar17 + (uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                             uVar22 << 0x18);
        }
        uVar22 = *(uint *)(paVar17 + 2);
        paVar23 = (avar *)&_hb_NullPool;
        if (uVar22 != 0) {
          paVar23 = paVar17 + (uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                              uVar22 << 0x18);
        }
        fVar25 = VarData::get_delta((VarData *)paVar8,uVar16 & 0xffff,param_1,param_2,
                                    (VarRegionList *)paVar23,(long)__ptr);
      }
      else {
        fVar25 = 0.0;
      }
      fVar25 = floorf(fVar25 + DAT_005d9044);
      iVar6 = (int)((float)iVar6 + fVar25);
      if (iVar6 < -0x3fff) {
        iVar6 = -0x4000;
      }
      if (0x3fff < iVar6) {
        iVar6 = 0x4000;
      }
      uVar16 = uVar11 + 1;
      uVar22 = (uint)local_50;
      if ((int)uVar22 <= (int)uVar11) break;
LAB_004415d4:
      *(int *)((long)local_60 + (ulong)uVar11 * 4) = iVar6;
      uVar24 = uVar24 + 1;
      uVar11 = uVar16;
      if (uVar24 == param_2) goto LAB_004416b8;
    }
    if (-1 < (int)uVar22) {
      uVar12 = local_50;
      if (uVar22 < uVar16) {
        do {
          uVar18 = (int)uVar12 + (int)(uVar12 >> 1) + 8;
          uVar12 = (ulong)uVar18;
        } while (uVar18 < uVar16);
        if (0x3fffffff < uVar18) {
LAB_00441679:
          local_50 = (ulong)~uVar22;
          goto LAB_00441685;
        }
        if (uVar18 == 0) {
          free(local_60);
          local_60 = (void *)0x0;
          local_50 = 0;
        }
        else {
          pvVar9 = realloc(local_60,(ulong)uVar18 << 2);
          if (pvVar9 == (void *)0x0) {
            if (uVar22 < uVar18) goto LAB_00441679;
          }
          else {
            local_50 = uVar12;
            local_60 = pvVar9;
          }
        }
      }
      goto LAB_004415d4;
    }
LAB_00441685:
    _hb_CrapPool._0_4_ = 0;
    uVar24 = uVar24 + 1;
    uVar16 = uVar11;
  } while (uVar24 != param_2);
LAB_004416b8:
  uVar24 = (ulong)uVar16;
  if (param_2 == 1) {
    uVar13 = 0;
  }
  else {
    uVar12 = 0;
    do {
      while (uVar13 = uVar12, uVar24 <= uVar13) {
        _hb_CrapPool._0_4_ = 0;
        *(undefined4 *)(param_1 + uVar13 * 4) = 0;
        if (uVar24 <= uVar13 + 1) goto LAB_00441719;
LAB_004416eb:
        *(undefined4 *)(param_1 + 4 + uVar13 * 4) = *(undefined4 *)((long)local_60 + uVar13 * 4 + 4)
        ;
        uVar12 = uVar13 + 2;
        if (uVar13 + 2 == (ulong)(param_2 & 0xfffffffe)) goto LAB_00441733;
      }
      *(undefined4 *)(param_1 + uVar13 * 4) = *(undefined4 *)((long)local_60 + uVar13 * 4);
      if (uVar13 + 1 < uVar24) goto LAB_004416eb;
LAB_00441719:
      _hb_CrapPool._0_4_ = 0;
      *(undefined4 *)(param_1 + 4 + uVar13 * 4) = 0;
      uVar12 = uVar13 + 2;
    } while (uVar13 + 2 != (ulong)(param_2 & 0xfffffffe));
LAB_00441733:
    uVar13 = uVar13 + 2;
  }
  if ((param_2 & 1) != 0) {
    if (uVar13 < uVar24) {
      uVar7 = *(undefined4 *)((long)local_60 + uVar13 * 4);
    }
    else {
      _hb_CrapPool._0_4_ = 0;
      uVar7 = 0;
    }
    *(undefined4 *)(param_1 + uVar13 * 4) = uVar7;
  }
  free(__ptr);
  if ((int)local_50 == 0) {
    return;
  }
LAB_00441495:
  free(local_60);
  return;
}


