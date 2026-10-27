// Function : tabosc4_tilde_set
// Namespace: 
// Entry    : 00599a50
// Prototype: undefined tabosc4_tilde_set(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 00599a50 - 00599b47


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tabosc4_tilde_set(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9,undefined8 *param_10,undefined8 param_11,int *param_12,
                      char *param_13,undefined8 param_14)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  uint local_1c;
  
  *(undefined8 **)(param_9 + 0x40) = param_10;
  plVar2 = pd_findbyclass(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          (long)param_10,*(long *)PTR_garray_class_00715780);
  if (plVar2 == (long *)0x0) {
    if (*(char *)*param_10 != '\0') {
      pd_error(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               "tabosc4~: %s: no such array",**(undefined8 **)(param_9 + 0x40),param_12,param_13,
               param_14);
    }
  }
  else {
    uVar3 = garray_getfloatwords
                      (extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       (long)plVar2,&local_1c,(undefined8 *)(param_9 + 0x38),param_12,param_13,
                       param_14);
    if ((int)uVar3 == 0) {
      pd_error(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               "%s: bad template for tabosc4~",**(undefined8 **)(param_9 + 0x40),param_12,param_13,
               param_14);
    }
    else {
      uVar4 = local_1c - 3;
      iVar1 = ilog2(uVar4);
      if (uVar4 == 1 << ((byte)iVar1 & 0x1f)) {
        *(float *)(param_9 + 0x30) = (float)(int)uVar4;
        *(float *)(param_9 + 0x34) = (float)(_DAT_005d9000 / (double)(int)uVar4);
        garray_usedindsp((long)plVar2);
        return;
      }
      pd_error(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               "%s: number of points (%d) not a power of 2 plus three",
               **(undefined8 **)(param_9 + 0x40),(ulong)local_1c,param_13,param_14);
    }
  }
  *(undefined8 *)(param_9 + 0x38) = 0;
  return;
}


