// Function : toggle_loadbang
// Namespace: 
// Entry    : 005ad7c0
// Prototype: undefined toggle_loadbang(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005ad7c0 - 005ad84f


void toggle_loadbang(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9)

{
  long *plVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((param_1 == 0.0) && ((*(byte *)(param_9 + 0x448) & 1) != 0)) {
    fVar2 = *(float *)(param_9 + 0x490);
    uVar3 = 0;
    uVar4 = 0;
    if ((fVar2 != 0.0) && (*(int *)PTR_pd_compatibilitylevel_00715a40 < 0x2e)) {
      *(float *)(param_9 + 0x494) = fVar2;
    }
    if ((fVar2 == 0.0) == (fVar2 != 0.0)) {
      (**(code **)(param_9 + 0x38))(param_9,*(undefined8 *)(param_9 + 0x30),0);
      fVar2 = *(float *)(param_9 + 0x490);
    }
    outlet_float((ulong)(uint)fVar2,CONCAT44(uVar4,uVar3),param_3,param_4,param_5,param_6,param_7,
                 param_8,*(long **)(param_9 + 0x18));
    if (((*(byte *)(param_9 + 0x440) & 0x80) != 0) &&
       (plVar1 = *(long **)(*(long *)(param_9 + 0x458) + 8), plVar1 != (long *)0x0)) {
      pd_float(plVar1);
      return;
    }
  }
  return;
}


