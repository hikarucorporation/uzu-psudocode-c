// Function : binop1_log_bang
// Namespace: 
// Entry    : 00578930
// Prototype: undefined binop1_log_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00578930 - 005789aa


void binop1_log_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9)

{
  float fVar1;
  float fVar2;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (0.0 < *(float *)(param_9 + 0x30)) {
    fVar2 = *(float *)(param_9 + 0x34);
    fVar1 = logf(*(float *)(param_9 + 0x30));
    uVar4 = 0;
    uVar5 = 0;
    uVar3 = extraout_XMM0_Db;
    if (0.0 < fVar2) {
      fVar2 = logf(fVar2);
      fVar1 = fVar1 / fVar2;
      uVar3 = 0;
      fVar2 = fVar1;
    }
    outlet_float(CONCAT44(uVar3,fVar1),(ulong)(uint)fVar2,CONCAT44(uVar5,uVar4),param_4,param_5,
                 param_6,param_7,param_8,*(long **)(param_9 + 0x18));
    return;
  }
  outlet_float((ulong)DAT_0065b9c0,0,param_3,param_4,param_5,param_6,param_7,param_8,
               *(long **)(param_9 + 0x18));
  return;
}


