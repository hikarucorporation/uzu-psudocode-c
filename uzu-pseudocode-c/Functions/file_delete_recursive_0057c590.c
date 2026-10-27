// Function : file_delete_recursive
// Namespace: 
// Entry    : 0057c590
// Prototype: undefined file_delete_recursive(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0057c590 - 0057c647


void file_delete_recursive
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
               char *param_13,undefined8 param_14)

{
  long *plVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar5;
  undefined8 extraout_XMM0_Qa_01;
  char acStack_3f8 [999];
  undefined1 local_11;
  
  do_expandpath((char *)*param_10,acStack_3f8,1000);
  local_11 = 0;
  sys_unbashfilename(acStack_3f8,acStack_3f8);
  local_11 = 0;
  iVar2 = nftw(acStack_3f8,nftw_cb,0x80,0xb);
  if (iVar2 == 0) {
    plVar1 = *(long **)(param_9 + 0x58);
    gensym(acStack_3f8);
    outlet_symbol(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                 );
    return;
  }
  uVar5 = extraout_XMM0_Qa;
  if (*(int *)(param_9 + 0x4c) != 0) {
    piVar3 = __errno_location();
    pcVar4 = strerror(*piVar3);
    uVar5 = pd_error(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     param_9,"unable to recursively delete \'%s\': %s",acStack_3f8,pcVar4,param_13,
                     param_14);
  }
  outlet_bang(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
              *(long **)(param_9 + 0x60));
  return;
}


