// Function : sys_load_lib
// Namespace: 
// Entry    : 00541a30
// Prototype: int sys_load_lib(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00541a30 - 00541bc4


int sys_load_lib(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,undefined *param_10,undefined8 param_11,undefined8 param_12,
                char *param_13,undefined8 param_14)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined7 extraout_var;
  char *pcVar6;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar9;
  size_t __n;
  undefined **ppuVar10;
  long *plVar11;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 uVar12;
  long local_430;
  long *local_428;
  int local_420;
  char local_418 [1008];
  
  uVar2 = canvas_suspend_dsp(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  local_420 = 0;
  local_430 = param_9;
  puVar5 = gensym(param_10);
  for (puVar8 = sys_loaded; puVar8 != (undefined8 *)0x0; puVar8 = (undefined8 *)*puVar8) {
    if ((undefined8 *)puVar8[1] == puVar5) {
      return 1;
    }
  }
  bVar1 = sys_isabsolutepath(param_10);
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    local_428 = (long *)param_10;
    bVar1 = sys_isabsolutepath(param_10);
    iVar4 = (int)CONCAT71(extraout_var_01,bVar1);
    uVar9 = extraout_XMM0_Qa_01;
    plVar11 = (long *)PTR_sys_loadlib_iter_00715c28;
joined_r0x00541b23:
    PTR_sys_loadlib_iter_00715c28 = (undefined *)plVar11;
    if ((iVar4 != 0) ||
       (canvas_path_iterate(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                            (undefined *)plVar11,(undefined *)&local_430,puVar8,param_13,param_14),
       local_420 == 0)) {
      ppuVar10 = &loaders;
      do {
        plVar11 = local_428;
        iVar4 = (*(code *)*ppuVar10)(local_430,local_428,0);
        if (iVar4 != 0) {
          local_420 = iVar4;
          goto LAB_00541b7e;
        }
        ppuVar10 = (undefined **)ppuVar10[1];
      } while (ppuVar10 != (undefined **)0x0);
      local_420 = 0;
      uVar9 = extraout_RDX;
      uVar12 = extraout_XMM0_Qa_02;
      goto LAB_00541ba9;
    }
  }
  else {
    pcVar6 = strrchr(param_10,0x2f);
    if (pcVar6 == (char *)0x0) {
      return 0;
    }
    uVar3 = (int)pcVar6 - (int)param_10;
    puVar8 = (undefined8 *)0x3e7;
    if ((int)uVar3 < 999) {
      puVar8 = (undefined8 *)(ulong)uVar3;
    }
    __n = (size_t)(int)puVar8;
    strncpy(local_418,param_10,__n);
    local_418[__n] = '\0';
    local_428 = (long *)(param_10 + __n + 1);
    plVar11 = &local_430;
    sys_loadlib_iter(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     local_418,plVar11);
    local_428 = (long *)param_10;
    if (local_420 == 0) {
      bVar1 = sys_isabsolutepath(param_10);
      iVar4 = (int)CONCAT71(extraout_var_00,bVar1);
      uVar9 = extraout_XMM0_Qa_00;
      plVar11 = (long *)PTR_sys_loadlib_iter_00715c28;
      goto joined_r0x00541b23;
    }
  }
LAB_00541b7e:
  puVar5 = getbytes(0x10);
  puVar7 = gensym(param_10);
  puVar5[1] = puVar7;
  *puVar5 = sys_loaded;
  uVar9 = extraout_RDX_00;
  uVar12 = extraout_XMM0_Qa_03;
  sys_loaded = puVar5;
LAB_00541ba9:
  canvas_resume_dsp(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(ulong)uVar2,
                    plVar11,uVar9,puVar8,param_13,param_14);
  return local_420;
}


