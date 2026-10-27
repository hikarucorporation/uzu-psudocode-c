// Function : caf_readheader
// Namespace: 
// Entry    : 005a0880
// Prototype: undefined8 caf_readheader(int * param_1)
// Body     : 005a0880 - 005a0b08


undefined8 caf_readheader(int *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ssize_t sVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  __off_t _Var11;
  uint uVar12;
  long lVar13;
  bool bVar14;
  double local_c8;
  ulong local_c0;
  int local_b8;
  ushort uStack_b4;
  ushort uStack_b2;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  int iStack_a4;
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
  
  uVar6 = sys_isbigendian();
  bVar14 = (int)uVar6 == 0;
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
  uStack_a8 = 0;
  iStack_a4 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b4 = 0;
  uStack_b2 = 0;
  iStack_b0 = 0;
  uStack_ac = 0;
  sVar7 = fd_read(*param_1,0,&local_b8,0x34);
  if (sVar7 < 0x34) {
    return 0;
  }
  if (local_b8 != 0x66666163) {
    return 0;
  }
  uVar1 = swap2(uStack_b4,(uint)bVar14);
  if ((uVar1 != 1) || (uVar1 = swap2(uStack_b2,(uint)bVar14), iVar5 = iStack_b0, uVar1 != 0)) {
    piVar8 = __errno_location();
    *piVar8 = -0x3ea;
    return 0;
  }
  local_b8 = iStack_b0;
  uStack_b4 = (ushort)uStack_ac;
  uStack_b2 = (ushort)((uint)uStack_ac >> 0x10);
  iStack_b0 = uStack_a8;
  uStack_ac = iStack_a4;
  uStack_a8 = (undefined4)uStack_a0;
  iStack_a4 = (int)((ulong)uStack_a0 >> 0x20);
  uStack_a0 = local_98;
  local_98 = uStack_90;
  uStack_90 = CONCAT44(uStack_90._4_4_,(undefined4)local_88);
  if (iVar5 != 0x63736564) {
    return 0;
  }
  if (iStack_a4 == 0x6d63706c) {
    uVar12 = (uint)bVar14;
    uVar2 = swap4(uStack_90._4_4_,uVar12);
    uVar3 = swap4((uint)uStack_a0,uVar12);
    uVar4 = swap4((uint)uStack_90,uVar12);
    uVar4 = uVar4 >> 3;
    local_c0 = (ulong)uVar4;
    if ((uVar4 - 2 < 2) || (((uVar4 == 4 || (uVar4 == 8)) && ((uVar3 & 1) != 0)))) {
      local_c8 = (double)CONCAT44(uStack_a8,uStack_ac);
      swapstring8((undefined1 *)&local_c8,uVar12);
      iVar5 = (int)local_c8;
      lVar9 = caf_nextchunk(param_1,8,&local_b8);
      if (lVar9 == -1) {
        return 0;
      }
      do {
        uVar10 = swap8s(CONCAT44(iStack_b0,CONCAT22(uStack_b2,uStack_b4)),(uint)bVar14);
        if (local_b8 == 0x61746164) {
          if (uVar10 == 0xffffffffffffffff) {
            _Var11 = lseek(*param_1,0,2);
            uVar10 = _Var11 - (lVar9 + 0x10);
            if (0x7ffffffffffffffe < uVar10) {
              uVar10 = 0x7fffffffffffffff;
            }
          }
          else {
            uVar10 = uVar10 - 4;
          }
          param_1[4] = iVar5;
          param_1[5] = uVar2;
          param_1[6] = (int)local_c0;
          *(long *)(param_1 + 8) = lVar9 + 0x10;
          *(ulong *)(param_1 + 0xc) = uVar10;
          param_1[10] = (uint)((uVar3 & 2) == 0);
          param_1[0xb] = uVar2 * (int)local_c0;
          return 1;
        }
        uVar6 = sys_isbigendian();
        uVar10 = swap8s(CONCAT44(iStack_b0,CONCAT22(uStack_b2,uStack_b4)),(uint)((int)uVar6 == 0));
        lVar13 = (ulong)((int)uVar10 + (int)lVar9 + 0xcU & 1) + lVar9 + uVar10 + 0xc;
        sVar7 = fd_read(*param_1,lVar13,&local_b8,0xc);
        lVar9 = -1;
        if (0xb < sVar7) {
          lVar9 = lVar13;
        }
      } while (lVar9 != -1);
      return 0;
    }
  }
  piVar8 = __errno_location();
  *piVar8 = -0x3eb;
  return 0;
}


