// Function : text_new
// Namespace: 
// Entry    : 00557bd0
// Prototype: long * text_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, uint param_10, int * param_11, long * param_12, char * param_13, undefined8 param_14)
// Body     : 00557bd0 - 00557e3d


long * text_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,uint param_10,int *param_11,long *param_12,char *param_13,
               undefined8 param_14)

{
  char *__s1;
  int iVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  
  if (param_10 == 0) {
    uVar4 = 0;
  }
  else {
    if (*param_11 == 2) {
      __s1 = (char *)**(undefined8 **)(param_11 + 2);
      iVar1 = strcmp(__s1,"d");
      param_1 = extraout_XMM0_Qa;
      if ((iVar1 != 0) && (iVar1 = strcmp(__s1,"define"), param_1 = extraout_XMM0_Qa_00, iVar1 != 0)
         ) {
        iVar1 = strcmp(__s1,"get");
        if (iVar1 == 0) {
          plVar2 = text_get_new(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,
                                param_8,param_9,(ulong)(param_10 - 1),param_11 + 4,param_12,param_13
                                ,param_14);
        }
        else {
          iVar1 = strcmp(__s1,"set");
          if (iVar1 == 0) {
            plVar2 = text_set_new(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,
                                  param_7,param_8,param_9,(ulong)(param_10 - 1),param_11 + 4,
                                  param_12,param_13,param_14);
          }
          else {
            iVar1 = strcmp(__s1,"insert");
            if (iVar1 == 0) {
              plVar2 = text_insert_new(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,
                                       param_7,param_8,param_9,(ulong)(param_10 - 1),param_11 + 4,
                                       param_12,param_13,param_14);
            }
            else {
              iVar1 = strcmp(__s1,"delete");
              if (iVar1 == 0) {
                plVar2 = text_delete_new(extraout_XMM0_Qa_04,param_2,param_3,param_4,param_5,param_6
                                         ,param_7,param_8,param_9,(ulong)(param_10 - 1),param_11 + 4
                                         ,param_12,param_13,param_14);
              }
              else {
                iVar1 = strcmp(__s1,"size");
                if (iVar1 == 0) {
                  plVar2 = text_size_new(extraout_XMM0_Qa_05,param_2,param_3,param_4,param_5,param_6
                                         ,param_7,param_8,param_9,(ulong)(param_10 - 1),param_11 + 4
                                         ,param_12,param_13,param_14);
                }
                else {
                  iVar1 = strcmp(__s1,"tolist");
                  if (iVar1 == 0) {
                    plVar2 = text_tolist_new(extraout_XMM0_Qa_06,param_2,param_3,param_4,param_5,
                                             param_6,param_7,param_8,param_9,(ulong)(param_10 - 1),
                                             param_11 + 4,param_12,param_13,param_14);
                  }
                  else {
                    iVar1 = strcmp(__s1,"fromlist");
                    if (iVar1 == 0) {
                      plVar2 = text_fromlist_new(extraout_XMM0_Qa_07,param_2,param_3,param_4,param_5
                                                 ,param_6,param_7,param_8,param_9,
                                                 (ulong)(param_10 - 1),param_11 + 4,param_12,
                                                 param_13,param_14);
                    }
                    else {
                      iVar1 = strcmp(__s1,"search");
                      if (iVar1 == 0) {
                        plVar2 = text_search_new(extraout_XMM0_Qa_08,param_2,param_5,param_8,param_9
                                                 ,(ulong)(param_10 - 1),param_11 + 4,param_12,
                                                 param_13,param_14);
                      }
                      else {
                        iVar1 = strcmp(__s1,"sequence");
                        if (iVar1 != 0) {
                          pd_error(extraout_XMM0_Qa_09,param_2,param_3,param_4,param_5,param_6,
                                   param_7,param_8,0,"list %s: unknown function",__s1,param_12,
                                   param_13,param_14);
                          plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
                          *(undefined8 *)(*plVar2 + 0x58) = 0;
                          return (long *)0x0;
                        }
                        plVar2 = text_sequence_new(extraout_XMM0_Qa_09,param_2,param_3,param_4,
                                                   param_5,param_6,param_7,param_8,param_9,
                                                   (ulong)(param_10 - 1),param_11 + 4,
                                                   (int *)param_12,param_13,param_14);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_00557d41;
      }
      param_10 = param_10 - 1;
      param_11 = param_11 + 4;
    }
    uVar4 = (ulong)param_10;
  }
  plVar2 = text_define_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                           uVar4,param_11,param_12,param_13,param_14);
LAB_00557d41:
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  *(long **)(*plVar3 + 0x58) = plVar2;
  return plVar2;
}


