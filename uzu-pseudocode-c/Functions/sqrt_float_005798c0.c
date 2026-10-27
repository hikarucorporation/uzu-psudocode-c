// Function : sqrt_float
// Namespace: 
// Entry    : 005798c0
// Prototype: undefined sqrt_float(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005798c0 - 00579913


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sqrt_float(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9)

{
  float fVar1;
  uint uVar2;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  
  fVar1 = (float)param_1;
  uVar2 = (uint)((ulong)param_1 >> 0x20);
  uVar3 = 0;
  if (0.0 < fVar1) {
    auVar4._8_4_ = in_XMM0_Dc;
    auVar4._0_8_ = param_1;
    auVar4._12_4_ = in_XMM0_Dd;
    auVar4 = rsqrtss(ZEXT816(0),auVar4);
    fVar5 = fVar1 * auVar4._0_4_;
    fVar6 = DAT_005d98c8 * fVar5;
    param_4 = (ulong)(uint)fVar6;
    fVar6 = (fVar5 * auVar4._0_4_ + DAT_00652610) * fVar6;
    param_3 = CONCAT44(uVar2,fVar6);
    uVar3 = CONCAT44(~(uVar2 & _UNK_005d91c4) & uVar2,
                     ~-(uint)((float)((uint)fVar1 & _DAT_005d91c0) < DAT_005d94cc) & (uint)fVar6);
  }
  outlet_float(uVar3,uVar3,param_3,param_4,param_5,param_6,param_7,param_8,
               *(long **)(param_9 + 0x18));
  return;
}


