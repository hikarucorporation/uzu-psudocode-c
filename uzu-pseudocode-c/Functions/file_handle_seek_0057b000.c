// Function : file_handle_seek
// Namespace: 
// Entry    : 0057b000
// Prototype: undefined file_handle_seek(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, int * param_12, uint * param_13, uint * param_14)
// Body     : 0057b000 - 0057b1d9


void file_handle_seek(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
                     undefined8 param_10,undefined8 param_11,int *param_12,uint *param_13,
                     uint *param_14)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  __off_t _Var4;
  undefined8 *puVar5;
  int *piVar6;
  int iVar7;
  undefined8 extraout_RDX;
  char *pcVar8;
  int __whence;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  float fVar9;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined8 uVar10;
  int local_28 [2];
  float local_20;
  
  __whence = 0;
  iVar7 = (int)param_11;
  piVar6 = param_12;
  if (iVar7 != 2) {
    if (iVar7 != 1) {
      if (iVar7 == 0) {
        __whence = 1;
        _Var4 = 0;
        lVar2 = *(long *)(param_9 + 0x40);
      }
      else {
        _Var4 = 0;
        lVar2 = *(long *)(param_9 + 0x40);
      }
      goto joined_r0x0057b177;
    }
    goto LAB_0057b15c;
  }
  if (param_12[4] == 2) {
    puVar5 = (undefined8 *)atom_getsymbol(param_12 + 4);
    param_1 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
    uVar1 = (int)*(char *)*puVar5 - 0x43;
    piVar6 = (int *)(ulong)uVar1;
    param_11 = extraout_RDX;
    if (uVar1 < 0x31) {
      param_11 = 0x800100008001;
      if ((0x800100008001U >> ((ulong)piVar6 & 0x3f) & 1) != 0) {
        __whence = 1;
        goto LAB_0057b15c;
      }
      param_11 = 0x400000004;
      if ((0x400000004U >> ((ulong)piVar6 & 0x3f) & 1) == 0) {
        param_11 = 0x1000000010000;
        if ((0x1000000010000U >> ((ulong)piVar6 & 0x3f) & 1) == 0) goto LAB_0057b09f;
        goto LAB_0057b15c;
      }
      __whence = 2;
      iVar7 = *param_12;
    }
    else {
LAB_0057b09f:
      if (*(char *)*puVar5 != 0) {
        pcVar8 = "seek mode must be \'set\', \'end\' or \'current\' (resp. \'relative\')";
        goto LAB_0057b1c7;
      }
LAB_0057b15c:
      iVar7 = *param_12;
    }
    if (iVar7 == 1) {
      fVar9 = (float)atom_getfloat(param_12);
      param_1 = CONCAT44(extraout_XMM0_Db_02,fVar9);
      _Var4 = (__off_t)(int)fVar9;
      lVar2 = *(long *)(param_9 + 0x40);
      param_12 = piVar6;
joined_r0x0057b177:
      if (lVar2 == 0) {
        iVar7 = **(int **)(param_9 + 0x38);
      }
      else {
        plVar3 = pd_findbyclass(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                lVar2,*(long *)PTR_file_define_class_00715550);
        param_1 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
        if (plVar3 == (long *)0x0) {
          pd_error(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,param_9,"file handle: couldn\'t find file-define \'%s\'"
                   ,**(undefined8 **)(param_9 + 0x40),param_12,(char *)param_13,param_14);
          return;
        }
        *(long **)(param_9 + 0x38) = plVar3 + 6;
        iVar7 = (int)plVar3[6];
      }
      if (iVar7 < 0) {
        uVar10 = pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                          "\'%s\' without prior \'open\'",&DAT_0065ba41,param_12,(char *)param_13,
                          param_14);
        outlet_bang(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    *(long **)(param_9 + 0x60));
        return;
      }
      _Var4 = lseek(iVar7,_Var4,__whence);
      local_20 = (float)_Var4;
      local_28[0] = 1;
      plVar3 = *(long **)(param_9 + 0x60);
      puVar5 = gensym("seek");
      outlet_anything(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,plVar3,puVar5,1,local_28,param_13,param_14);
      return;
    }
  }
  pcVar8 = "usage: seek [<int:offset> [<symbol:mode>]]";
LAB_0057b1c7:
  pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,pcVar8,param_11,
           piVar6,(char *)param_13,param_14);
  return;
}


