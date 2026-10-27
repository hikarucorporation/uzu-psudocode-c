// Function : libpd_message
// Namespace: 
// Entry    : 004d7270
// Prototype: undefined8 libpd_message(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, char * param_9, char * param_10, uint param_11, int * param_12, uint * param_13, uint * param_14)
// Body     : 004d7270 - 004d72cc


undefined8
libpd_message(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             double param_5,double param_6,double param_7,undefined8 param_8,char *param_9,
             char *param_10,uint param_11,int *param_12,uint *param_13,uint *param_14)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 extraout_XMM0_Qa;
  
  sys_lock();
  puVar2 = gensym(param_9);
  plVar1 = (long *)puVar2[1];
  if (plVar1 == (long *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    puVar2 = gensym(param_10);
    pd_typedmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1,
                 puVar2,param_11,param_12,param_13,param_14);
    uVar3 = 0;
  }
  sys_unlock();
  return uVar3;
}


