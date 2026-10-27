// Function : new_anything
// Namespace: 
// Entry    : 00535a50
// Prototype: undefined new_anything(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long * param_9, undefined8 * param_10, uint param_11, int * param_12, uint * param_13, uint * param_14)
// Body     : 00535a50 - 00535b35


void new_anything(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 double param_5,double param_6,double param_7,undefined8 param_8,long *param_9,
                 undefined8 *param_10,uint param_11,int *param_12,uint *param_13,uint *param_14)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar7;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  
  if (1000 < tryingalready) {
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
             "maximum object loading depth %d reached",1000,param_12,(char *)param_13,param_14);
    return;
  }
  ppuVar6 = &PTR_007159b0;
  puVar5 = param_10;
  plVar2 = (long *)__tls_get_addr();
  puVar4 = (undefined8 *)(*plVar2 + 0xd8);
  if (puVar4 == param_10) {
    pd_error(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
             "object name \"%s\" not allowed",*param_10,puVar4,(char *)param_13,param_14);
    return;
  }
  *(undefined8 *)(*plVar2 + 0x58) = 0;
  class_loadsym = param_10;
  uVar7 = pd_globallock(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        ppuVar6,puVar5,extraout_RDX,puVar4,(char *)param_13,param_14);
  lVar3 = canvas_getcurrent(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  iVar1 = sys_load_lib(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       lVar3,(undefined *)*param_10,extraout_RDX_00,puVar4,(char *)param_13,param_14
                      );
  if (iVar1 == 0) {
    class_loadsym = (undefined8 *)0x0;
    pd_globalunlock();
    return;
  }
  tryingalready = tryingalready + 1;
  pd_typedmess(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               param_10,param_11,param_12,param_13,param_14);
  tryingalready = tryingalready + -1;
  return;
}


