// Function : file_cwd_bang
// Namespace: 
// Entry    : 0057c790
// Prototype: undefined file_cwd_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0057c790 - 0057c804


void file_cwd_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  char *param_13,undefined8 param_14)

{
  long *plVar1;
  char *pcVar2;
  int *piVar3;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar4;
  char acStack_3f8 [1008];
  
  pcVar2 = getcwd(acStack_3f8,1000);
  if (pcVar2 != (char *)0x0) {
    plVar1 = *(long **)(param_9 + 0x58);
    gensym(acStack_3f8);
    outlet_symbol(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                 );
    return;
  }
  uVar4 = extraout_XMM0_Qa;
  if (*(int *)(param_9 + 0x4c) != 0) {
    piVar3 = __errno_location();
    pcVar2 = strerror(*piVar3);
    uVar4 = pd_error(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     param_9,"could not query current working directory: %s",pcVar2,param_12,
                     param_13,param_14);
  }
  outlet_bang(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
              *(long **)(param_9 + 0x60));
  return;
}


