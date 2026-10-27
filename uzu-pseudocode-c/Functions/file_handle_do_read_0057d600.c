// Function : file_handle_do_read
// Namespace: 
// Entry    : 0057d600
// Prototype: undefined file_handle_do_read(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, ulong param_12, char * param_13, undefined8 param_14)
// Body     : 0057d600 - 0057d801


void file_handle_do_read(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,long param_9,undefined8 param_10,undefined8 param_11,ulong param_12,
                        char *param_13,undefined8 param_14)

{
  int iVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined1 *__buf;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int *piVar7;
  char *pcVar8;
  float *pfVar9;
  ulong __nbytes;
  undefined1 *puVar10;
  undefined4 extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar11;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined8 uVar12;
  undefined4 extraout_XMM0_Db_03;
  undefined1 auStack_38 [8];
  
  __nbytes = (ulong)(float)param_1;
  if ((long)__nbytes < 1) {
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "cannot read %d bytes",__nbytes & 0xffffffff,param_12,param_13,param_14);
    return;
  }
  if (__nbytes < 100) {
    __buf = auStack_38 + -(__nbytes + 0xf & 0xfffffffffffffff0);
    puVar10 = __buf + __nbytes * -0x10;
    puVar3 = puVar10;
  }
  else {
    __buf = getbytes(__nbytes);
    puVar10 = getbytes(__nbytes << 4);
    param_1 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
    puVar3 = auStack_38;
  }
  if ((__buf == (undefined1 *)0x0) || (puVar10 == (undefined1 *)0x0)) {
    *(undefined8 *)(puVar3 + -8) = 0x57d6cb;
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "couldn\'t allocate buffer for %d bytes",__nbytes & 0xffffffff,param_12,param_13,
             param_14);
  }
  else {
    iVar1 = **(int **)(param_9 + 0x38);
    *(undefined8 *)(puVar3 + -8) = 0x57d6a1;
    uVar4 = read(iVar1,__buf,__nbytes);
    fVar11 = extraout_XMM0_Da_00;
    uVar13 = extraout_XMM0_Db_00;
    if (0 < (long)uVar4) {
      if (uVar4 == 1) {
        uVar5 = 0;
      }
      else {
        param_12 = uVar4 & 0xfffffffffffffffe;
        pfVar9 = (float *)(puVar10 + 0x18);
        uVar5 = 0;
        do {
          pfVar9[-6] = 1.4013e-45;
          pfVar9[-4] = (float)(byte)__buf[uVar5];
          pfVar9[-2] = 1.4013e-45;
          uVar13 = 0;
          fVar11 = (float)(byte)__buf[uVar5 + 1];
          *pfVar9 = fVar11;
          uVar5 = uVar5 + 2;
          pfVar9 = pfVar9 + 8;
        } while (param_12 != uVar5);
      }
      if ((uVar4 & 1) != 0) {
        param_12 = uVar5 * 0x10;
        *(undefined4 *)(puVar10 + param_12) = 1;
        uVar13 = 0;
        fVar11 = (float)(byte)__buf[uVar5];
        *(float *)(puVar10 + param_12 + 8) = fVar11;
      }
      if (0 < (long)uVar4) {
        plVar2 = *(long **)(param_9 + 0x58);
        *(undefined8 *)(puVar3 + -8) = 0x57d768;
        puVar6 = gensym("list");
        *(undefined8 *)(puVar3 + -8) = 0x57d779;
        outlet_list(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8,plVar2,puVar6,(int)uVar4,puVar10,param_13,
                    param_14);
        goto joined_r0x0057d7d7;
      }
    }
    uVar12 = CONCAT44(uVar13,fVar11);
    if ((uVar4 != 0) && (uVar12 = CONCAT44(uVar13,fVar11), *(int *)(param_9 + 0x4c) != 0)) {
      *(undefined8 *)(puVar3 + -8) = 0x57d793;
      piVar7 = __errno_location();
      iVar1 = *piVar7;
      *(undefined8 *)(puVar3 + -8) = 0x57d79a;
      pcVar8 = strerror(iVar1);
      *(undefined8 *)(puVar3 + -8) = 0x57d7ae;
      uVar12 = pd_error(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,param_9,"read failed: %s",pcVar8,param_12,
                        param_13,param_14);
    }
    piVar7 = *(int **)(param_9 + 0x38);
    iVar1 = *piVar7;
    if (-1 < iVar1) {
      *(undefined8 *)(puVar3 + -8) = 0x57d7be;
      sys_close(iVar1);
      uVar12 = CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03);
      piVar7 = *(int **)(param_9 + 0x38);
    }
    *piVar7 = -1;
    plVar2 = *(long **)(param_9 + 0x60);
    *(undefined8 *)(puVar3 + -8) = 0x57d7d3;
    outlet_bang(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2);
  }
joined_r0x0057d7d7:
  if (99 < __nbytes) {
    *(undefined8 *)(puVar3 + -8) = 0x57d7e4;
    freebytes(__buf);
    *(undefined8 *)(puVar3 + -8) = 0x57d7f3;
    freebytes(puVar10);
  }
  return;
}


