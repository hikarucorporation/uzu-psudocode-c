// Function : next_readheader
// Namespace: 
// Entry    : 005a0ea0
// Prototype: undefined8 next_readheader(int * param_1)
// Body     : 005a0ea0 - 005a1000


undefined8 next_readheader(int *param_1)

{
  uint uVar1;
  uint uVar2;
  ssize_t sVar3;
  undefined8 uVar4;
  __off_t _Var5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  bool bVar12;
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
  uVar10 = 0;
  sVar3 = fd_read(*param_1,0,&local_b8,0x1c);
  if (0x1b < sVar3) {
    if ((int)local_b8 == 0x646e732e) {
      iVar8 = 1;
    }
    else {
      if ((int)local_b8 != 0x2e736e64) {
        return 0;
      }
      iVar8 = 0;
    }
    uVar4 = sys_isbigendian();
    bVar12 = iVar8 != (int)uVar4;
    uVar2 = (uint)bVar12;
    uVar1 = swap4(local_b8._4_4_,uVar2);
    if (0x17 < uVar1) {
      uVar2 = swap4((uint)uStack_b0,uVar2);
      if (uVar2 == 0xffffffff) {
        _Var5 = lseek(*param_1,0,2);
        uVar11 = _Var5 - (ulong)uVar1;
        if (0xfffffffe < uVar11) {
          uVar11 = 0xffffffff;
        }
      }
      else {
        uVar11 = (ulong)uVar2;
      }
      uVar7 = (uint)bVar12;
      uVar2 = swap4(uStack_b0._4_4_,uVar7);
      if (uVar2 == 3) {
        iVar9 = 2;
      }
      else if (uVar2 == 6) {
        iVar9 = 4;
      }
      else {
        if (uVar2 != 4) {
          piVar6 = __errno_location();
          *piVar6 = -0x3eb;
          return 0;
        }
        iVar9 = 3;
      }
      uVar2 = swap4((uint)local_a8,uVar7);
      param_1[4] = uVar2;
      uVar2 = swap4(local_a8._4_4_,uVar7);
      param_1[5] = uVar2;
      param_1[6] = iVar9;
      *(ulong *)(param_1 + 8) = (ulong)uVar1;
      *(ulong *)(param_1 + 0xc) = uVar11;
      param_1[10] = iVar8;
      param_1[0xb] = uVar2 * iVar9;
      uVar10 = 1;
    }
  }
  return uVar10;
}


