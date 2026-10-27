// Function : toggle_float
// Namespace: 
// Entry    : 005ad580
// Prototype: undefined toggle_float(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005ad580 - 005ad60e


void toggle_float(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9)

{
  long *plVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  fVar2 = *(float *)(param_9 + 0x490);
  uVar3 = 0;
  *(float *)(param_9 + 0x490) = param_1;
  uVar4 = 0;
  uVar5 = 0;
  if ((param_1 != 0.0) && (*(int *)PTR_pd_compatibilitylevel_00715a40 < 0x2e)) {
    *(float *)(param_9 + 0x494) = param_1;
  }
  if ((param_1 == 0.0) == (fVar2 != 0.0)) {
    (**(code **)(param_9 + 0x38))(param_9,*(undefined8 *)(param_9 + 0x30),0);
  }
  if ((*(byte *)(param_9 + 0x443) & 4) != 0) {
    outlet_float((ulong)*(uint *)(param_9 + 0x490),CONCAT44(uVar3,fVar2),CONCAT44(uVar5,uVar4),
                 param_4,param_5,param_6,param_7,param_8,*(long **)(param_9 + 0x18));
    if (((*(byte *)(param_9 + 0x440) & 0x80) != 0) &&
       (plVar1 = *(long **)(*(long *)(param_9 + 0x458) + 8), plVar1 != (long *)0x0)) {
      pd_float(plVar1);
      return;
    }
  }
  return;
}


