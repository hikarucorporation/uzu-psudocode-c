// Function : pd_init
// Namespace: 
// Entry    : 0053ad70
// Prototype: undefined pd_init(undefined8 param_1, undefined8 param_2, double param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0053ad70 - 0053adcc


void pd_init(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
            char *param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar3;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar4;
  
  puVar2 = PTR_pd_instances_00715a80;
  if (*(long *)PTR_pd_instances_00715a80 == 0) {
    uVar3 = 8;
    puVar1 = getbytes(8);
    *(undefined8 **)puVar2 = puVar1;
    puVar2 = PTR_pd_maininstance_00715748;
    *puVar1 = PTR_pd_maininstance_00715748;
    *(undefined4 *)PTR_pd_ninstances_00715d50 = 1;
    mess_init(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar3,
              param_10,extraout_RDX,puVar2,param_13,param_14);
    sched_init();
    uVar4 = sys_lock();
    uVar4 = obj_init(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar3 = conf_init(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar3,param_10,
                      extraout_RDX_00,puVar2,param_13,param_14);
    uVar3 = glob_init(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    garray_init(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    sys_unlock();
    return;
  }
  return;
}


