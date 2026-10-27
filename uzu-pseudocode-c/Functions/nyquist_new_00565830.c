// Function : nyquist_new
// Namespace: 
// Entry    : 00565830
// Prototype: long * nyquist_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00565830 - 00565914


long * nyquist_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,int *param_11,undefined8 param_12,
                  char *param_13,undefined8 param_14)

{
  char *__s1;
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  
  plVar2 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,nyquist_class,
                  param_10,param_11,param_12,param_13,param_14);
  plVar2[8] = 0;
  if (((int)param_10 != 0) && (*param_11 == 2)) {
    puVar3 = (undefined8 *)atom_getsymbolarg(0,(int)param_10,(long)param_11);
    __s1 = (char *)*puVar3;
    iVar1 = strcmp(__s1,"-khz");
    if (iVar1 == 0) {
      *(undefined4 *)(plVar2 + 8) = 1;
    }
    else {
      iVar1 = strcmp(__s1,"-ms");
      if (iVar1 == 0) {
        plVar2[8] = 0x100000001;
      }
      else {
        iVar1 = strcmp(__s1,"-sec");
        if (iVar1 != 0) {
          pd_error(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   (long)plVar2,"[nyquist~]: improper args",extraout_RDX,param_12,param_13,param_14)
          ;
          return (long *)0x0;
        }
        *(undefined4 *)((long)plVar2 + 0x44) = 1;
      }
    }
  }
  lVar4 = clock_new(plVar2,nyquist_tick);
  plVar2[6] = lVar4;
  plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_new(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             (long)plVar2,*plVar5 + 0x78,extraout_RDX_00,param_12,param_13,param_14);
  return plVar2;
}


