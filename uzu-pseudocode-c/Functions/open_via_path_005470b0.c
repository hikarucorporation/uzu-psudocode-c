// Function : open_via_path
// Namespace: 
// Entry    : 005470b0
// Prototype: undefined open_via_path(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, char * param_9, char * param_10, char * param_11, char * param_12, undefined8 * param_13, ulong param_14)
// Body     : 005470b0 - 0054711d


void open_via_path(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  char *param_9,char *param_10,char *param_11,char *param_12,undefined8 *param_13,
                  ulong param_14)

{
  long *plVar1;
  undefined8 extraout_XMM0_Qa;
  undefined8 in_stack_ffffffffffffffb8;
  
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  do_open_via_path(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                   param_10,param_11,param_12,param_13,param_14 & 0xffffffff,
                   in_stack_ffffffffffffffb8,*(undefined8 **)(*(long *)(*plVar1 + 0x50) + 8),1);
  return;
}


