// Function : scalarobj_new
// Namespace: 
// Entry    : 005835e0
// Prototype: long * scalarobj_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, undefined8 param_9, uint param_10, int * param_11, undefined8 param_12, uint * param_13, undefined4 * param_14)
// Body     : 005835e0 - 00583699


long * scalarobj_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    double param_5,double param_6,double param_7,undefined8 param_8,
                    undefined8 param_9,uint param_10,int *param_11,undefined8 param_12,
                    uint *param_13,undefined4 *param_14)

{
  char *__s1;
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  
  if (param_10 == 0) {
    param_10 = 0;
  }
  else if (*param_11 == 2) {
    __s1 = (char *)**(undefined8 **)(param_11 + 2);
    iVar1 = strcmp(__s1,"d");
    param_1 = extraout_XMM0_Qa;
    if (iVar1 != 0) {
      iVar1 = strcmp(__s1,"define");
      param_1 = extraout_XMM0_Qa_00;
      if (iVar1 != 0) {
        pd_error(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                 "scalar %s: unknown function",__s1,param_12,(char *)param_13,param_14);
        plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
        *(undefined8 *)(*plVar2 + 0x58) = 0;
        return (long *)0x0;
      }
    }
    param_10 = param_10 - 1;
    param_11 = param_11 + 4;
  }
  plVar2 = scalar_define_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                             ,param_10,param_11,param_12,param_13,param_14);
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  *(long **)(*plVar3 + 0x58) = plVar2;
  return plVar2;
}


