// Function : aiff_writeheader
// Namespace: 
// Entry    : 005a0250
// Prototype: ulong aiff_writeheader(int * param_1, uint param_2)
// Body     : 005a0250 - 005a05c6


ulong aiff_writeheader(int *param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  size_t sVar10;
  uint uVar11;
  long lVar12;
  bool bVar13;
  bool bVar14;
  int local_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_150;
  uint local_14c;
  ushort local_148;
  uint local_146;
  ushort local_142;
  undefined1 local_140;
  char local_13f;
  undefined1 local_13e;
  undefined1 local_13d;
  undefined1 local_13c;
  undefined1 local_13b;
  undefined4 local_13a;
  undefined4 local_136;
  undefined1 local_132;
  undefined6 local_131;
  undefined2 uStack_12b;
  undefined5 uStack_129;
  undefined1 uStack_124;
  undefined1 uStack_123;
  undefined1 uStack_122;
  undefined5 uStack_121;
  
  if (param_1[10] == 0) {
    bVar13 = false;
  }
  else {
    bVar13 = (param_1[6] - 4U & 0xfffffffb) != 0;
  }
  uVar7 = sys_isbigendian();
  bVar14 = (int)uVar7 == 0;
  iVar2 = param_1[0xb];
  local_168 = 0;
  uStack_160 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  memset(&local_148,0,0x118);
  local_150 = 0x4d4d4f43;
  uVar11 = (uint)bVar14;
  local_14c = swap4s(0x12,uVar11);
  swap2(*(ushort *)(param_1 + 5),(uint)bVar14);
  uVar6 = param_1[6];
  uVar4 = uVar6 + 7;
  if (-1 < (int)uVar6) {
    uVar4 = uVar6;
  }
  uVar6 = (uint)bVar14;
  swap2((ushort)(uVar4 >> 3),(uint)bVar14);
  swap4s(8,uVar6);
  local_1d8 = 0x4d524f46;
  if (bVar13) {
    uStack_1d0 = CONCAT44(uStack_1d0._4_4_,0x46464941);
    lVar12 = 0xc;
  }
  else {
    uStack_1d0 = CONCAT44(uStack_1d0._4_4_,0x43464941);
    uVar4 = swap4s(4,uVar6);
    uVar5 = swap4(0xa2805140,uVar6);
    uStack_1d0 = CONCAT44(0x52455646,(undefined4)uStack_1d0);
    local_1c8 = CONCAT44(uVar5,uVar4);
    lVar12 = 0x18;
  }
  local_148 = swap2(*(ushort *)(param_1 + 5),uVar6);
  local_146 = swap4(param_2,uVar6);
  local_142 = swap2((ushort)(param_1[6] << 3),uVar6);
  dVar3 = frexp((double)param_1[4],&local_1dc);
  dVar3 = ldexp(dVar3,0x20);
  uVar8 = (long)(dVar3 - DAT_005db328) & (long)dVar3 >> 0x3f | (long)dVar3;
  local_140 = (undefined1)((uint)(local_1dc + 0x3ffe) >> 8);
  local_13f = (char)local_1dc + -2;
  local_13e = (undefined1)(uVar8 >> 0x18);
  local_13d = (undefined1)(uVar8 >> 0x10);
  local_13c = (undefined1)(uVar8 >> 8);
  local_13b = (undefined1)uVar8;
  local_13a = 0;
  sVar10 = 0x1a;
  if (!bVar13) {
    if (param_1[6] == 8) {
      local_136 = 0x34366c66;
      local_132 = 0x15;
      local_131 = s_64_bit_floating_point_0065e467._0_6_;
      uStack_12b = s_64_bit_floating_point_0065e467._6_2_;
      uStack_129 = s_64_bit_floating_point_0065e467._8_5_;
      uStack_124 = 0x6e;
      uStack_123 = 0x67;
      uStack_122 = 0x20;
      uStack_121 = 0x746e696f70;
      sVar10 = 0x34;
    }
    else {
      sVar10 = 0x2e;
      if (param_1[6] == 4) {
        uStack_122 = 0x20;
        uStack_121 = 0x746e696f70;
        sVar10 = 0x48;
      }
      local_136 = 0x454e4f4e;
      if (param_1[10] == 0) {
        local_136 = 0x74776f73;
      }
      local_132 = 0xe;
      local_131 = 0x6f6320746f6e;
      uStack_12b = 0x706d;
      uStack_129 = 0x6573736572;
      uStack_124 = 100;
      uStack_123 = 0;
    }
  }
  local_14c = swap4((int)sVar10 - 8,uVar6);
  memcpy((void *)((long)&local_1d8 + lVar12),&local_150,sVar10);
  lVar1 = sVar10 + lVar12;
  uVar6 = swap4(iVar2 * param_2 + 8,uVar11);
  *(undefined4 *)((long)&local_1d8 + lVar1) = 0x444e5353;
  *(uint *)((long)&local_1d8 + lVar1 + 4) = uVar6;
  *(undefined8 *)((long)&uStack_1d0 + lVar1) = 0;
  sVar10 = sVar10 + lVar12 + 0x10;
  uVar6 = swap4s(((int)sVar10 + iVar2 * param_2) - 8,uVar11);
  local_1d8 = CONCAT44(uVar6,(undefined4)local_1d8);
  uVar8 = fd_write(*param_1,0,&local_1d8,sVar10);
  uVar9 = uVar8 & 0xffffffff;
  if ((long)uVar8 < (long)sVar10) {
    uVar9 = 0xffffffff;
  }
  return uVar9;
}


