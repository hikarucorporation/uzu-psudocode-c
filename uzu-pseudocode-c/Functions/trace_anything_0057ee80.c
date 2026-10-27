// Function : trace_anything
// Namespace: 
// Entry    : 0057ee80
// Prototype: undefined trace_anything(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, int * param_12, uint * param_13, uint * param_14)
// Body     : 0057ee80 - 0057ef24


void trace_anything(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
                   undefined8 *param_10,undefined8 param_11,int *param_12,uint *param_13,
                   uint *param_14)

{
  undefined8 uVar1;
  undefined8 extraout_RDX;
  undefined4 extraout_XMM0_Da;
  float fVar2;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  
  fVar2 = *(float *)(param_9 + 0x38);
  if ((int)fVar2 < 1) {
    outlet_anything(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    *(long **)(param_9 + 0x18),param_10,(uint)param_11,param_12,param_13,param_14);
    return;
  }
  if (*(int *)PTR_backtracer_cantrace_00715618 == 0) {
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "trace requested but tracing is not enabled",param_11,param_12,(char *)param_13,
             param_14);
    *(undefined4 *)(param_9 + 0x38) = 0;
  }
  else {
    uVar1 = backtracer_settracing
                      (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,1,
                       param_11,param_12,(char *)param_13,param_14);
    if ((int)uVar1 != 0) {
      outlet_anything(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                      param_6,param_7,param_8,*(long **)(param_9 + 0x18),param_10,(uint)param_11,
                      param_12,param_13,param_14);
      fVar2 = (float)((int)fVar2 + -1);
      *(float *)(param_9 + 0x38) = fVar2;
      backtracer_settracing
                (CONCAT44(extraout_XMM0_Db_00,fVar2),param_2,param_3,param_4,param_5,param_6,param_7
                 ,param_8,param_9,0,extraout_RDX,param_12,(char *)param_13,param_14);
      return;
    }
  }
  return;
}


