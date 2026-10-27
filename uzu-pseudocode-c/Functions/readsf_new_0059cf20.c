// Function : readsf_new
// Namespace: 
// Entry    : 0059cf20
// Prototype: long * readsf_new(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0059cf20 - 0059d112


long * readsf_new(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 char *param_13,undefined8 param_14)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  void *pvVar5;
  long *__arg;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long extraout_RAX;
  uint uVar10;
  ulong uVar11;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  uint uVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  
  uVar10 = (uint)param_1;
  uVar11 = (ulong)uVar10;
  uVar4 = (uint)(float)param_2;
  uVar12 = 0x40;
  if ((int)uVar10 < 0x40) {
    uVar12 = uVar10;
  }
  uVar10 = 1;
  if (0 < (int)uVar12) {
    uVar10 = uVar12;
  }
  if ((int)uVar4 < 1) {
    uVar12 = uVar10 << 0x12;
    pvVar5 = getbytes((ulong)uVar12);
    uVar1 = extraout_RDX_02;
    uVar2 = extraout_XMM0_Da_03;
    uVar3 = extraout_XMM0_Db_03;
  }
  else {
    uVar12 = 0x40000;
    if ((0x3ffff < uVar4) && (uVar12 = 0x1000000, uVar4 < 0x1000000)) {
      uVar12 = uVar4;
    }
    pvVar5 = getbytes((ulong)uVar12);
    uVar1 = extraout_RDX;
    uVar2 = extraout_XMM0_Da;
    uVar3 = extraout_XMM0_Db;
  }
  if (pvVar5 == (void *)0x0) {
    __arg = (long *)0x0;
  }
  else {
    __arg = pd_new(CONCAT44(uVar3,uVar2),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   readsf_class,param_10,uVar1,uVar11,param_13,param_14);
    uVar4 = uVar10;
    do {
      puVar6 = gensym("signal");
      outlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,(long)__arg,(long)puVar6,extraout_RDX_00,uVar11,param_13,
                 param_14);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    *(uint *)((long)__arg + 0x4c) = uVar10;
    plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
    plVar8 = outlet_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,(long)__arg,*plVar7 + 0xa8,extraout_RDX_01,
                        uVar11,param_13,param_14);
    __arg[0x4b] = (long)plVar8;
    pthread_mutex_init((pthread_mutex_t *)(__arg + 0x5d),(pthread_mutexattr_t *)0x0);
    pthread_cond_init((pthread_cond_t *)(__arg + 0x62),(pthread_condattr_t *)0x0);
    pthread_cond_init((pthread_cond_t *)(__arg + 0x68),(pthread_condattr_t *)0x0);
    *(undefined4 *)(__arg + 0x4a) = 0x80;
    *(undefined4 *)(__arg + 0x4c) = 0;
    lVar9 = clock_new(__arg,readsf_tick);
    __arg[7] = lVar9;
    canvas_getcurrent(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8);
    __arg[6] = extraout_RAX;
    __arg[0x50] = 0;
    __arg[0x51] = 0;
    __arg[0x52] = 0;
    __arg[0x53] = 0;
    __arg[0x54] = 0;
    __arg[0x55] = 0;
    *(undefined4 *)(__arg + 0x50) = 0xffffffff;
    __arg[0x56] = 0x7fffffffffffffff;
    *(undefined8 *)((long)__arg + 0x294) = 0x200000001;
    *(undefined4 *)((long)__arg + 0x2ac) = 2;
    __arg[8] = (long)pvVar5;
    *(uint *)(__arg + 9) = uVar12;
    *(undefined4 *)(__arg + 0x4d) = 0;
    *(undefined4 *)(__arg + 0x59) = 0;
    __arg[0x58] = 0;
    __arg[0x6f] = 0;
    __arg[0x70] = *plVar7;
    pthread_create((pthread_t *)(__arg + 0x6e),(pthread_attr_t *)0x0,readsf_child_main,__arg);
  }
  return __arg;
}


