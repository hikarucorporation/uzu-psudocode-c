// Function : arrayobj_new
// Namespace: 
// Entry    : 00549350
// Prototype: long * arrayobj_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, uint param_10, int * param_11, long * param_12, char * param_13, undefined8 param_14)
// Body     : 00549350 - 005495f0


long * arrayobj_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9,uint param_10,int *param_11,long *param_12,char *param_13,
                   undefined8 param_14)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  int *extraout_RDX;
  int *extraout_RDX_00;
  int *piVar6;
  undefined8 extraout_RDX_01;
  int *piVar7;
  char *pcVar8;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  uint local_2c;
  int *local_28;
  
  piVar7 = param_11;
  if (param_10 == 0) {
    param_10 = 0;
LAB_0054949f:
    plVar2 = array_define_new(param_10,piVar7,param_11,param_12,param_13,param_14);
  }
  else {
    piVar6 = param_11;
    if (*param_11 != 2) {
LAB_0054949d:
      param_11 = piVar6;
      goto LAB_0054949f;
    }
    pcVar8 = (char *)**(undefined8 **)(param_11 + 2);
    iVar1 = strcmp(pcVar8,"d");
    piVar6 = extraout_RDX;
    if ((iVar1 == 0) || (iVar1 = strcmp(pcVar8,"define"), piVar6 = extraout_RDX_00, iVar1 == 0)) {
      param_10 = param_10 - 1;
      piVar7 = param_11 + 4;
      goto LAB_0054949d;
    }
    iVar1 = strcmp(pcVar8,"size");
    if (iVar1 == 0) {
      plVar2 = array_size_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,param_9,(ulong)(param_10 - 1),param_11 + 4,param_12,param_13,
                              param_14);
    }
    else {
      iVar1 = strcmp(pcVar8,"sum");
      if (iVar1 == 0) {
        local_2c = param_10 - 1;
        local_28 = param_11 + 4;
        uVar5 = 0;
        pcVar8 = (char *)0x1;
        plVar2 = array_rangeop_new(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,
                                   param_7,param_8,array_sum_class,&local_2c,(long *)&local_28,0,
                                   (char *)0x1,param_14);
        plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
        outlet_new(extraout_XMM0_Qa_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   (long)plVar2,*plVar3 + 0x78,extraout_RDX_01,uVar5,pcVar8,param_14);
        lVar4 = *plVar3;
        goto LAB_005494bd;
      }
      iVar1 = strcmp(pcVar8,"get");
      if (iVar1 == 0) {
        plVar2 = array_get_new(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,
                               param_8,param_9,param_10 - 1,(long)(param_11 + 4),param_12,param_13,
                               param_14);
      }
      else {
        iVar1 = strcmp(pcVar8,"set");
        if (iVar1 == 0) {
          local_2c = param_10 - 1;
          local_28 = param_11 + 4;
          plVar2 = array_rangeop_new(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,
                                     param_7,param_8,array_set_class,&local_2c,(long *)&local_28,1,
                                     (char *)0x0,param_14);
        }
        else {
          iVar1 = strcmp(pcVar8,"quantile");
          if (iVar1 == 0) {
            plVar2 = array_quantile_new(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,
                                        param_7,param_8,param_9,param_10 - 1,(long)(param_11 + 4),
                                        param_12,param_13,param_14);
          }
          else {
            iVar1 = strcmp(pcVar8,"random");
            if (iVar1 == 0) {
              plVar2 = array_random_new(extraout_XMM0_Qa_04,param_2,param_3,param_4,param_5,param_6,
                                        param_7,param_8,param_9,param_10 - 1,(long)(param_11 + 4),
                                        param_12,param_13,param_14);
            }
            else {
              iVar1 = strcmp(pcVar8,"max");
              if (iVar1 == 0) {
                plVar2 = array_max_new(extraout_XMM0_Qa_05,param_2,param_3,param_4,param_5,param_6,
                                       param_7,param_8,param_9,param_10 - 1,(long)(param_11 + 4),
                                       param_12,param_13,param_14);
              }
              else {
                iVar1 = strcmp(pcVar8,"min");
                if (iVar1 != 0) {
                  pd_error(extraout_XMM0_Qa_06,param_2,param_3,param_4,param_5,param_6,param_7,
                           param_8,0,"array %s: unknown function",pcVar8,param_12,param_13,param_14)
                  ;
                  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
                  *(undefined8 *)(*plVar2 + 0x58) = 0;
                  return (long *)0x0;
                }
                plVar2 = array_min_new(extraout_XMM0_Qa_06,param_2,param_3,param_4,param_5,param_6,
                                       param_7,param_8,param_9,param_10 - 1,(long)(param_11 + 4),
                                       param_12,param_13,param_14);
              }
            }
          }
        }
      }
    }
  }
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar4 = *plVar3;
LAB_005494bd:
  *(long **)(lVar4 + 0x58) = plVar2;
  return plVar2;
}


