// Function : netreceive_new
// Namespace: 
// Entry    : 00582700
// Prototype: long * netreceive_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, ulong param_10, int * param_11, undefined8 param_12, char * param_13, char * param_14)
// Body     : 00582700 - 00582995


long * netreceive_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     undefined8 param_9,ulong param_10,int *param_11,undefined8 param_12,
                     char *param_13,char *param_14)

{
  char *__s1;
  int *piVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  void *pvVar5;
  undefined8 *puVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  uint uVar10;
  undefined4 extraout_XMM0_Da;
  float fVar11;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Db_07;
  undefined8 uVar12;
  undefined4 extraout_XMM0_Db_08;
  undefined4 extraout_XMM0_Db_09;
  undefined4 uVar13;
  undefined4 uVar14;
  
  uVar9 = param_10 & 0xffffffff;
  uVar10 = (uint)param_10;
  plVar4 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,netreceive_class,
                  param_10,param_11,param_12,param_13,param_14);
  *(undefined8 *)((long)plVar4 + 0x4c) = 1;
  *(undefined4 *)(plVar4 + 0x1f) = 0;
  *(undefined4 *)(plVar4 + 0x1d) = 0;
  bVar2 = false;
  pvVar5 = getbytes(0);
  plVar4[0x1e] = (long)pvVar5;
  pvVar5 = getbytes(0);
  uVar12 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  plVar4[0x20] = (long)pvVar5;
  *(undefined4 *)(plVar4 + 9) = 0xffffffff;
  if (uVar10 == 0) {
LAB_00582911:
    uVar10 = 0;
  }
  else {
    if (*param_11 == 1) {
      fVar11 = (float)atom_getfloatarg(1,uVar10,(long)param_11);
      uVar13 = 0;
      uVar14 = 0;
      *(uint *)((long)plVar4 + 0x4c) = (fVar11 != 0.0) + 1;
      puVar6 = (undefined8 *)atom_getsymbolarg(2,uVar10,(long)param_11);
      iVar3 = strcmp((char *)*puVar6,"old");
      uVar12 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
      param_2 = CONCAT44(uVar14,uVar13);
      uVar9 = (ulong)(iVar3 == 0);
      uVar8 = (uint)(iVar3 == 0);
      *(uint *)(plVar4 + 0x1f) = uVar8;
      bVar2 = false;
      uVar10 = 1;
      goto joined_r0x0058298f;
    }
    if (*param_11 == 2) {
      bVar2 = false;
      piVar1 = param_11;
      do {
        uVar10 = (uint)uVar9;
        param_11 = piVar1 + 4;
        __s1 = (char *)**(undefined8 **)(piVar1 + 2);
        if (*__s1 != '-') {
          uVar8 = *(uint *)(plVar4 + 0x1f);
          uVar9 = (ulong)uVar8;
          param_11 = piVar1;
          goto joined_r0x0058298f;
        }
        iVar3 = strcmp(__s1,"-b");
        if (iVar3 == 0) {
          *(undefined4 *)(plVar4 + 10) = 1;
          uVar13 = extraout_XMM0_Da_05;
          uVar14 = extraout_XMM0_Db_05;
joined_r0x0058285a:
          uVar12 = CONCAT44(uVar14,uVar13);
        }
        else {
          iVar3 = strcmp(__s1,"-u");
          uVar12 = CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_06);
          if (iVar3 == 0) {
            *(undefined4 *)((long)plVar4 + 0x4c) = 2;
          }
          else {
            iVar3 = strcmp(__s1,"-f");
            if (iVar3 == 0) {
              bVar2 = true;
              uVar13 = extraout_XMM0_Da_07;
              uVar14 = extraout_XMM0_Db_07;
              goto joined_r0x0058285a;
            }
            uVar12 = pd_error(CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_07),param_2,param_3,
                              param_4,param_5,param_6,param_7,param_8,(long)plVar4,
                              "netreceive: unknown flag ...",extraout_RDX_01,param_12,param_13,
                              param_14);
            uVar12 = postatom(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar10,
                              piVar1,extraout_RDX_02,param_12,param_13,param_14);
            uVar12 = endpost(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
          }
        }
        if (uVar10 == 1) goto LAB_00582911;
        uVar10 = uVar10 - 1;
        uVar9 = (ulong)uVar10;
        piVar1 = param_11;
      } while (*param_11 == 2);
    }
  }
  uVar8 = *(uint *)(plVar4 + 0x1f);
  uVar9 = (ulong)uVar8;
joined_r0x0058298f:
  if (uVar8 == 0) {
    plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
    plVar7 = outlet_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,(long)plVar4,*plVar7 + 0xd8,extraout_RDX,
                        uVar9,param_13,param_14);
    uVar12 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
    plVar4[6] = (long)plVar7;
    iVar3 = *(int *)((long)plVar4 + 0x4c);
  }
  else {
    plVar4[6] = 0;
    iVar3 = *(int *)((long)plVar4 + 0x4c);
  }
  if (iVar3 == 1) {
    plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
    plVar7 = outlet_new(CONCAT44(extraout_XMM0_Db_08,extraout_XMM0_Da_08),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,(long)plVar4,*plVar7 + 0x78,extraout_RDX_03,
                        uVar9,param_13,param_14);
    uVar12 = CONCAT44(extraout_XMM0_Db_09,extraout_XMM0_Da_09);
    plVar4[7] = (long)plVar7;
  }
  else {
    plVar4[7] = 0;
  }
  if (bVar2) {
    plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
    plVar7 = outlet_new(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,(long)plVar4,*plVar7 + 0x90,extraout_RDX_00,
                        uVar9,param_13,param_14);
    uVar12 = CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04);
  }
  else {
    plVar7 = (long *)0x0;
  }
  plVar4[8] = (long)plVar7;
  netreceive_listen(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar4,0,
                    uVar10,param_11,param_13,param_14);
  return plVar4;
}


