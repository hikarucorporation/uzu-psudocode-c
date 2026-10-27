// Function : atan2_bang
// Namespace: 
// Entry    : 00579840
// Prototype: undefined atan2_bang(long param_1)
// Body     : 00579840 - 00579872


void atan2_bang(long param_1)

{
  long *plVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 extraout_XMM0_Db;
  float __x;
  undefined4 uVar4;
  float __y;
  undefined4 uVar5;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  
  plVar1 = *(long **)(param_1 + 0x18);
  __y = *(float *)(param_1 + 0x30);
  uVar5 = 0;
  fVar2 = 0.0;
  uVar3 = 0;
  __x = *(float *)(param_1 + 0x34);
  uVar4 = 0;
  if (__y != 0.0 || __x != 0.0) {
    fVar2 = atan2f(__y,__x);
    uVar3 = extraout_XMM0_Db;
  }
  outlet_float(CONCAT44(uVar3,fVar2),CONCAT44(uVar4,__x),CONCAT44(uVar5,__y),in_XMM3_Qa,in_XMM4_Qa,
               in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,plVar1);
  return;
}


