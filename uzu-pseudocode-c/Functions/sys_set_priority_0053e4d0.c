// Function : sys_set_priority
// Namespace: 
// Entry    : 0053e4d0
// Prototype: undefined sys_set_priority(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, int param_9)
// Body     : 0053e4d0 - 0053e5fe


/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */

void sys_set_priority(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     int param_9)

{
  int iVar1;
  undefined8 uVar2;
  sched_param param2;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined1 in_stack_ffffffffffffffc8;
  sched_param local_30 [2];
  rlimit local_28;
  
  sched_get_priority_min(1);
  iVar1 = sched_get_priority_max(1);
  param2.__sched_priority = iVar1 - 7;
  uVar2 = 0;
  if (param_9 != 1) {
    param2.__sched_priority = 0;
  }
  if (param_9 == 2) {
    param2.__sched_priority = iVar1 - 5;
  }
  local_30[0].__sched_priority = param2.__sched_priority;
  iVar1 = sched_setscheduler(0,(uint)(param_9 != 0),local_30);
  if (iVar1 < 0) {
    if (param_9 == 2) {
      fprintf(*(FILE **)PTR_stderr_00715948,"priority %d scheduling failed.\n",
              param2.__sched_priority);
      goto LAB_0053e574;
    }
    post(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,param_7
         ,param_8,"priority %d scheduling failed; running at normal priority");
  }
  else {
    if (param_9 == 1) {
      logpost(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
              param_7,param_8,0,4,"priority %d scheduling enabled.\n",
              (ulong)(uint)param2.__sched_priority,in_R8,in_R9,in_stack_ffffffffffffffc8);
      goto LAB_0053e574;
    }
    logpost(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
            param_7,param_8,0,4,"running at normal (non-real-time) priority.\n",uVar2,in_R8,in_R9,
            in_stack_ffffffffffffffc8);
  }
  if (param_9 == 0) {
    munlockall();
    return;
  }
LAB_0053e574:
  local_28.rlim_cur = 0;
  local_28.rlim_max = 0;
  setrlimit(__RLIMIT_MEMLOCK,&local_28);
  iVar1 = mlockall(2);
  if ((iVar1 == -1) || (*(int *)PTR_sys_verbose_00715ce0 == 0)) {
    return;
  }
  fwrite("memory locking enabled.\n",0x18,1,*(FILE **)PTR_stderr_00715948);
  return;
}


