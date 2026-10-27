// Function : print_bang
// Namespace: 
// Entry    : 0057e670
// Prototype: undefined print_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0057e670 - 0057e705


void print_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9)

{
  long *plVar1;
  undefined1 unaff_BL;
  char *pcVar2;
  undefined8 in_R9;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar3;
  
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  if ((*(long *)(*(long *)(*plVar1 + 0x50) + 0x58) != 0) ||
     (*(int *)PTR_sys_printtostderr_00715f78 != 0)) {
    uVar3 = startpost(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      "%s%sbang");
    endpost(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  }
  pcVar2 = ": ";
  if (*(char *)**(undefined8 **)(param_9 + 0x30) == '\0') {
    pcVar2 = "";
  }
  uVar3 = startlogpost(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       param_9,2,"%s%sbang",(char *)**(undefined8 **)(param_9 + 0x30),pcVar2,in_R9,
                       unaff_BL);
  endpost(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}


