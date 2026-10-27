// Function : libpd_openfile
// Namespace: 
// Entry    : 004d5720
// Prototype: long libpd_openfile(undefined8 param_1, undefined8 param_2, double param_3, double param_4, double param_5, double param_6, double param_7, undefined8 param_8, char * param_9, char * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 * param_14)
// Body     : 004d5720 - 004d576b


long libpd_openfile(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                   double param_5,double param_6,double param_7,undefined8 param_8,char *param_9,
                   char *param_10,undefined8 param_11,undefined8 param_12,char *param_13,
                   undefined8 *param_14)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 extraout_RDX;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 extraout_XMM0_Qa;
  
  pcVar4 = param_10;
  pcVar5 = param_9;
  uVar6 = sys_lock();
  pd_globallock(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar5,pcVar4,
                extraout_RDX,param_12,param_13,param_14);
  ppuVar1 = (undefined **)gensym(param_9);
  puVar2 = gensym(param_10);
  lVar3 = glob_evalfile(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                        ppuVar1,puVar2,param_12,param_13,param_14);
  pd_globalunlock();
  sys_unlock();
  return lVar3;
}


