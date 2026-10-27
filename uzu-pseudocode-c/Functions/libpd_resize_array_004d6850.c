// Function : libpd_resize_array
// Namespace: 
// Entry    : 004d6850
// Prototype: undefined8 libpd_resize_array(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, char * param_9, ulong param_10, undefined8 param_11, undefined8 param_12, char * param_13, ulong param_14)
// Body     : 004d6850 - 004d68a0


undefined8
libpd_resize_array(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  double param_5,double param_6,double param_7,undefined8 param_8,char *param_9,
                  ulong param_10,undefined8 param_11,undefined8 param_12,char *param_13,
                  ulong param_14)

{
  undefined8 *puVar1;
  long *plVar2;
  int *piVar3;
  undefined8 extraout_RDX;
  undefined8 uVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  
  sys_lock();
  puVar1 = gensym(param_9);
  piVar3 = (int *)PTR_garray_class_00715780;
  plVar2 = pd_findbyclass(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          (long)puVar1,*(long *)PTR_garray_class_00715780);
  if (plVar2 == (long *)0x0) {
    uVar4 = 0xffffffff;
  }
  else {
    garray_resize_long(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       (long)plVar2,param_10,extraout_RDX,piVar3,param_13,param_14);
    uVar4 = 0;
  }
  sys_unlock();
  return uVar4;
}


