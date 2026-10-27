// Function : hb_ot_layout_table_select_script
// Namespace: 
// Entry    : 0043b470
// Prototype: undefined8 hb_ot_layout_table_select_script(long param_1, int param_2, uint param_3, long param_4, uint * param_5, undefined4 * param_6)
// Body     : 0043b470 - 0043b768


undefined8
hb_ot_layout_table_select_script
          (long param_1,int param_2,uint param_3,long param_4,uint *param_5,undefined4 *param_6)

{
  ushort uVar1;
  uint uVar2;
  short *psVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ushort *puVar10;
  ulong uVar11;
  
  psVar3 = (short *)get_gsubgpos_table(param_1,param_2);
  if (param_3 != 0) {
    uVar11 = 0;
    do {
      uVar2 = *(uint *)(param_4 + uVar11 * 4);
      puVar10 = (ushort *)&_hb_NullPool;
      if (*psVar3 == 0x100) {
        uVar1 = psVar3[2];
        puVar10 = (ushort *)&_hb_NullPool;
        if (uVar1 != 0) {
          puVar10 = (ushort *)((ulong)(ushort)(uVar1 << 8 | uVar1 >> 8) + (long)psVar3);
        }
      }
      uVar1 = *puVar10;
      if (uVar1 != 0) {
        iVar7 = (ushort)(uVar1 << 8 | uVar1 >> 8) - 1;
        iVar9 = 0;
        do {
          while( true ) {
            uVar8 = (uint)(iVar7 + iVar9) >> 1;
            uVar5 = *(uint *)(puVar10 + (ulong)uVar8 * 3 + 1);
            uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
            if (uVar2 < uVar5) break;
            if (uVar5 == uVar2) {
              if (param_5 != (uint *)0x0) {
                *param_5 = uVar8;
              }
              if (param_6 == (undefined4 *)0x0) {
                return 1;
              }
              uVar6 = *(undefined4 *)(param_4 + (uVar11 & 0xffffffff) * 4);
              uVar4 = 1;
              goto LAB_0043b71b;
            }
            iVar9 = uVar8 + 1;
            if (iVar7 < iVar9) goto LAB_0043b51e;
          }
          iVar7 = uVar8 - 1;
        } while (iVar9 <= iVar7);
      }
LAB_0043b51e:
      if (param_5 != (uint *)0x0) {
        *param_5 = 0xffff;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != param_3);
  }
  if ((*psVar3 == 0x100) && (uVar1 = psVar3[2], uVar1 != 0)) {
    puVar10 = (ushort *)((ulong)(ushort)(uVar1 << 8 | uVar1 >> 8) + (long)psVar3);
    uVar1 = *puVar10;
  }
  else {
    puVar10 = (ushort *)&_hb_NullPool;
    uVar1 = (ushort)_hb_NullPool;
  }
  if (uVar1 != 0) {
    iVar9 = (ushort)(uVar1 << 8 | uVar1 >> 8) - 1;
    iVar7 = 0;
    do {
      while( true ) {
        uVar5 = (uint)(iVar9 + iVar7) >> 1;
        uVar2 = *(uint *)(puVar10 + (ulong)uVar5 * 3 + 1);
        if (0x44464c54 <
            (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18))
        break;
        if (uVar2 == 0x544c4644) {
          if (param_5 != (uint *)0x0) {
            *param_5 = uVar5;
          }
          uVar6 = 0x44464c54;
          goto joined_r0x0043b739;
        }
        iVar7 = uVar5 + 1;
        if (iVar9 < iVar7) goto LAB_0043b5d7;
      }
      iVar9 = uVar5 - 1;
    } while (iVar7 <= iVar9);
  }
LAB_0043b5d7:
  if (param_5 != (uint *)0x0) {
    *param_5 = 0xffff;
  }
  if ((*psVar3 == 0x100) && (uVar1 = psVar3[2], uVar1 != 0)) {
    puVar10 = (ushort *)((ulong)(ushort)(uVar1 << 8 | uVar1 >> 8) + (long)psVar3);
    uVar1 = *puVar10;
  }
  else {
    puVar10 = (ushort *)&_hb_NullPool;
    uVar1 = (ushort)_hb_NullPool;
  }
  if (uVar1 != 0) {
    iVar9 = (ushort)(uVar1 << 8 | uVar1 >> 8) - 1;
    iVar7 = 0;
    do {
      while( true ) {
        uVar5 = (uint)(iVar9 + iVar7) >> 1;
        uVar2 = *(uint *)(puVar10 + (ulong)uVar5 * 3 + 1);
        if (0x64666c74 <
            (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18))
        break;
        if (uVar2 == 0x746c6664) {
          if (param_5 != (uint *)0x0) {
            *param_5 = uVar5;
          }
          uVar6 = 0x64666c74;
          goto joined_r0x0043b74f;
        }
        iVar7 = uVar5 + 1;
        if (iVar9 < iVar7) goto LAB_0043b677;
      }
      iVar9 = uVar5 - 1;
    } while (iVar7 <= iVar9);
  }
LAB_0043b677:
  if (param_5 != (uint *)0x0) {
    *param_5 = 0xffff;
  }
  if ((*psVar3 == 0x100) && (uVar1 = psVar3[2], uVar1 != 0)) {
    puVar10 = (ushort *)((long)psVar3 + (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8));
    uVar1 = *puVar10;
  }
  else {
    puVar10 = (ushort *)&_hb_NullPool;
    uVar1 = (ushort)_hb_NullPool;
  }
  if (uVar1 == 0) {
LAB_0043b703:
    if (param_5 != (uint *)0x0) {
      *param_5 = 0xffff;
    }
    uVar6 = 0;
joined_r0x0043b739:
    uVar4 = 0;
    if (param_6 != (undefined4 *)0x0) {
LAB_0043b71b:
      *param_6 = uVar6;
    }
    return uVar4;
  }
  iVar9 = (ushort)(uVar1 << 8 | uVar1 >> 8) - 1;
  iVar7 = 0;
LAB_0043b6d9:
  do {
    uVar5 = (uint)(iVar9 + iVar7) >> 1;
    uVar2 = *(uint *)(puVar10 + (ulong)uVar5 * 3 + 1);
    if (0x6c61746e <
        (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18))
    goto LAB_0043b6d0;
    if (uVar2 == 0x6e74616c) {
      if (param_5 != (uint *)0x0) {
        *param_5 = uVar5;
      }
      uVar6 = 0x6c61746e;
joined_r0x0043b74f:
      uVar4 = 0;
      if (param_6 == (undefined4 *)0x0) {
        return 0;
      }
      goto LAB_0043b71b;
    }
    iVar7 = uVar5 + 1;
  } while (iVar7 <= iVar9);
  goto LAB_0043b703;
LAB_0043b6d0:
  iVar9 = uVar5 - 1;
  if (iVar9 < iVar7) goto LAB_0043b703;
  goto LAB_0043b6d9;
}


