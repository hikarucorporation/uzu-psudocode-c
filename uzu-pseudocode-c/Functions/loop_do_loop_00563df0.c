// Function : loop_do_loop
// Namespace: 
// Entry    : 00563df0
// Prototype: undefined loop_do_loop(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00563df0 - 00563f3d


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void loop_do_loop(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9)

{
  long lVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  double extraout_XMM0_Qa;
  double dVar5;
  
  *(undefined8 *)(param_9 + 0x60) = 1;
  if (*(long *)(param_9 + 0x50) == 0) {
    dVar5 = (double)*(float *)(param_9 + 0x48);
    dVar4 = ((double)*(float *)(param_9 + 0x34) - *(double *)(param_9 + 0x40)) / dVar5;
    fVar3 = (float)((uint)(float)dVar4 & _DAT_005d91c0);
    dVar4 = (double)CONCAT44((uint)((ulong)dVar4 >> 0x20) & _UNK_005d91c4,fVar3);
    iVar2 = (int)fVar3 + 2;
    do {
      while( true ) {
        iVar2 = iVar2 + -1;
        if (iVar2 == 0) goto LAB_00563f2f;
        if (*(long *)(param_9 + 0x68) != 0) break;
        dVar4 = (double)*(float *)(param_9 + 0x38) + *(double *)(param_9 + 0x40);
        outlet_float(CONCAT44((int)((ulong)dVar4 >> 0x20),(float)dVar4),dVar5,param_3,param_4,
                     param_5,param_6,param_7,param_8,*(long **)(param_9 + 0x18));
        dVar5 = (double)*(float *)(param_9 + 0x48);
        if (*(long *)(param_9 + 0x58) == 0) {
          dVar4 = *(double *)(param_9 + 0x40) - dVar5;
          *(double *)(param_9 + 0x40) = dVar4;
          lVar1 = *(long *)(param_9 + 0x60);
        }
        else {
          dVar4 = *(double *)(param_9 + 0x40) + dVar5;
          *(double *)(param_9 + 0x40) = dVar4;
          lVar1 = *(long *)(param_9 + 0x60);
        }
        if (lVar1 == 2) {
          return;
        }
      }
      outlet_bang(dVar4,dVar5,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long **)(param_9 + 0x18));
      dVar4 = extraout_XMM0_Qa;
    } while (*(long *)(param_9 + 0x60) != 2);
  }
  else {
    dVar4 = *(double *)(param_9 + 0x40);
    fVar3 = *(float *)(param_9 + 0x48);
    do {
      dVar5 = (double)*(float *)(param_9 + 0x34);
      if ((double)fVar3 * dVar5 < dVar4) {
LAB_00563f2f:
        *(undefined8 *)(param_9 + 0x60) = 0;
        return;
      }
      if (*(long *)(param_9 + 0x68) == 0) {
        dVar4 = dVar4 + (double)*(float *)(param_9 + 0x38);
        outlet_float(CONCAT44((int)((ulong)dVar4 >> 0x20),(float)dVar4),
                     (double)*(float *)(param_9 + 0x38),dVar5,param_4,param_5,param_6,param_7,
                     param_8,*(long **)(param_9 + 0x18));
      }
      else {
        outlet_bang(dVar4,(double)fVar3 * dVar5,dVar5,param_4,param_5,param_6,param_7,param_8,
                    *(long **)(param_9 + 0x18));
      }
      fVar3 = *(float *)(param_9 + 0x48);
      dVar4 = (double)fVar3 + *(double *)(param_9 + 0x40);
      *(double *)(param_9 + 0x40) = dVar4;
    } while (*(long *)(param_9 + 0x60) != 2);
  }
  return;
}


