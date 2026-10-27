// Function : libpd_start_gui
// Namespace: 
// Entry    : 004d7a10
// Prototype: ulong libpd_start_gui(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, FILE * param_9, char * param_10, undefined8 param_11, undefined * param_12, char * param_13, FILE * param_14)
// Body     : 004d7a10 - 004d7a2b


ulong libpd_start_gui(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     FILE *param_9,char *param_10,undefined8 param_11,undefined *param_12,
                     char *param_13,FILE *param_14)

{
  ulong uVar1;
  undefined8 extraout_RDX;
  undefined8 uVar2;
  
  uVar2 = sys_lock();
  uVar1 = sys_startgui(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       param_10,extraout_RDX,param_12,param_13,param_14);
  sys_unlock();
  return uVar1 & 0xffffffff;
}


