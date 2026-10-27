// Function : print_anything
// Namespace: 
// Entry    : 0057ecc0
// Prototype: undefined print_anything(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, uint param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 0057ecc0 - 0057ee11


void print_anything(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,undefined8 *param_10,uint param_11,int *param_12,char *param_13,
                   undefined8 param_14)

{
  undefined *puVar1;
  long *plVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar5;
  undefined8 extraout_XMM0_Qa_00;
  char acStack_498 [128];
  undefined1 in_stack_fffffffffffffbe8;
  
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  puVar1 = PTR_sys_printtostderr_00715f78;
  if ((*(long *)(*(long *)(*plVar2 + 0x50) + 0x58) == 0) &&
     (*(int *)PTR_sys_printtostderr_00715f78 == 0)) {
    pcVar3 = (char *)**(undefined8 **)(param_9 + 0x30);
    param_13 = ": ";
    if (*pcVar3 == '\0') {
      param_13 = "";
    }
    param_14 = *param_10;
    uVar5 = startlogpost(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         param_9,2,"%s%s%s",pcVar3,param_13,param_14,in_stack_fffffffffffffbe8);
  }
  else {
    pcVar3 = (char *)*param_10;
    uVar5 = startpost(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      "%s%s%s");
  }
  if (0 < (int)param_11) {
    uVar4 = (ulong)param_11;
    do {
      while( true ) {
        atom_string(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_12,
                    acStack_498 + 0x80,(uint *)0x3e8,pcVar3,param_13,param_14,
                    in_stack_fffffffffffffbe8);
        plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
        if ((*(long *)(*(long *)(*plVar2 + 0x50) + 0x58) != 0) || (*(int *)puVar1 != 0)) break;
        pcVar3 = acStack_498 + 0x80;
        uVar5 = startlogpost(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                             param_8,param_9,2," %s",acStack_498 + 0x80,param_13,param_14,
                             in_stack_fffffffffffffbe8);
        param_12 = param_12 + 4;
        uVar4 = uVar4 - 1;
        if (uVar4 == 0) goto LAB_0057edfb;
      }
      uVar5 = startpost(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        " %s");
      param_12 = param_12 + 4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
LAB_0057edfb:
  endpost(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}


