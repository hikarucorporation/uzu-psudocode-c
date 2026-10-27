// Function : nearest_prime
// Namespace: 
// Entry    : 0056a680
// Prototype: uint nearest_prime(float param_1, undefined8 param_2, uint param_3)
// Body     : 0056a680 - 0056a882


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint nearest_prime(float param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  float fVar7;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 in_XMM2 [16];
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  
  if (param_3 == 2) {
    return 2;
  }
  fVar7 = (float)(int)param_3;
  if ((param_3 & 1) != 0) {
    auVar10._4_4_ = (int)((ulong)param_2 >> 0x20);
    auVar10._0_4_ = fVar7;
    auVar10._8_4_ = in_XMM1_Dc;
    auVar10._12_4_ = in_XMM1_Dd;
    auVar10 = rsqrtss(in_XMM2,auVar10);
    fVar8 = fVar7 * auVar10._0_4_;
    uVar5 = (uint)(float)(~-(uint)((float)(_DAT_005d91c0 & (uint)fVar7) < DAT_005d94cc) &
                         (uint)((fVar8 * auVar10._0_4_ + DAT_00652610) * DAT_005d98c8 * fVar8));
    if (uVar5 < 3) {
      return param_3;
    }
    uVar3 = 5;
    do {
      uVar2 = param_3 % (uVar3 - 2);
      if (uVar2 == 0) break;
      bVar6 = uVar3 <= uVar5;
      uVar3 = uVar3 + 2;
    } while (bVar6);
    if (uVar2 != 0) {
      return param_3;
    }
  }
  if (0 < (int)(fVar7 * param_1)) {
    iVar4 = 1;
    do {
      uVar5 = iVar4 + param_3;
      fVar8 = (float)(int)uVar5;
      auVar10 = rsqrtss(ZEXT816(0),ZEXT416((uint)fVar8));
      fVar9 = fVar8 * auVar10._0_4_;
      if (uVar5 == 2) {
        return 2;
      }
      if ((uVar5 & 1) != 0) {
        uVar3 = (uint)(float)(~-(uint)((float)((uint)fVar8 & _DAT_005d91c0) < DAT_005d94cc) &
                             (uint)(fVar9 * DAT_005d98c8 * (fVar9 * auVar10._0_4_ + DAT_00652610)));
        if (uVar3 < 3) {
          return uVar5;
        }
        uVar2 = 5;
        do {
          uVar1 = uVar5 % (uVar2 - 2);
          if (uVar1 == 0) break;
          bVar6 = uVar2 <= uVar3;
          uVar2 = uVar2 + 2;
        } while (bVar6);
        if (uVar1 != 0) {
          return uVar5;
        }
      }
      uVar5 = param_3 - iVar4;
      fVar8 = (float)(int)uVar5;
      auVar10 = rsqrtss(ZEXT816(0),ZEXT416((uint)fVar8));
      fVar9 = fVar8 * auVar10._0_4_;
      if (uVar5 == 2) {
        return 2;
      }
      if ((uVar5 & 1) != 0) {
        uVar3 = (uint)(float)(~-(uint)((float)((uint)fVar8 & _DAT_005d91c0) < DAT_005d94cc) &
                             (uint)(fVar9 * DAT_005d98c8 * (fVar9 * auVar10._0_4_ + DAT_00652610)));
        if (uVar3 < 3) {
          return uVar5;
        }
        uVar2 = 5;
        do {
          uVar1 = uVar5 % (uVar2 - 2);
          if (uVar1 == 0) break;
          bVar6 = uVar2 <= uVar3;
          uVar2 = uVar2 + 2;
        } while (bVar6);
        if (uVar1 != 0) {
          return uVar5;
        }
      }
      bVar6 = iVar4 != (int)(fVar7 * param_1);
      iVar4 = iVar4 + 1;
    } while (bVar6);
  }
  return 0xffffffff;
}


