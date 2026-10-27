// Function : caf_writeheader
// Namespace: 
// Entry    : 005a0b10
// Prototype: ulong caf_writeheader(int * param_1, long param_2)
// Body     : 005a0b10 - 005a0cb5


ulong caf_writeheader(int *param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined4 uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  undefined8 local_b4;
  undefined4 local_a8;
  ushort local_a4;
  undefined2 local_a2;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  undefined4 local_7c;
  uint local_78;
  undefined4 local_74;
  ulong local_70;
  ulong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uVar2 = sys_isbigendian();
  bVar6 = (int)uVar2 == 0;
  if (param_2 == 0) {
    uVar5 = 3;
  }
  else {
    uVar5 = param_1[0xb] * param_2 + 4;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_a4 = swap2(1,(uint)bVar6);
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  local_b4 = 0;
  local_a8 = 0x66666163;
  local_a2 = 0;
  uVar3 = swap8s(0x20,(uint)bVar6);
  uStack_d4 = (undefined4)uVar3;
  uStack_d0 = (undefined4)(uVar3 >> 0x20);
  uStack_cc = (double)param_1[4];
  uVar4 = (uint)bVar6;
  swapstring8((undefined1 *)&uStack_cc,uVar4);
  uStack_c4 = 0x6d63706c;
  bVar7 = (param_1[6] - 4U & 0xfffffffb) == 0;
  uVar1 = bVar7 + 2;
  if (param_1[10] != 0) {
    uVar1 = (uint)bVar7;
  }
  uStack_c0 = swap4(uVar1,uVar4);
  uStack_bc = swap4(param_1[0xb],uVar4);
  uStack_b8 = swap4(1,uVar4);
  uVar4 = (uint)bVar6;
  uVar1 = swap4(param_1[5],uVar4);
  local_b4 = CONCAT44(local_b4._4_4_,uVar1);
  local_78 = swap4(param_1[6] << 3,uVar4);
  local_b4 = CONCAT44(local_78,(undefined4)local_b4);
  local_a0 = CONCAT44(uStack_d4,0x63736564);
  uStack_98 = CONCAT44((undefined4)uStack_cc,uStack_d0);
  local_90 = CONCAT44(uStack_c4,uStack_cc._4_4_);
  uStack_88 = uStack_c0;
  uStack_84 = uStack_bc;
  uStack_80 = uStack_b8;
  local_7c = (undefined4)local_b4;
  local_70 = swap8s(uVar5,uVar4);
  local_74 = 0x61746164;
  local_68 = local_68 & 0xffffffff00000000;
  uVar5 = fd_write(*param_1,0,&local_a8,0x44);
  uVar3 = uVar5 & 0xffffffff;
  if ((long)uVar5 < 0x44) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


