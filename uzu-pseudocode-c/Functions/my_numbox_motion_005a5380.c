// Function : my_numbox_motion
// Namespace: 
// Entry    : 005a5380
// Prototype: undefined my_numbox_motion(undefined8 param_1, float param_2, float param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005a5380 - 005a549f


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void my_numbox_motion(undefined8 param_1,float param_2,float param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9)

{
  long *plVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double __y;
  
  if (param_3 == 0.0) {
    if (*(int *)(param_9 + 0x4c0) == 0) {
      __y = *(double *)(&DAT_0065e620 + (ulong)((*(byte *)(param_9 + 0x443) & 2) == 0) * 8) *
            (double)param_2;
      dVar3 = (double)*(float *)(param_9 + 0x4a0) - __y;
    }
    else {
      __y = *(double *)(&DAT_0065e620 + (ulong)((*(byte *)(param_9 + 0x443) & 2) == 0) * 8) *
            (double)CONCAT44((uint)((ulong)(double)param_2 >> 0x20) ^ _UNK_00652d14,
                             SUB84((double)param_2,0) ^ _DAT_00652d10);
      dVar3 = pow(*(double *)(param_9 + 0x4b8),__y);
      dVar3 = (double)*(float *)(param_9 + 0x4a0) * dVar3;
    }
    *(float *)(param_9 + 0x4a0) = (float)dVar3;
    dVar3 = (double)(float)dVar3;
    if (dVar3 < *(double *)(param_9 + 0x4a8)) {
      fVar2 = (float)*(double *)(param_9 + 0x4a8);
      *(float *)(param_9 + 0x4a0) = fVar2;
      dVar3 = (double)fVar2;
    }
    dVar4 = *(double *)(param_9 + 0x4b0);
    if (dVar4 < dVar3) {
      *(float *)(param_9 + 0x4a0) = (float)dVar4;
    }
    sys_queuegui(param_9,*(long *)(param_9 + 0x30),0x5a68b0);
    outlet_float((ulong)*(uint *)(param_9 + 0x4a0),dVar4,__y,param_4,param_5,param_6,param_7,param_8
                 ,*(long **)(param_9 + 0x18));
    if (((*(byte *)(param_9 + 0x440) & 0x80) != 0) &&
       (plVar1 = *(long **)(*(long *)(param_9 + 0x458) + 8), plVar1 != (long *)0x0)) {
      pd_float(plVar1);
      return;
    }
  }
  return;
}


