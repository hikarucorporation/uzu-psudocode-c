// Function : libpdreceive_setup
// Namespace: 
// Entry    : 0055d8b0
// Prototype: undefined libpdreceive_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0055d8b0 - 0055d969


void libpdreceive_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  undefined8 extraout_XMM0_Qa;
  uint unaff_retaddr;
  
  sys_lock();
  piVar1 = (int *)gensym("libpd_receive");
  libpdrec_class =
       class_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar1,
                 0x55d860,libpdreceive_free,0x40,(char *)0x0,7,0,unaff_retaddr);
  class_addbang((long)libpdrec_class,libpdrecbang);
  class_doaddfloat((long)libpdrec_class,libpdrecfloat);
  class_addsymbol((long)libpdrec_class,libpdrecsymbol);
  class_addpointer((long)libpdrec_class,libpdrecpointer);
  class_addlist((long)libpdrec_class,libpdreclist);
  class_addanything((long)libpdrec_class,libpdrecanything);
  sys_unlock();
  return;
}


