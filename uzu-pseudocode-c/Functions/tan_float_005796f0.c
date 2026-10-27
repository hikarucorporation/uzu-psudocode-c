// Function : tan_float
// Namespace: 
// Entry    : 005796f0
// Prototype: undefined tan_float(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005796f0 - 00579740


void tan_float(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9)

{
  float fVar1;
  float fVar2;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  float fVar3;
  undefined4 uVar4;
  
  fVar1 = cosf(param_1);
  if (fVar1 == 0.0) {
    outlet_float(0,CONCAT44(extraout_XMM0_Db,fVar1),param_3,param_4,param_5,param_6,param_7,param_8,
                 *(long **)(param_9 + 0x18));
    return;
  }
  fVar3 = fVar1;
  uVar4 = extraout_XMM0_Db;
  fVar2 = sinf(param_1);
  outlet_float(CONCAT44(extraout_XMM0_Db_00,fVar2 / fVar1),CONCAT44(uVar4,fVar3),param_3,param_4,
               param_5,param_6,param_7,param_8,*(long **)(param_9 + 0x18));
  return;
}


