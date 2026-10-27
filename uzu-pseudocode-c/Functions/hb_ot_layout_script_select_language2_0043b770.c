// Function : hb_ot_layout_script_select_language2
// Namespace: 
// Entry    : 0043b770
// Prototype: undefined hb_ot_layout_script_select_language2(long param_1, int param_2, uint param_3, uint param_4, long param_5, uint * param_6)
// Body     : 0043b770 - 0043b924


void hb_ot_layout_script_select_language2
               (long param_1,int param_2,uint param_3,uint param_4,long param_5,uint *param_6)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  short *psVar4;
  ushort *puVar5;
  undefined4 *puVar6;
  ushort *puVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  psVar4 = (short *)get_gsubgpos_table(param_1,param_2);
  puVar6 = &_hb_NullPool;
  puVar7 = (ushort *)&_hb_NullPool;
  if (*psVar4 == 0x100) {
    uVar1 = psVar4[2];
    if (uVar1 == 0) {
      puVar7 = (ushort *)&_hb_NullPool;
    }
    else {
      puVar7 = (ushort *)((long)psVar4 + (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8));
    }
  }
  puVar5 = (ushort *)&_hb_NullPool;
  if (param_3 < (ushort)(*puVar7 << 8 | *puVar7 >> 8)) {
    puVar5 = puVar7 + (ulong)param_3 * 3 + 1;
  }
  uVar1 = puVar5[2];
  if (uVar1 != 0) {
    puVar6 = (undefined4 *)((long)puVar7 + (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8));
  }
  uVar1 = *(ushort *)((long)puVar6 + 2);
  if (param_4 != 0) {
    if (uVar1 == 0) goto LAB_0043b8b3;
    iVar12 = (ushort)(uVar1 << 8 | uVar1 >> 8) - 1;
    uVar8 = 0;
    if (param_6 == (uint *)0x0) {
      do {
        uVar2 = *(uint *)(param_5 + uVar8 * 4);
        iVar10 = 0;
        iVar11 = iVar12;
        do {
          while( true ) {
            uVar9 = (uint)(iVar11 + iVar10) >> 1;
            uVar3 = *(uint *)((long)puVar6 + (ulong)uVar9 * 6 + 4);
            uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
            if (uVar2 < uVar3) break;
            if (uVar3 == uVar2) goto LAB_0043b8b8;
            iVar10 = uVar9 + 1;
            if (iVar11 < iVar10) goto LAB_0043b8d0;
          }
          iVar11 = uVar9 - 1;
        } while (iVar10 <= iVar11);
LAB_0043b8d0:
        uVar8 = uVar8 + 1;
      } while (uVar8 != param_4);
    }
    else {
      do {
        uVar2 = *(uint *)(param_5 + uVar8 * 4);
        iVar10 = 0;
        iVar11 = iVar12;
        do {
          while( true ) {
            uVar9 = (uint)(iVar11 + iVar10) >> 1;
            uVar3 = *(uint *)((long)puVar6 + (ulong)uVar9 * 6 + 4);
            uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
            if (uVar2 < uVar3) break;
            if (uVar3 == uVar2) goto LAB_0043b8b8;
            iVar10 = uVar9 + 1;
            if (iVar11 < iVar10) goto LAB_0043b857;
          }
          iVar11 = uVar9 - 1;
        } while (iVar10 <= iVar11);
LAB_0043b857:
        *param_6 = 0xffff;
        uVar8 = uVar8 + 1;
      } while (uVar8 != param_4);
    }
  }
  if (uVar1 != 0) {
    iVar12 = (ushort)(uVar1 << 8 | uVar1 >> 8) - 1;
    iVar11 = 0;
    do {
      while( true ) {
        uVar9 = (uint)(iVar12 + iVar11) >> 1;
        uVar2 = *(uint *)((long)puVar6 + (ulong)uVar9 * 6 + 4);
        if (0x64666c74 <
            (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18))
        break;
        if (uVar2 == 0x746c6664) goto LAB_0043b8b8;
        iVar11 = uVar9 + 1;
        if (iVar12 < iVar11) goto LAB_0043b8b3;
      }
      iVar12 = uVar9 - 1;
    } while (iVar11 <= iVar12);
  }
LAB_0043b8b3:
  uVar9 = 0xffff;
LAB_0043b8b8:
  if (param_6 != (uint *)0x0) {
    *param_6 = uVar9;
  }
  return;
}


