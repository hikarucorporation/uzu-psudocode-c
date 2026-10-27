// Function : line_float
// Namespace: 
// Entry    : 0055c680
// Prototype: undefined line_float(uint param_1, undefined8 param_2, undefined8 param_3, double param_4, double param_5, double param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0055c680 - 0055c7a4


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void line_float(uint param_1,undefined8 param_2,ulong param_3,double param_4,double param_5,
               double param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  float fVar1;
  double extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  double dVar2;
  ulong uVar3;
  
  clock_getlogicaltime();
  if (*(int *)(param_9 + 0x54) != 0) {
    param_2 = 0;
    param_6 = extraout_XMM0_Qa;
    if (0.0 < *(double *)(param_9 + 0x68)) {
      if (extraout_XMM0_Qa < *(double *)(param_9 + 0x38) ||
          extraout_XMM0_Qa == *(double *)(param_9 + 0x38)) {
        fVar1 = *(float *)(param_9 + 0x50);
        param_3 = (ulong)(uint)fVar1;
        param_4 = (extraout_XMM0_Qa - *(double *)(param_9 + 0x48)) * *(double *)(param_9 + 0x60);
        param_5 = (double)fVar1;
        dVar2 = (double)(*(float *)(param_9 + 0x40) - fVar1) * param_4 + param_5;
        uVar3 = CONCAT44((int)((ulong)dVar2 >> 0x20),(float)dVar2);
      }
      else {
        uVar3 = (ulong)*(uint *)(param_9 + 0x40);
      }
      *(int *)(param_9 + 0x50) = (int)uVar3;
      *(double *)(param_9 + 0x48) = extraout_XMM0_Qa;
      dVar2 = extraout_XMM0_Qa;
      clock_getsystimeafter(*(double *)(param_9 + 0x68));
      *(undefined8 *)(param_9 + 0x38) = extraout_XMM0_Qa_00;
      *(uint *)(param_9 + 0x40) = param_1;
      line_tick((ulong)param_1,uVar3,param_3,param_4,param_5,dVar2,param_7,param_8,param_9);
      *(undefined4 *)(param_9 + 0x54) = 0;
      *(double *)(param_9 + 0x60) = _DAT_005d9000 / (*(double *)(param_9 + 0x38) - extraout_XMM0_Qa)
      ;
      fVar1 = *(float *)(param_9 + 0x58);
      if (*(float *)(param_9 + 0x58) <= 0.0) {
        *(undefined4 *)(param_9 + 0x58) = 0x41a00000;
        fVar1 = DAT_005d98f4;
      }
      dVar2 = (double)fVar1;
      if (*(double *)(param_9 + 0x68) <= (double)fVar1) {
        dVar2 = *(double *)(param_9 + 0x68);
      }
      clock_delay(dVar2,*(double **)(param_9 + 0x30));
      *(undefined4 *)(param_9 + 0x54) = 0;
      return;
    }
  }
  clock_unset(*(double **)(param_9 + 0x30));
  *(uint *)(param_9 + 0x50) = param_1;
  *(uint *)(param_9 + 0x40) = param_1;
  outlet_float((ulong)param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               *(long **)(param_9 + 0x18));
  *(undefined4 *)(param_9 + 0x54) = 0;
  return;
}


