// Function : libpd_init
// Namespace: 
// Entry    : 004d5430
// Prototype: undefined8 libpd_init(undefined8 param_1, undefined8 param_2, double param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 004d5430 - 004d5603


undefined8
libpd_init(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  undefined8 *puVar4;
  void *in_RCX;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **__ptr;
  char *in_R8;
  undefined8 in_R9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Db_01;
  
  if (s_initialized != '\0') {
    return 0xffffffff;
  }
  s_initialized = 1;
  uVar6 = 1;
  signal(8,(__sighandler_t)0x1);
  __ptr = &PTR_007153d8;
  lVar1 = __tls_get_addr();
  if (*(int *)(lVar1 + 0xa0) < 0x20) {
    __ptr = *(undefined ***)(lVar1 + 0xa8);
    uVar6 = 0x200;
    pvVar2 = realloc(__ptr,0x200);
    uVar5 = extraout_RDX_00;
    uVar7 = extraout_XMM0_Da_00;
    uVar8 = extraout_XMM0_Db_00;
    if (pvVar2 == (void *)0x0) goto LAB_004d54c1;
    *(void **)(lVar1 + 0xa8) = pvVar2;
    *(undefined4 *)(lVar1 + 0xa0) = 0x20;
  }
  else {
    pvVar2 = *(void **)(lVar1 + 0xa8);
    uVar5 = extraout_RDX;
    uVar7 = extraout_XMM0_Da;
    uVar8 = extraout_XMM0_Db;
  }
  *(undefined4 *)(lVar1 + 0xb0) = 0;
  *(void **)(lVar1 + 0xb8) = pvVar2;
  in_RCX = pvVar2;
LAB_004d54c1:
  *(undefined4 *)PTR_sys_externalschedlib_00715868 = 0;
  *(undefined4 *)PTR_sys_printtostderr_00715f78 = 0;
  *(undefined4 *)PTR_sys_usestdpath_00715ef8 = 0;
  *(undefined4 *)PTR_sys_debuglevel_007154a8 = 0;
  *(undefined4 *)PTR_sys_noloadbang_00715fb0 = 0;
  *(undefined4 *)PTR_sys_hipriority_007154d8 = 0;
  *(undefined4 *)PTR_sys_nmidiin_00715848 = 0;
  *(undefined4 *)PTR_sys_nmidiout_007155a0 = 0;
  pd_init(CONCAT44(uVar8,uVar7),param_2,param_3,param_4,param_5,param_6,param_7,param_8,__ptr,uVar6,
          uVar5,in_RCX,in_R8,in_R9);
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar1 = *(long *)(*plVar3 + 0x50);
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined4 *)(lVar1 + 0x28) = 0x40;
  *(undefined **)(lVar1 + 0x60) = PTR_libpd_mainimp_00715cf0;
  uVar6 = sys_init_fdpoll();
  libpdreceive_setup(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined8 *)(*(long *)(*plVar3 + 0x50) + 8) = 0;
  puVar4 = gensym("");
  *(undefined8 **)PTR_sys_libdir_00715520 = puVar4;
  uVar6 = post(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,"pd %d.%d.%d%s");
  uVar6 = bob_tilde_setup(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar6 = bonk_tilde_setup(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar6 = choice_setup(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar6 = fiddle_tilde_setup(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar6 = loop_tilde_setup(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar6 = lrshift_tilde_setup(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar6 = pd_tilde_setup(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar6 = pique_setup(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar6 = sigmund_tilde_setup(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar6 = stdout_setup(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  externals_setup(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  setlocale(1,"C");
  return 0;
}


