// Function : hb_ot_layout_language_find_feature
// Namespace: 
// Entry    : 004352e0
// Prototype: undefined8 hb_ot_layout_language_find_feature(long param_1, int param_2, uint param_3, uint param_4)
// Body     : 004352e0 - 00435489


undefined8 hb_ot_layout_language_find_feature(long param_1,int param_2,uint param_3,uint param_4)

{
  short *psVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort uVar5;
  ushort uVar6;
  ushort *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  
  psVar1 = (short *)get_gsubgpos_table(param_1,param_2);
  puVar4 = (ushort *)&_hb_NullPool;
  puVar2 = (ushort *)&_hb_NullPool;
  if (*psVar1 == 0x100) {
    uVar5 = psVar1[2];
    if (uVar5 == 0) {
      puVar2 = (ushort *)&_hb_NullPool;
    }
    else {
      puVar2 = (ushort *)((ulong)(ushort)(uVar5 << 8 | uVar5 >> 8) + (long)psVar1);
    }
  }
  puVar7 = (ushort *)&_hb_NullPool;
  if (param_3 < (ushort)(*puVar2 << 8 | *puVar2 >> 8)) {
    puVar7 = puVar2 + (ulong)param_3 * 3 + 1;
  }
  uVar5 = puVar7[2];
  if (uVar5 != 0) {
    puVar4 = (ushort *)((long)puVar2 + (ulong)(ushort)(uVar5 << 8 | uVar5 >> 8));
  }
  if (param_4 == 0xffff) {
    puVar2 = puVar4;
  }
  else {
    if (param_4 < (ushort)(puVar4[1] << 8 | puVar4[1] >> 8)) {
      puVar2 = puVar4 + (ulong)param_4 * 3 + 2;
    }
    else {
      puVar2 = (ushort *)&_hb_NullPool;
    }
    puVar2 = puVar2 + 2;
  }
  uVar5 = *puVar2;
  puVar9 = &_hb_Null_OT_LangSys;
  if (uVar5 != 0) {
    puVar9 = (undefined8 *)((long)puVar4 + (ulong)(ushort)(uVar5 << 8 | uVar5 >> 8));
  }
  uVar5 = *(ushort *)((long)puVar9 + 4);
  if (uVar5 != 0) {
    uVar3 = uVar5 << 8 | uVar5 >> 8;
    uVar6 = 1;
    if (1 < uVar3) {
      uVar6 = uVar3;
    }
    puVar2 = (ushort *)((long)puVar9 + 6);
    uVar8 = 0;
    while( true ) {
      puVar4 = &_hb_Null_OT_Index;
      if (uVar8 < (ushort)(uVar5 << 8 | uVar5 >> 8)) {
        puVar4 = puVar2;
      }
      uVar5 = *puVar4;
      if (uVar5 != 0xffff) {
        uVar5 = uVar5 << 8 | uVar5 >> 8;
        puVar4 = (ushort *)&_hb_NullPool;
        if (*psVar1 == 0x100) {
          uVar3 = psVar1[3];
          puVar4 = (ushort *)&_hb_NullPool;
          if (uVar3 != 0) {
            puVar4 = (ushort *)((ulong)(ushort)(uVar3 << 8 | uVar3 >> 8) + (long)psVar1);
          }
        }
        puVar7 = (ushort *)&_hb_NullPool;
        if (uVar5 < (ushort)(*puVar4 << 8 | *puVar4 >> 8)) {
          puVar7 = puVar4 + (ulong)uVar5 * 3 + 1;
        }
        if (*(int *)puVar7 == 0x746c6372) {
          return 1;
        }
      }
      if ((ulong)uVar6 - 1 == uVar8) break;
      uVar5 = *(ushort *)((long)puVar9 + 4);
      puVar2 = puVar2 + 1;
      uVar8 = uVar8 + 1;
    }
  }
  return 0;
}


