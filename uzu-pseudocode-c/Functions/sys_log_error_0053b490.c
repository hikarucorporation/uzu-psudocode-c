// Function : sys_log_error
// Namespace: 
// Entry    : 0053b490
// Prototype: undefined8 sys_log_error(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, int param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 0053b490 - 0053b50a


undefined8
sys_log_error(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,int param_9
             ,undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
             undefined8 param_14)

{
  undefined8 in_RAX;
  long *plVar1;
  
  if (((param_9 != 0) && ((sched_diored & 1) == 0)) && (sched_dioredtime <= sched_counter)) {
    pdgui_vmess(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x656bc4,"i",1,
                param_12,param_13,param_14,(char)in_RAX);
    sched_diored = 1;
  }
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  sched_dioredtime =
       (int)(*(float *)(*(long *)(*plVar1 + 0x50) + 0x30) /
            (float)*(int *)(*(long *)(*plVar1 + 0x50) + 0x28)) + sched_counter;
  return in_RAX;
}


