// Function : binop2_bo_bang
// Namespace: 
// Entry    : 005790a0
// Prototype: undefined binop2_bo_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005790a0 - 005790c0


void binop2_bo_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined1 auVar3 [16];
  
  iVar2 = (int)(float)((ulong)*(undefined8 *)(param_9 + 0x30) >> 0x20);
  auVar3._4_4_ = iVar2;
  auVar3._0_4_ = iVar2;
  auVar3._8_4_ = iVar2;
  auVar3._12_4_ = iVar2;
  auVar1._4_4_ = iVar2;
  auVar1._0_4_ = (int)(float)*(undefined8 *)(param_9 + 0x30);
  auVar1._8_8_ = 0;
  auVar3 = auVar3 | auVar1;
  outlet_float(CONCAT44((float)auVar3._4_4_,(float)auVar3._0_4_),auVar3._0_8_,param_3,param_4,
               param_5,param_6,param_7,param_8,*(long **)(param_9 + 0x18));
  return;
}


