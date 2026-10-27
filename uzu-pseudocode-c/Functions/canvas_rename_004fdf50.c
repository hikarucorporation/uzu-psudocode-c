// Function : canvas_rename
// Namespace: 
// Entry    : 004fdf50
// Prototype: undefined canvas_rename(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 * param_10, char * param_11, char * param_12, char * param_13, undefined8 param_14)
// Body     : 004fdf50 - 004fe0a0


void canvas_rename(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long *param_9,undefined8 *param_10,char *param_11,char *param_12,char *param_13,
                  undefined8 param_14)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  char *pcVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 uVar5;
  undefined8 extraout_RDX_02;
  char *pcVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 uVar7;
  char acStack_498 [128];
  undefined1 in_stack_fffffffffffffbe8;
  
  pcVar4 = *(char **)param_9[0x19];
  iVar1 = strcmp(pcVar4,"Pd");
  if (iVar1 != 0) {
    pd_snprintf(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                acStack_498 + 0x80,999,"pd-%s",pcVar4,param_13,param_14,in_stack_fffffffffffffbe8);
    puVar2 = gensym(acStack_498 + 0x80);
    pd_unbind(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
              puVar2,extraout_RDX,pcVar4,param_13,param_14);
    param_12 = pcVar4;
  }
  param_9[0x19] = (long)param_10;
  pcVar4 = (char *)*param_10;
  pcVar6 = "Pd";
  iVar1 = strcmp(pcVar4,"Pd");
  if (iVar1 != 0) {
    pd_snprintf(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                acStack_498 + 0x80,999,"pd-%s",pcVar4,param_13,param_14,in_stack_fffffffffffffbe8);
    pcVar6 = (char *)gensym(acStack_498 + 0x80);
    pd_bind(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
            (long)pcVar6,extraout_RDX_00,pcVar4,param_13,param_14);
    param_12 = pcVar4;
  }
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  uVar5 = extraout_RDX_01;
  uVar7 = extraout_XMM0_Qa_03;
  if ((param_11 != (char *)0x0) && (param_12 = (char *)(*plVar3 + 0x168), param_12 != param_11)) {
    puVar2 = (undefined8 *)param_9[0x1c];
    if (puVar2 == (undefined8 *)0x0) {
      plVar3 = param_9;
      do {
        plVar3 = (long *)plVar3[9];
        if (plVar3 == (long *)0x0) {
          uVar7 = bug(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      "t_canvasenvironment",pcVar6,uVar5,param_12,param_13,param_14,
                      in_stack_fffffffffffffbe8);
          uVar5 = extraout_RDX_02;
        }
        puVar2 = (undefined8 *)plVar3[0x1c];
      } while (puVar2 == (undefined8 *)0x0);
    }
    *puVar2 = param_11;
  }
  if ((*(byte *)(param_9 + 0x1d) & 1) != 0) {
    canvas_reflecttitle(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,
                        pcVar6,uVar5,param_12,param_13,param_14,in_stack_fffffffffffffbe8);
  }
  return;
}


