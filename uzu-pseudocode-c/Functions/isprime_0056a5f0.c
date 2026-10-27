// Function : isprime
// Namespace: 
// Entry    : 0056a5f0
// Prototype: bool isprime(undefined8 param_1, uint param_2)
// Body     : 0056a5f0 - 0056a67e


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool isprime(undefined8 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  float fVar5;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined1 in_XMM1 [16];
  undefined1 auVar6 [16];
  float fVar7;
  
  bVar4 = true;
  if ((param_2 != 2) && (bVar4 = false, (param_2 & 1) != 0)) {
    fVar5 = (float)(int)param_2;
    auVar6._4_4_ = (int)((ulong)param_1 >> 0x20);
    auVar6._0_4_ = fVar5;
    auVar6._8_4_ = in_XMM0_Dc;
    auVar6._12_4_ = in_XMM0_Dd;
    auVar6 = rsqrtss(in_XMM1,auVar6);
    fVar7 = fVar5 * auVar6._0_4_;
    uVar1 = (uint)(float)(~-(uint)((float)((uint)fVar5 & _DAT_005d91c0) < DAT_005d94cc) &
                         (uint)((fVar7 * auVar6._0_4_ + DAT_00652610) * DAT_005d98c8 * fVar7));
    bVar4 = true;
    if (2 < uVar1) {
      uVar3 = 5;
      do {
        uVar2 = param_2 % (uVar3 - 2);
        if (uVar2 == 0) break;
        bVar4 = uVar3 <= uVar1;
        uVar3 = uVar3 + 2;
      } while (bVar4);
      bVar4 = uVar2 != 0;
    }
  }
  return bVar4;
}


