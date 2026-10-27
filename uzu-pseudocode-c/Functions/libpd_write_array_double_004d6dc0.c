// Function : libpd_write_array_double
// Namespace: 
// Entry    : 004d6dc0
// Prototype: undefined8 libpd_write_array_double(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, char * param_9, uint param_10, long param_11, uint param_12, char * param_13, undefined8 param_14)
// Body     : 004d6dc0 - 004d6ef5


undefined8
libpd_write_array_double
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,char *param_9,
          uint param_10,long param_11,uint param_12,char *param_13,undefined8 param_14)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  int *piVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  
  sys_lock();
  puVar2 = gensym(param_9);
  lVar4 = *(long *)PTR_garray_class_00715780;
  piVar5 = (int *)PTR_garray_class_00715780;
  plVar3 = pd_findbyclass(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          (long)puVar2,lVar4);
  if (plVar3 == (long *)0x0) {
    uVar8 = 0xffffffff;
  }
  else {
    if ((int)(param_12 | param_10) < 0) {
      return 0xfffffffe;
    }
    iVar1 = garray_npoints(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                           param_8,(long)plVar3,lVar4,extraout_RDX,piVar5,param_13,param_14);
    if (iVar1 < (int)(param_12 + param_10)) {
      return 0xfffffffe;
    }
    lVar4 = garray_vec(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       (long)plVar3,lVar4,extraout_RDX_00,piVar5,param_13,param_14);
    uVar8 = 0;
    if (0 < (int)param_12) {
      lVar4 = lVar4 + (long)(int)param_10 * 8;
      if (2 < param_12 - 1) {
        lVar7 = 0;
        lVar6 = 0;
        do {
          *(float *)(lVar4 + lVar7 * 8) = (float)*(double *)(param_11 + lVar7 * 8);
          *(float *)(lVar4 + 8 + lVar7 * 8) = (float)*(double *)(param_11 + 8 + lVar7 * 8);
          *(float *)(lVar4 + 0x10 + lVar7 * 8) = (float)*(double *)(param_11 + 0x10 + lVar7 * 8);
          *(float *)(lVar4 + 0x18 + lVar7 * 8) = (float)*(double *)(param_11 + 0x18 + lVar7 * 8);
          lVar6 = lVar6 + -0x20;
          lVar7 = lVar7 + 4;
        } while ((param_12 & 0xfffffffc) != (uint)lVar7);
        lVar4 = lVar4 - lVar6;
        param_11 = param_11 - lVar6;
      }
      if ((param_12 & 3) != 0) {
        uVar8 = 0;
        lVar6 = 0;
        do {
          *(float *)(lVar4 + lVar6 * 8) = (float)*(double *)(param_11 + lVar6 * 8);
          lVar6 = lVar6 + 1;
        } while ((param_12 & 3) != (uint)lVar6);
      }
    }
  }
  sys_unlock();
  return uVar8;
}


