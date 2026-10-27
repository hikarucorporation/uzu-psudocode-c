// Function : writesf_new
// Namespace: 
// Entry    : 0059e950
// Prototype: long * writesf_new(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0059e950 - 0059eb2a


long * writesf_new(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  long *plVar6;
  long extraout_RAX;
  uint uVar7;
  ulong uVar8;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  
  uVar7 = (uint)param_1;
  uVar8 = (ulong)uVar7;
  uVar4 = (uint)(float)param_2;
  uVar9 = 0x40;
  if ((int)uVar7 < 0x40) {
    uVar9 = uVar7;
  }
  uVar7 = 1;
  if (0 < (int)uVar9) {
    uVar7 = uVar9;
  }
  if ((int)uVar4 < 1) {
    uVar11 = uVar7 << 0x12;
    pvVar5 = getbytes((ulong)uVar11);
    uVar1 = extraout_RDX_00;
    uVar2 = extraout_XMM0_Da_02;
    uVar3 = extraout_XMM0_Db_02;
  }
  else {
    uVar11 = 0x40000;
    if ((0x3ffff < uVar4) && (uVar11 = 0x1000000, uVar4 < 0x1000000)) {
      uVar11 = uVar4;
    }
    pvVar5 = getbytes((ulong)uVar11);
    uVar1 = extraout_RDX;
    uVar2 = extraout_XMM0_Da;
    uVar3 = extraout_XMM0_Db;
  }
  if (pvVar5 == (void *)0x0) {
    __arg = (long *)0x0;
  }
  else {
    __arg = pd_new(CONCAT44(uVar3,uVar2),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   writesf_class,param_10,uVar1,uVar8,param_13,param_14);
    if (1 < (int)uVar9) {
      iVar10 = uVar7 - 1;
      do {
        plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
        inlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,(long)__arg,(long)__arg,*plVar6 + 0xf0,*plVar6 + 0xf0,
                  param_13,param_14);
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    *(undefined4 *)(__arg + 0x5c) = 0;
    pthread_mutex_init((pthread_mutex_t *)(__arg + 0x5d),(pthread_mutexattr_t *)0x0);
    pthread_cond_init((pthread_cond_t *)(__arg + 0x62),(pthread_condattr_t *)0x0);
    pthread_cond_init((pthread_cond_t *)(__arg + 0x68),(pthread_condattr_t *)0x0);
    *(undefined4 *)(__arg + 0x4a) = 0x80;
    __arg[0x4c] = 0;
    __arg[7] = 0;
    canvas_getcurrent(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,
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
    *(uint *)((long)__arg + 0x294) = uVar7;
    *(undefined4 *)(__arg + 0x53) = 2;
    *(uint *)((long)__arg + 0x2ac) = uVar7 * 2;
    __arg[8] = (long)pvVar5;
    *(uint *)(__arg + 9) = uVar11;
    *(undefined4 *)(__arg + 0x4d) = 0;
    *(undefined4 *)(__arg + 0x59) = 0;
    __arg[0x58] = 0;
    plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
    __arg[0x70] = *plVar6;
    pthread_create((pthread_t *)(__arg + 0x6e),(pthread_attr_t *)0x0,writesf_child_main,__arg);
  }
  return __arg;
}


