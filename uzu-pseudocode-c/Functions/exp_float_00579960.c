// Function : exp_float
// Namespace: 
// Entry    : 00579960
// Prototype: undefined exp_float(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00579960 - 00579988


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void exp_float(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9)

{
  float fVar1;
  undefined4 extraout_XMM0_Db;
  double dVar2;
  
  dVar2 = (double)param_1;
  if (_DAT_0065b9c8 < dVar2) {
    param_1 = DAT_0065b9c4;
  }
  fVar1 = expf(param_1);
  outlet_float(CONCAT44(extraout_XMM0_Db,fVar1),dVar2,param_3,param_4,param_5,param_6,param_7,
               param_8,*(long **)(param_9 + 0x18));
  return;
}


