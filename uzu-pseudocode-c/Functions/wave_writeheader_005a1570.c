// Function : wave_writeheader
// Namespace: 
// Entry    : 005a1570
// Prototype: ulong wave_writeheader(int * param_1, long param_2)
// Body     : 005a1570 - 005a180e


ulong wave_writeheader(int *param_1,long param_2)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined7 extraout_var;
  ulong uVar9;
  ulong uVar10;
  size_t __n;
  long lVar11;
  int iVar12;
  undefined4 local_f8;
  uint local_f4;
  ushort local_f0;
  ushort local_ee;
  uint local_ec;
  uint local_e8;
  ushort local_e4;
  ushort local_e2;
  undefined8 local_e0;
  ushort uStack_d8;
  undefined6 uStack_d6;
  undefined2 uStack_d0;
  undefined6 uStack_ce;
  long local_c8;
  ulong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  iVar12 = param_1[6];
  bVar1 = soundfile_needsbyteswap((long)param_1);
  iVar5 = (int)CONCAT71(extraout_var,bVar1);
  uVar6 = param_1[0xb];
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_f8 = 0x20746d66;
  local_c8 = param_2;
  local_f4 = swap4(0x10,iVar5);
  local_f0 = 1;
  local_ee = swap2(*(ushort *)(param_1 + 5),iVar5);
  local_ec = swap4(param_1[4],iVar5);
  local_e8 = swap4(param_1[0xb] * param_1[4],iVar5);
  local_e4 = swap2(*(ushort *)(param_1 + 0xb),iVar5);
  uVar2 = swap2((ushort)(param_1[6] << 3),iVar5);
  local_e0 = 0;
  uStack_d8 = 0;
  uStack_d6 = 0;
  uStack_d0 = 0;
  uStack_ce = 0;
  local_e2 = uVar2;
  local_c0 = (ulong)uVar6 * param_2;
  uVar6 = swap4((uint)((ulong)uVar6 * param_2),iVar5);
  local_b8 = 0x46464952;
  uStack_b0 = CONCAT44(uStack_b0._4_4_,0x45564157);
  if ((param_1[6] == 8) || (uVar3 = 1, param_1[6] == 4)) {
    uVar3 = swap2(3,iVar5);
    local_f0 = uVar3;
  }
  if ((iVar12 == 8) || (__n = 0x18, iVar12 == 4)) {
    uVar4 = swap2(0x16,iVar5);
    local_e0 = (ulong)CONCAT22(uVar2,uVar4);
    uStack_d6 = 0x1000000000;
    uStack_d0 = 0x80;
    uStack_ce = 0x719b3800aa00;
    uStack_d8 = uVar3;
    local_f0 = swap2(0xfffe,iVar5);
    __n = 0x30;
  }
  local_f4 = swap4((int)__n - 8,iVar5);
  memcpy((void *)((long)&uStack_b0 + 4),&local_f8,__n);
  if ((iVar12 == 8) || (iVar12 == 4)) {
    uVar7 = swap4(4,iVar5);
    uVar8 = swap4((int)local_c8 * param_1[5],iVar5);
    *(undefined4 *)((long)&uStack_b0 + __n + 4) = 0x74636166;
    *(uint *)((long)&local_a8 + __n) = uVar7;
    *(uint *)((long)&local_a8 + __n + 4) = uVar8;
    lVar11 = __n + 0x18;
    iVar12 = (int)local_c0;
  }
  else {
    lVar11 = __n + 0xc;
    iVar12 = (int)local_c0;
  }
  if ((local_c0 & 1) != 0) {
    uVar6 = swap4(iVar12 + 1,iVar5);
  }
  *(undefined4 *)((long)&local_b8 + lVar11) = 0x61746164;
  *(uint *)((long)&local_b8 + lVar11 + 4) = uVar6;
  uVar6 = swap4s((int)lVar11 + iVar12,iVar5);
  local_b8 = CONCAT44(uVar6,(undefined4)local_b8);
  uVar9 = fd_write(*param_1,0,&local_b8,lVar11 + 8U);
  uVar10 = uVar9 & 0xffffffff;
  if ((long)uVar9 < (long)(lVar11 + 8U)) {
    uVar10 = 0xffffffff;
  }
  return uVar10;
}


