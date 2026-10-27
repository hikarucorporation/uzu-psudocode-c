// Function : sigfiddle_doinit
// Namespace: 
// Entry    : 004e14b0
// Prototype: undefined8 sigfiddle_doinit(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, long param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 004e14b0 - 004e17b3


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
sigfiddle_doinit(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,long param_10,long param_11,long param_12,char *param_13,
                undefined8 param_14)

{
  int iVar1;
  long lVar2;
  void *__s;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined8 uVar10;
  
  pcVar9 = param_13;
  if (param_13 == (char *)0x0 && param_12 == 0) {
    pcVar9 = (char *)0x0;
  }
  lVar4 = 0x14;
  if (param_13 != (char *)0x0 || param_12 != 0) {
    lVar4 = param_12;
  }
  if (99 < lVar4) {
    lVar4 = 100;
  }
  pcVar8 = (char *)0x64;
  if ((long)pcVar9 < 100) {
    pcVar8 = pcVar9;
  }
  if ((long)pcVar9 < 1) {
    pcVar8 = (char *)0x0;
  }
  lVar7 = 3;
  if (param_11 < 3) {
    lVar7 = param_11;
  }
  lVar5 = lVar4;
  if (lVar4 < 0) {
    lVar5 = 0;
  }
  lVar2 = 0x400;
  if (param_10 != 0) {
    lVar2 = param_10;
  }
  iVar1 = sigfiddle_setnpoints
                    (CONCAT44((int)((ulong)param_1 >> 0x20),(float)lVar2),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,param_13,
                     param_14);
  uVar10 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  uVar3 = extraout_RDX;
  if (iVar1 != 0) {
    __s = getbytes((long)pcVar8 * 8);
    uVar10 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
    if (__s != (void *)0x0) {
      if (0 < (long)pcVar9) {
        pcVar9 = (char *)0x1;
        if (1 < (long)pcVar8) {
          pcVar9 = pcVar8;
        }
        memset(__s,0,(long)pcVar9 << 3);
      }
      *(void **)(param_9 + 0x50) = __s;
      *(int *)(param_9 + 0x58) = (int)pcVar8;
      *(int *)(param_9 + 0x5c) = (int)lVar5;
      *(undefined8 *)(param_9 + 0x60) = 0;
      *(undefined4 *)(param_9 + 0x6c) = 0x472c4400;
      *(undefined8 *)(param_9 + 0x70) = 0;
      *(undefined8 *)(param_9 + 0x78) = 0;
      *(undefined8 *)(param_9 + 0x80) = 0;
      *(undefined8 *)(param_9 + 0x88) = 0;
      *(undefined8 *)(param_9 + 0x90) = 0;
      *(undefined8 *)(param_9 + 0x98) = 0;
      *(undefined8 *)(param_9 + 0xa0) = 0;
      *(undefined8 *)(param_9 + 0xa8) = 0;
      *(undefined8 *)(param_9 + 0xb0) = 0;
      *(undefined8 *)(param_9 + 0xb8) = 0;
      *(undefined8 *)(param_9 + 0xc0) = 0;
      *(undefined8 *)(param_9 + 200) = 0;
      *(undefined8 *)(param_9 + 0xd0) = 0;
      *(undefined8 *)(param_9 + 0xd8) = 0;
      *(undefined8 *)(param_9 + 0xe0) = 0;
      *(undefined8 *)(param_9 + 0xe8) = 0;
      *(undefined8 *)(param_9 + 0xf0) = 0;
      *(undefined8 *)(param_9 + 0xf8) = 0;
      *(undefined8 *)(param_9 + 0x100) = 0;
      *(undefined8 *)(param_9 + 0x108) = 0;
      *(undefined8 *)(param_9 + 0x10c) = 0;
      *(undefined8 *)(param_9 + 0x114) = 0;
      *(undefined8 *)(param_9 + 0x120) = 0;
      *(undefined8 *)(param_9 + 0x128) = 0;
      *(undefined8 *)(param_9 + 0x1cc) = 0;
      *(undefined8 *)(param_9 + 0x1d4) = 0;
      *(undefined8 *)(param_9 + 0x1c0) = 0;
      *(undefined8 *)(param_9 + 0x1c8) = 0;
      *(undefined8 *)(param_9 + 0x1b0) = 0;
      *(undefined8 *)(param_9 + 0x1b8) = 0;
      *(undefined8 *)(param_9 + 0x1a0) = 0;
      *(undefined8 *)(param_9 + 0x1a8) = 0;
      *(undefined8 *)(param_9 + 400) = 0;
      *(undefined8 *)(param_9 + 0x198) = 0;
      *(undefined8 *)(param_9 + 0x180) = 0;
      *(undefined8 *)(param_9 + 0x188) = 0;
      *(undefined8 *)(param_9 + 0x170) = 0;
      *(undefined8 *)(param_9 + 0x178) = 0;
      *(undefined8 *)(param_9 + 0x160) = 0;
      *(undefined8 *)(param_9 + 0x168) = 0;
      *(undefined8 *)(param_9 + 0x150) = 0;
      *(undefined8 *)(param_9 + 0x158) = 0;
      *(undefined8 *)(param_9 + 0x140) = 0;
      *(undefined8 *)(param_9 + 0x148) = 0;
      *(undefined8 *)(param_9 + 0x130) = 0;
      *(undefined8 *)(param_9 + 0x138) = 0;
      *(undefined8 *)(param_9 + 0x1e0) = 0;
      *(undefined8 *)(param_9 + 0x1e8) = 0;
      *(undefined8 *)(param_9 + 0x1f0) = 0;
      *(undefined8 *)(param_9 + 0x1f8) = 0;
      *(undefined8 *)(param_9 + 0x200) = 0;
      *(undefined8 *)(param_9 + 0x208) = 0;
      *(undefined8 *)(param_9 + 0x210) = 0;
      *(undefined8 *)(param_9 + 0x218) = 0;
      *(undefined8 *)(param_9 + 0x220) = 0;
      *(undefined8 *)(param_9 + 0x228) = 0;
      *(undefined8 *)(param_9 + 0x230) = 0;
      *(undefined8 *)(param_9 + 0x238) = 0;
      *(undefined8 *)(param_9 + 0x240) = 0;
      *(undefined8 *)(param_9 + 0x248) = 0;
      *(undefined8 *)(param_9 + 0x250) = 0;
      *(undefined8 *)(param_9 + 600) = 0;
      *(undefined8 *)(param_9 + 0x260) = 0;
      *(undefined8 *)(param_9 + 0x268) = 0;
      *(undefined8 *)(param_9 + 0x270) = 0;
      *(undefined8 *)(param_9 + 0x278) = 0;
      *(undefined8 *)(param_9 + 0x280) = 0;
      *(undefined8 *)(param_9 + 0x288) = 0;
      *(undefined8 *)(param_9 + 0x28c) = 0;
      *(undefined8 *)(param_9 + 0x294) = 0;
      *(undefined8 *)(param_9 + 0x2a0) = 0;
      *(undefined8 *)(param_9 + 0x2a8) = 0;
      *(undefined4 *)(param_9 + 0x2b0) = 0;
      uVar6 = (undefined4)lVar7;
      if (lVar7 < 1) {
        uVar6 = 0;
      }
      if (param_11 < 1 && 0 < lVar4) {
        uVar6 = 1;
      }
      *(undefined4 *)(param_9 + 0x2b4) = uVar6;
      *(undefined8 *)(param_9 + 0x2b8) = 0;
      *(undefined8 *)(param_9 + 0x2c0) = 0;
      *(undefined8 *)(param_9 + 0x2c8) = 0;
      *(undefined8 *)(param_9 + 0x2d0) = 0;
      *(undefined8 *)(param_9 + 0x2d8) = 0;
      *(undefined8 *)(param_9 + 0x2e0) = 0;
      *(undefined8 *)(param_9 + 0x2e8) = 0;
      *(undefined8 *)(param_9 + 0x2f0) = 0;
      *(undefined8 *)(param_9 + 0x2f8) = 0;
      *(undefined8 *)(param_9 + 0x300) = 0;
      *(undefined8 *)(param_9 + 0x308) = 0;
      uVar10 = _UNK_006525b8;
      *(undefined8 *)(param_9 + 0x310) = _DAT_006525b0;
      *(undefined8 *)(param_9 + 0x318) = uVar10;
      uVar10 = _UNK_006525c8;
      *(undefined8 *)(param_9 + 800) = _DAT_006525c0;
      *(undefined8 *)(param_9 + 0x328) = uVar10;
      *(undefined8 *)(param_9 + 0x330) = 0x40e000003f000000;
      *(undefined4 *)(param_9 + 0x340) = 0;
      return 1;
    }
    uVar3 = extraout_RDX_00;
    if (*(void **)(param_9 + 0x38) != (void *)0x0) {
      uVar10 = freebytes(*(void **)(param_9 + 0x38));
      *(undefined8 *)(param_9 + 0x38) = 0;
      uVar3 = extraout_RDX_01;
    }
    if (*(void **)(param_9 + 0x40) != (void *)0x0) {
      uVar10 = freebytes(*(void **)(param_9 + 0x40));
      *(undefined8 *)(param_9 + 0x40) = 0;
      uVar3 = extraout_RDX_02;
    }
    if (*(void **)(param_9 + 0x48) != (void *)0x0) {
      uVar10 = freebytes(*(void **)(param_9 + 0x48));
      *(undefined8 *)(param_9 + 0x48) = 0;
      uVar3 = extraout_RDX_03;
    }
    *(undefined4 *)(param_9 + 0x68) = 0;
  }
  pd_error(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"fiddle~: out of memory"
           ,uVar3,param_12,param_13,param_14);
  return 0;
}


