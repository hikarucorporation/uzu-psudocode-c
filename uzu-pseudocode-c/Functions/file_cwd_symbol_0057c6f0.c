// Function : file_cwd_symbol
// Namespace: 
// Entry    : 0057c6f0
// Prototype: undefined file_cwd_symbol(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0057c6f0 - 0057c787


void file_cwd_symbol(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                    char *param_13,undefined8 param_14)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar4;
  char acStack_3f8 [999];
  undefined1 local_11;
  
  pcVar3 = acStack_3f8;
  do_expandpath((char *)*param_10,acStack_3f8,1000);
  local_11 = 0;
  sys_unbashfilename(acStack_3f8,acStack_3f8);
  local_11 = 0;
  iVar1 = chdir(acStack_3f8);
  if (iVar1 == 0) {
    file_cwd_bang(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                  pcVar3,extraout_RDX,param_12,param_13,param_14);
    return;
  }
  uVar4 = extraout_XMM0_Qa;
  if (*(int *)(param_9 + 0x4c) != 0) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    uVar4 = pd_error(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     param_9,"could not change the working directory to \'%s\': %s",acStack_3f8,
                     pcVar3,param_13,param_14);
  }
  outlet_bang(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
              *(long **)(param_9 + 0x60));
  return;
}


