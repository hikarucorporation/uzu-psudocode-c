// Function : canvas_path_iterate
// Namespace: 
// Entry    : 005011f0
// Prototype: int canvas_path_iterate(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined * param_10, undefined * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005011f0 - 005014a4


int canvas_path_iterate(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9,undefined *param_10,undefined *param_11,undefined8 param_12,
                       char *param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  char *__src;
  char *__src_00;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  undefined7 extraout_var;
  size_t sVar5;
  long *plVar6;
  long *plVar7;
  undefined *extraout_RDX;
  undefined *extraout_RDX_00;
  int iVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 extraout_XMM0_Qa;
  undefined1 in_stack_fffffffffffffbc8;
  char local_418 [997];
  undefined1 local_33;
  undefined1 local_31;
  
  if (param_10 == (undefined *)0x0) {
    return 0;
  }
  puVar4 = &DAT_005db3b5;
  iVar8 = 0;
  if (param_9 != 0) {
    puVar4 = param_11;
    puVar9 = param_10;
    lVar10 = param_9;
    do {
      puVar1 = *(undefined8 **)(lVar10 + 0xe0);
      if ((puVar1 != (undefined8 *)0x0) && (plVar7 = (long *)puVar1[4], plVar7 != (long *)0x0)) {
        __src = *(char **)*puVar1;
        do {
          bVar2 = sys_isabsolutepath((char *)plVar7[1]);
          if ((int)CONCAT71(extraout_var,bVar2) == 0) {
            strncpy(local_418,__src,1000);
            local_33 = 0;
            sVar5 = strlen(local_418);
            (local_418 + sVar5)[0] = '/';
            (local_418 + sVar5)[1] = '\0';
          }
          else {
            local_418[0] = '\0';
          }
          __src_00 = (char *)plVar7[1];
          sVar5 = strlen(local_418);
          strncat(local_418,__src_00,1000 - sVar5);
          local_31 = 0;
          puVar9 = param_11;
          iVar3 = (*(code *)param_10)(local_418);
          if (iVar3 == 0) goto LAB_00501451;
          plVar7 = (long *)*plVar7;
          iVar8 = iVar8 + 1;
          puVar4 = extraout_RDX;
          param_1 = extraout_XMM0_Qa;
        } while (plVar7 != (long *)0x0);
      }
      lVar10 = *(long *)(lVar10 + 0x48);
    } while (lVar10 != 0);
    if (param_9 == 0) {
      puVar4 = &DAT_005db3b5;
    }
    else {
      puVar1 = *(undefined8 **)(param_9 + 0xe0);
      while (puVar1 == (undefined8 *)0x0) {
        param_9 = *(long *)(param_9 + 0x48);
        if (param_9 == 0) {
          param_1 = bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        "t_canvasenvironment",puVar9,puVar4,param_12,param_13,param_14,
                        in_stack_fffffffffffffbc8);
          puVar4 = extraout_RDX_00;
        }
        puVar1 = *(undefined8 **)(param_9 + 0xe0);
      }
      puVar4 = *(undefined **)*puVar1;
    }
  }
  iVar3 = (*(code *)param_10)(puVar4,param_11);
  if (iVar3 != 0) {
    plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
    plVar7 = *(long **)(*(long *)(*plVar6 + 0x50) + 8);
    if (plVar7 == (long *)0x0) {
      puVar1 = *(undefined8 **)(*(long *)(*plVar6 + 0x50) + 0x20);
      goto joined_r0x005013af;
    }
    iVar3 = (*(code *)param_10)(plVar7[1],param_11);
    while( true ) {
      if (iVar3 == 0) {
        return iVar8 + 2;
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) break;
      iVar3 = (*(code *)param_10)(plVar7[1],param_11);
      iVar8 = iVar8 + 1;
    }
    plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
    iVar8 = iVar8 + 2;
    puVar1 = *(undefined8 **)(*(long *)(*plVar7 + 0x50) + 0x20);
    while( true ) {
      if (puVar1 == (undefined8 *)0x0) {
        if (*(int *)PTR_sys_usestdpath_00715ef8 != 0) {
          plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
          plVar7 = *(long **)(*(long *)(*plVar7 + 0x50) + 0x10);
          if (plVar7 != (long *)0x0) {
            do {
              iVar8 = iVar8 + 1;
              iVar3 = (*(code *)param_10)(plVar7[1],param_11);
              if (iVar3 == 0) {
                return iVar8;
              }
              plVar7 = (long *)*plVar7;
            } while (plVar7 != (long *)0x0);
          }
        }
        return iVar8;
      }
      iVar3 = (*(code *)param_10)(puVar1[1],param_11);
      if (iVar3 == 0) break;
      puVar1 = (undefined8 *)*puVar1;
joined_r0x005013af:
      iVar8 = iVar8 + 1;
    }
  }
LAB_00501451:
  return iVar8 + 1;
}


