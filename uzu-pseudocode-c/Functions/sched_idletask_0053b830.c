// Function : sched_idletask
// Namespace: 
// Entry    : 0053b830
// Prototype: bool sched_idletask(undefined8 param_1, double param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0053b830 - 0053b964


bool sched_idletask(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 in_AL;
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 in_RCX;
  undefined8 in_R8;
  undefined8 in_R9;
  double extraout_XMM0_Qa;
  double dVar5;
  
  sys_lock();
  uVar3 = sys_pollgui();
  sys_unlock();
  uVar1 = sys_havegui();
  dVar5 = extraout_XMM0_Qa;
  iVar2 = sched_counter;
  if (((uVar1 == 0) && (*(int *)PTR_sys_hipriority_007154d8 != 0)) &&
     (sched_idletask_sched_nextpingtime < sched_counter)) {
    glob_watchdog();
    iVar2 = sched_counter;
    plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
    param_2 = (double)*(int *)(*(long *)(*plVar4 + 0x50) + 0x28);
    dVar5 = (double)*(float *)(*(long *)(*plVar4 + 0x50) + 0x30) / param_2;
    sched_idletask_sched_nextpingtime = iVar2 + (int)dVar5 * 2;
  }
  if (sched_idletask_sched_nextmeterpolltime < iVar2) {
    if ((sched_diored == '\x01') && (sched_dioredtime < iVar2)) {
      pdgui_vmess(dVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x656bc4,"i",0,
                  in_RCX,in_R8,in_R9,in_AL);
      sched_diored = '\0';
      iVar2 = sched_counter;
    }
    plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
    sched_idletask_sched_nextmeterpolltime =
         (int)(*(float *)(*(long *)(*plVar4 + 0x50) + 0x30) /
              (float)*(int *)(*(long *)(*plVar4 + 0x50) + 0x28)) + iVar2;
  }
  if ((int)uVar3 != 0) {
    return true;
  }
  if (*(code **)PTR_sys_idlehook_00715a30 == (code *)0x0) {
    return false;
  }
  iVar2 = (**(code **)PTR_sys_idlehook_00715a30)();
  return iVar2 != 0;
}


