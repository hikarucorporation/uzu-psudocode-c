// Function : class_addmethodtolist
// Namespace: 
// Entry    : 00534b10
// Prototype: undefined class_addmethodtolist(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, long * param_10, uint param_11, undefined8 param_12, char * param_13, char * param_14, long param_15)
// Body     : 00534b10 - 00534d44


void class_addmethodtolist
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 *param_9,long *param_10,uint param_11,undefined8 param_12,char *param_13,
               char *param_14,long param_15)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  void *pvVar6;
  long lVar7;
  char cVar8;
  char *pcVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar13;
  undefined1 in_stack_ffffffffffffff38;
  size_t local_c0;
  char local_88 [79];
  undefined1 local_39;
  
  if ((0 < (int)param_11) && (param_13 != (char *)0x0)) {
    uVar10 = 0;
    pcVar5 = param_13;
    pcVar9 = param_14;
    do {
      if (*(char **)(*param_10 + uVar10 * 0x18) == param_13) {
        pd_snprintf(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_88,0x50,
                    "%s_aliased",*(undefined8 *)param_13,pcVar5,pcVar9,in_stack_ffffffffffffff38);
        local_39 = 0;
        if (local_88[0] == '\0') {
          local_c0 = 1;
          uVar3 = 0x1505;
        }
        else {
          uVar1 = 0x1505;
          lVar7 = 1;
          cVar8 = local_88[0];
          do {
            uVar1 = (int)cVar8 + uVar1 * 0x21;
            cVar8 = local_88[lVar7];
            lVar7 = lVar7 + 1;
          } while (cVar8 != '\0');
          uVar3 = (ulong)(uVar1 & 0x3fff);
          local_c0 = (size_t)(int)lVar7;
        }
        puVar11 = *(undefined8 **)(*(long *)(param_15 + 0x28) + uVar3 * 8);
        if (puVar11 == (undefined8 *)0x0) {
          puVar11 = (undefined8 *)(*(long *)(param_15 + 0x28) + uVar3 * 8);
        }
        else {
          do {
            puVar4 = puVar11;
            iVar2 = strcmp((char *)*puVar4,local_88);
            uVar12 = extraout_XMM0_Da;
            uVar13 = extraout_XMM0_Db;
            if (iVar2 == 0) goto LAB_00534ca9;
            puVar11 = (undefined8 *)puVar4[2];
          } while ((undefined8 *)puVar4[2] != (undefined8 *)0x0);
          puVar11 = puVar4 + 2;
        }
        puVar4 = getbytes(0x18);
        pcVar5 = getbytes(local_c0);
        puVar4[1] = 0;
        puVar4[2] = 0;
        strcpy(pcVar5,local_88);
        *puVar4 = pcVar5;
        *puVar11 = puVar4;
        uVar12 = extraout_XMM0_Da_00;
        uVar13 = extraout_XMM0_Db_00;
LAB_00534ca9:
        *(undefined8 **)(*param_10 + uVar10 * 0x18) = puVar4;
        if (*(undefined8 **)PTR_pd_objectmaker_00715510 == param_9) {
          pcVar5 = local_88;
          param_1 = logpost(CONCAT44(uVar13,uVar12),param_2,param_3,param_4,param_5,param_6,param_7,
                            param_8,0,4,"warning: class \'%s\' overwritten; old one renamed \'%s\'",
                            *(undefined8 *)param_13,local_88,pcVar9,in_stack_ffffffffffffff38);
        }
        else {
          pcVar5 = *(char **)*param_9;
          pcVar9 = local_88;
          param_1 = logpost(CONCAT44(uVar13,uVar12),param_2,param_3,param_4,param_5,param_6,param_7,
                            param_8,0,4,"warning: old method \'%s\' for class \'%s\' renamed \'%s\'"
                            ,*(undefined8 *)param_13,pcVar5,local_88,in_stack_ffffffffffffff38);
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != param_11);
  }
  uVar10 = (long)(int)param_11 * 0x18;
  pvVar6 = resizebytes(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       (void *)*param_10,uVar10,(long)(int)(param_11 + 1) * 0x18);
  *param_10 = (long)pvVar6;
  *(char **)((long)pvVar6 + uVar10) = param_13;
  *(undefined8 *)((long)pvVar6 + uVar10 + 8) = param_12;
  *(undefined4 *)((long)pvVar6 + uVar10 + 0x10) = *(undefined4 *)param_14;
  *(undefined2 *)((long)pvVar6 + uVar10 + 0x14) = *(undefined2 *)(param_14 + 4);
  return;
}


