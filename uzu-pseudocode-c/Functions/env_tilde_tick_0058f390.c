// Function : env_tilde_tick
// Namespace: 
// Entry    : 0058f390
// Prototype: undefined env_tilde_tick(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0058f390 - 0058f3a7


void env_tilde_tick(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9)

{
  long *plVar1;
  float fVar2;
  undefined4 extraout_XMM0_Db;
  
  plVar1 = *(long **)(param_9 + 0x30);
  fVar2 = powtodb(*(float *)(param_9 + 0x58));
  outlet_float(CONCAT44(extraout_XMM0_Db,fVar2),param_2,param_3,param_4,param_5,param_6,param_7,
               param_8,plVar1);
  return;
}


