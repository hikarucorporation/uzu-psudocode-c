// Function : print_float
// Namespace: 
// Entry    : 0057e710
// Prototype: undefined print_float(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0057e710 - 0057e7cb


void print_float(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9)

{
  long *plVar1;
  char *pcVar2;
  undefined8 in_R9;
  undefined8 uVar3;
  undefined1 in_stack_ffffffffffffffe8;
  
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  if ((*(long *)(*(long *)(*plVar1 + 0x50) + 0x58) != 0) ||
     (*(int *)PTR_sys_printtostderr_00715f78 != 0)) {
    uVar3 = startpost((double)param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      "%s%s%g");
    endpost(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  }
  pcVar2 = ": ";
  if (*(char *)**(undefined8 **)(param_9 + 0x30) == '\0') {
    pcVar2 = "";
  }
  uVar3 = startlogpost((double)param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       param_9,2,"%s%s%g",(char *)**(undefined8 **)(param_9 + 0x30),pcVar2,in_R9,
                       in_stack_ffffffffffffffe8);
  endpost(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}


