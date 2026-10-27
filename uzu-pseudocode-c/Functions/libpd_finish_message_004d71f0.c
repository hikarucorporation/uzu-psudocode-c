// Function : libpd_finish_message
// Namespace: 
// Entry    : 004d71f0
// Prototype: undefined8 libpd_finish_message(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, char * param_9, char * param_10, undefined8 param_11, undefined8 param_12, uint * param_13, uint * param_14)
// Body     : 004d71f0 - 004d7260


undefined8
libpd_finish_message
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          double param_5,double param_6,double param_7,undefined8 param_8,char *param_9,
          char *param_10,undefined8 param_11,undefined8 param_12,uint *param_13,uint *param_14)

{
  uint uVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 extraout_XMM0_Qa;
  
  lVar4 = __tls_get_addr(&PTR_007153d8);
  uVar1 = *(uint *)(lVar4 + 0xb0);
  piVar2 = *(int **)(lVar4 + 0xa8);
  sys_lock();
  puVar5 = gensym(param_9);
  plVar3 = (long *)puVar5[1];
  if (plVar3 == (long *)0x0) {
    uVar6 = 0xffffffff;
  }
  else {
    puVar5 = gensym(param_10);
    pd_typedmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3,
                 puVar5,uVar1,piVar2,param_13,param_14);
    uVar6 = 0;
  }
  sys_unlock();
  return uVar6;
}


