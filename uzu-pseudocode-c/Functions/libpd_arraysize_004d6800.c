// Function : libpd_arraysize
// Namespace: 
// Entry    : 004d6800
// Prototype: undefined4 libpd_arraysize(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, char * param_9)
// Body     : 004d6800 - 004d6848


undefined4
libpd_arraysize(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               char *param_9)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  int *piVar4;
  undefined8 extraout_RDX;
  long lVar5;
  char *in_R8;
  undefined8 in_R9;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  
  sys_lock();
  puVar2 = gensym(param_9);
  lVar5 = *(long *)PTR_garray_class_00715780;
  piVar4 = (int *)PTR_garray_class_00715780;
  plVar3 = pd_findbyclass(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          (long)puVar2,lVar5);
  if (plVar3 == (long *)0x0) {
    sys_unlock();
    return 0xffffffff;
  }
  uVar1 = garray_npoints(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,(long)plVar3,lVar5,extraout_RDX,piVar4,in_R8,in_R9);
  sys_unlock();
  return uVar1;
}


