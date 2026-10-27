// Function : wave_readheader
// Namespace: 
// Entry    : 005a12a0
// Prototype: undefined8 wave_readheader(int * param_1)
// Body     : 005a12a0 - 005a156f


undefined8 wave_readheader(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 uVar4;
  ssize_t sVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  __off_t _Var9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  bool bVar13;
  uint local_d0;
  uint local_cc;
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
  
  uVar4 = sys_isbigendian();
  bVar13 = (int)uVar4 != 0;
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
  sVar5 = fd_read(*param_1,0,&local_b8,0xc);
  if ((0xb < sVar5) && ((int)uStack_b0 == 0x45564157)) {
    lVar12 = 0xc;
    sVar5 = fd_read(*param_1,0xc,&local_b8,8);
    if (7 < sVar5) {
      local_d0 = 1;
      uVar10 = 2;
      local_cc = 0xac44;
      do {
        uVar11 = (uint)bVar13;
        uVar3 = swap4(local_b8._4_4_,uVar11);
        if ((int)local_b8 == 0x20746d66) {
          sVar5 = fd_read(*param_1,lVar12 + 8,&uStack_b0,(ulong)uVar3);
          if (sVar5 < (long)(ulong)uVar3) {
            return 0;
          }
          uVar1 = swap2(uStack_b0._2_2_,(uint)bVar13);
          local_cc = swap4(uStack_b0._4_4_,uVar11);
          uVar2 = swap2((ushort)uStack_b0,uVar11);
          if ((uVar2 == 0xfffe) && (uVar3 == 0x18)) goto LAB_005a14db;
          if ((uVar2 != 3) && (uVar2 != 1)) {
            if (uVar2 != 0xfffe) goto LAB_005a14db;
            uVar2 = swap2((ushort)local_98,uVar11);
            if ((uVar2 & 0xfffd) != 1) goto LAB_005a14db;
          }
          local_d0 = (uint)uVar1;
          uVar1 = swap2(local_a8._6_2_,uVar11);
          uVar10 = (uint)(uVar1 >> 3);
          if ((1 < uVar10 - 2) && (((uVar10 != 8 && (uVar10 != 4)) || (uVar2 != 3)))) {
LAB_005a14db:
            piVar7 = __errno_location();
            *piVar7 = -0x3eb;
            return 0;
          }
        }
        else if ((int)local_b8 == 0x61746164) {
          uVar3 = swap4(local_b8._4_4_,uVar11);
          if (uVar3 == 0xffffffff) {
            _Var9 = lseek(*param_1,0,2);
            uVar8 = _Var9 - (lVar12 + 8);
            if (0xfffffffe < uVar8) {
              uVar8 = 0xffffffff;
            }
          }
          else {
            uVar8 = (ulong)(uVar3 & 1) + (ulong)uVar3;
          }
          param_1[4] = local_cc;
          param_1[5] = local_d0;
          param_1[6] = uVar10;
          *(long *)(param_1 + 8) = lVar12 + 8;
          *(ulong *)(param_1 + 0xc) = uVar8;
          param_1[10] = 0;
          param_1[0xb] = local_d0 * uVar10;
          return 1;
        }
        uVar3 = local_b8._4_4_;
        uVar4 = sys_isbigendian();
        uVar3 = swap4(uVar3,(int)uVar4);
        lVar6 = (ulong)uVar3 + lVar12 + 8;
        lVar6 = (ulong)((uint)lVar6 & 1) + lVar6;
        sVar5 = fd_read(*param_1,lVar6,&local_b8,8);
        lVar12 = -1;
        if (7 < sVar5) {
          lVar12 = lVar6;
        }
      } while (lVar12 != -1);
    }
  }
  return 0;
}


