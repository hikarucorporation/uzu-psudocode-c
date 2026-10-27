// Function : my_numbox_float
// Namespace: 
// Entry    : 005a5160
// Prototype: undefined my_numbox_float(float param_1, double param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005a5160 - 005a522d


void my_numbox_float(float param_1,double param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9)

{
  long *plVar1;
  float fVar2;
  double dVar3;
  
  if (param_1 != *(float *)(param_9 + 0x4a0)) {
    *(float *)(param_9 + 0x4a0) = param_1;
    if (*(int *)PTR_pd_compatibilitylevel_00715a40 < 0x35) {
      dVar3 = (double)param_1;
      if (dVar3 < *(double *)(param_9 + 0x4a8)) {
        fVar2 = (float)*(double *)(param_9 + 0x4a8);
        *(float *)(param_9 + 0x4a0) = fVar2;
        dVar3 = (double)fVar2;
      }
      param_2 = *(double *)(param_9 + 0x4b0);
      if (param_2 < dVar3) {
        *(float *)(param_9 + 0x4a0) = (float)param_2;
      }
    }
    sys_queuegui(param_9,*(long *)(param_9 + 0x30),0x5a68b0);
  }
  if ((*(byte *)(param_9 + 0x443) & 4) != 0) {
    outlet_float((ulong)*(uint *)(param_9 + 0x4a0),param_2,param_3,param_4,param_5,param_6,param_7,
                 param_8,*(long **)(param_9 + 0x18));
    if (((*(byte *)(param_9 + 0x440) & 0x80) != 0) &&
       (plVar1 = *(long **)(*(long *)(param_9 + 0x458) + 8), plVar1 != (long *)0x0)) {
      pd_float(plVar1);
      return;
    }
  }
  return;
}


