// Function : hb_ot_layout_language_get_required_feature
// Namespace: 
// Entry    : 0041d600
// Prototype: undefined hb_ot_layout_language_get_required_feature(long param_1, int param_2, uint param_3, uint param_4, uint * param_5, uint * param_6)
// Body     : 0041d600 - 0041d76b


void hb_ot_layout_language_get_required_feature
               (long param_1,int param_2,uint param_3,uint param_4,uint *param_5,uint *param_6)

{
  ushort uVar1;
  uint uVar2;
  short *psVar3;
  ushort *puVar4;
  ushort uVar5;
  ushort *puVar6;
  undefined8 *puVar7;
  ushort *puVar8;
  uint *puVar9;
  
  psVar3 = (short *)get_gsubgpos_table(param_1,param_2);
  puVar4 = (ushort *)&_hb_NullPool;
  puVar6 = (ushort *)&_hb_NullPool;
  if (*psVar3 == 0x100) {
    uVar1 = psVar3[2];
    if (uVar1 == 0) {
      puVar6 = (ushort *)&_hb_NullPool;
    }
    else {
      puVar6 = (ushort *)((ulong)(ushort)(uVar1 << 8 | uVar1 >> 8) + (long)psVar3);
    }
  }
  puVar8 = (ushort *)&_hb_NullPool;
  if (param_3 < (ushort)(*puVar6 << 8 | *puVar6 >> 8)) {
    puVar8 = puVar6 + (ulong)param_3 * 3 + 1;
  }
  uVar1 = puVar8[2];
  if (uVar1 != 0) {
    puVar4 = (ushort *)((long)puVar6 + (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8));
  }
  if (param_4 == 0xffff) {
    puVar6 = puVar4;
  }
  else {
    if (param_4 < (ushort)(puVar4[1] << 8 | puVar4[1] >> 8)) {
      puVar6 = puVar4 + (ulong)param_4 * 3 + 2;
    }
    else {
      puVar6 = (ushort *)&_hb_NullPool;
    }
    puVar6 = puVar6 + 2;
  }
  uVar1 = *puVar6;
  puVar7 = &_hb_Null_OT_LangSys;
  if (uVar1 != 0) {
    puVar7 = (undefined8 *)((long)puVar4 + (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8));
  }
  uVar1 = *(ushort *)((long)puVar7 + 2);
  uVar5 = uVar1 << 8 | uVar1 >> 8;
  if (param_5 != (uint *)0x0) {
    *param_5 = (uint)uVar5;
  }
  if (param_6 == (uint *)0x0) {
    return;
  }
  if (uVar1 == 0xffff) {
    uVar2 = 0;
    goto LAB_0041d731;
  }
  puVar9 = &_hb_NullPool;
  puVar4 = (ushort *)&_hb_NullPool;
  if (*psVar3 == 0x100) {
    uVar1 = psVar3[3];
    if (uVar1 != 0) {
      puVar4 = (ushort *)((long)psVar3 + (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8));
      goto LAB_0041d711;
    }
    puVar4 = (ushort *)&_hb_NullPool;
    uVar1 = (ushort)_hb_NullPool << 8 | (ushort)_hb_NullPool >> 8;
  }
  else {
LAB_0041d711:
    uVar1 = *puVar4 << 8 | *puVar4 >> 8;
  }
  if (uVar5 < uVar1) {
    puVar9 = (uint *)(puVar4 + (ulong)uVar5 * 3 + 1);
  }
  uVar2 = *puVar9;
  uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
LAB_0041d731:
  *param_6 = uVar2;
  return;
}


