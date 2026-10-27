// Function : my_numbox_list
// Namespace: 
// Entry    : 005a5230
// Prototype: undefined my_numbox_list(undefined8 param_1, double param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, int param_11, int * param_12)
// Body     : 005a5230 - 005a5345


void my_numbox_list(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,undefined8 param_10,int param_11,int *param_12)

{
  float *pfVar1;
  long *plVar2;
  float fVar3;
  double dVar4;
  
  if (param_11 == 0) {
    outlet_float((ulong)*(uint *)(param_9 + 0x4a0),param_2,param_3,param_4,param_5,param_6,param_7,
                 param_8,*(long **)(param_9 + 0x18));
    if ((*(byte *)(param_9 + 0x440) & 0x80) == 0) {
      return;
    }
    plVar2 = *(long **)(*(long *)(param_9 + 0x458) + 8);
  }
  else {
    if (*param_12 != 1) {
      return;
    }
    fVar3 = (float)atom_getfloatarg(0,param_11,(long)param_12);
    pfVar1 = (float *)(param_9 + 0x4a0);
    if (fVar3 != *(float *)(param_9 + 0x4a0)) {
      *pfVar1 = fVar3;
      if (*(int *)PTR_pd_compatibilitylevel_00715a40 < 0x35) {
        dVar4 = (double)fVar3;
        if (dVar4 < *(double *)(param_9 + 0x4a8)) {
          fVar3 = (float)*(double *)(param_9 + 0x4a8);
          *pfVar1 = fVar3;
          dVar4 = (double)fVar3;
        }
        param_2 = *(double *)(param_9 + 0x4b0);
        if (param_2 < dVar4) {
          *pfVar1 = (float)param_2;
        }
      }
      sys_queuegui(param_9,*(long *)(param_9 + 0x30),0x5a68b0);
    }
    outlet_float((ulong)*(uint *)(param_9 + 0x4a0),param_2,param_3,param_4,param_5,param_6,param_7,
                 param_8,*(long **)(param_9 + 0x18));
    if ((*(byte *)(param_9 + 0x440) & 0x80) == 0) {
      return;
    }
    plVar2 = *(long **)(*(long *)(param_9 + 0x458) + 8);
  }
  if (plVar2 == (long *)0x0) {
    return;
  }
  pd_float(plVar2);
  return;
}


