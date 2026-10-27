// Function : sys_setalarm
// Namespace: 
// Entry    : 0053e2e0
// Prototype: undefined sys_setalarm(int param_1)
// Body     : 0053e2e0 - 0053e3bd


void sys_setalarm(int param_1)

{
  int iVar1;
  _union_1457 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  itimerval local_28;
  
  local_28.it_value.tv_sec = (__time_t)(param_1 / 1000000);
  local_28.it_interval.tv_sec = 0;
  local_28.it_interval.tv_usec = 0;
  local_28.it_value.tv_usec = (__suseconds_t)(param_1 % 1000000);
  if (param_1 % 1000000 == 0) {
    local_c0.sa_handler = (__sighandler_t)0x1;
  }
  else {
    local_c0.sa_handler = sys_alarmhandler;
  }
  local_38 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  iVar1 = sigaction(0xe,(sigaction *)&local_c0,(sigaction *)0x0);
  if (iVar1 < 0) {
    perror("sigaction");
  }
  setitimer(ITIMER_REAL,&local_28,(itimerval *)0x0);
  return;
}


