// Function : file_handle_do_write
// Namespace: 
// Entry    : 0057d4b0
// Prototype: undefined file_handle_do_write(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, uint param_10, int * param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 0057d4b0 - 0057d5fd


void file_handle_do_write
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,uint param_10,int *param_11,int *param_12,char *param_13,
               undefined8 param_14)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  undefined1 *__buf;
  ulong uVar4;
  int *piVar5;
  char *pcVar6;
  ulong *puVar7;
  ulong __n;
  long lVar8;
  undefined4 extraout_XMM0_Da;
  float fVar9;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined8 uVar10;
  undefined4 extraout_XMM0_Db_01;
  ulong local_48;
  long local_40;
  uint local_34;
  
  __n = 0;
  if (-1 < (int)param_10) {
    __n = (ulong)param_10;
  }
  local_48 = (ulong)param_10;
  local_40 = param_9;
  if ((int)param_10 < 100) {
    __buf = (undefined1 *)((long)&local_48 - ((long)(int)param_10 + 0xfU & 0xfffffffffffffff0));
    puVar7 = (ulong *)__buf;
  }
  else {
    __buf = getbytes(local_48);
    puVar7 = &local_48;
    if (__buf == (void *)0x0) {
      __buf = (void *)0x0;
      pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
               param_7,param_8,local_40,"could not allocate %d bytes for writing",(ulong)param_10,
               param_12,param_13,param_14);
      puVar7 = &local_48;
      goto LAB_0057d5e3;
    }
  }
  local_34 = param_10;
  if (0 < (int)param_10) {
    lVar8 = 0;
    do {
      *(undefined8 *)((long)puVar7 + -8) = 0x57d528;
      fVar9 = (float)atom_getfloat(param_11);
      *(char *)((long)__buf + lVar8) = (char)(int)fVar9;
      lVar8 = lVar8 + 1;
      param_11 = param_11 + 4;
    } while ((int)param_10 != lVar8);
  }
  lVar8 = local_40;
  iVar1 = **(int **)(local_40 + 0x38);
  *(undefined8 *)((long)puVar7 + -8) = 0x57d552;
  uVar4 = write(iVar1,__buf,__n);
  if ((-1 < (long)uVar4) && (uVar4 < __n)) {
    param_12 = *(int **)(lVar8 + 0x38);
    iVar1 = *param_12;
    *(undefined8 *)((long)puVar7 + -8) = 0x57d571;
    uVar4 = write(iVar1,(void *)((long)__buf + uVar4),__n - uVar4);
  }
  uVar3 = local_34;
  if ((long)uVar4 < 0) {
    *(undefined8 *)((long)puVar7 + -8) = 0x57d587;
    piVar5 = __errno_location();
    iVar1 = *piVar5;
    *(undefined8 *)((long)puVar7 + -8) = 0x57d58e;
    pcVar6 = strerror(iVar1);
    *(undefined8 *)((long)puVar7 + -8) = 0x57d5a2;
    uVar10 = pd_error(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,lVar8,"write failed: %s",pcVar6,param_12,
                      param_13,param_14);
    piVar5 = *(int **)(lVar8 + 0x38);
    iVar1 = *piVar5;
    if (-1 < iVar1) {
      *(undefined8 *)((long)puVar7 + -8) = 0x57d5b1;
      sys_close(iVar1);
      uVar10 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
      piVar5 = *(int **)(lVar8 + 0x38);
    }
    *piVar5 = -1;
    plVar2 = *(long **)(lVar8 + 0x60);
    *(undefined8 *)((long)puVar7 + -8) = 0x57d5c4;
    outlet_bang(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2);
  }
  if ((int)uVar3 < 100) {
    return;
  }
LAB_0057d5e3:
  *(undefined8 *)((long)puVar7 + -8) = 0x57d5ef;
  freebytes(__buf);
  return;
}


