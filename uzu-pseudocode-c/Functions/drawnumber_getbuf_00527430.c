// Function : drawnumber_getbuf
// Namespace: 
// Entry    : 00527430
// Prototype: undefined drawnumber_getbuf(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, long param_11, char * param_12, char * param_13, undefined8 param_14)
// Body     : 00527430 - 005275d9


void drawnumber_getbuf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9,long param_10,long param_11,char *param_12,char *param_13,
                      undefined8 param_14)

{
  size_t sVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar8;
  undefined8 auStack_448 [128];
  undefined1 uVar9;
  undefined4 in_stack_ffffffffffffffb8;
  undefined4 uStack_44;
  int local_34;
  
  if (param_11 == 0) {
    bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"template_find_field",
        param_10,0,param_12,param_13,param_14,(char)in_stack_ffffffffffffffb8);
  }
  else if (0 < (int)*(uint *)(param_11 + 0x18)) {
    plVar2 = (long *)(*(long *)(param_11 + 0x20) + 8);
    lVar4 = 0;
    do {
      if (*plVar2 == *(long *)(param_9 + 0x30)) {
        iVar5 = -1;
        if ((int)plVar2[-1] != 3) {
          iVar5 = (int)plVar2[-1];
        }
        if (-1 < iVar5) {
          strncpy(param_12,(char *)**(undefined8 **)(param_9 + 0xd8),0x400);
          param_12[0x3ff] = '\0';
          sVar1 = strlen(param_12);
          iVar3 = (int)lVar4;
          iVar6 = (int)sVar1;
          if (iVar5 == 2) {
            binbuf_gettext(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                           param_5,param_6,param_7,param_8,*(int **)(param_10 + iVar3),
                           auStack_448 + 0x80,&local_34,plVar2,param_13,param_14);
            iVar5 = 0x3ff - iVar6;
            if (local_34 <= 0x3ff - iVar6) {
              iVar5 = local_34;
            }
            memcpy(param_12 + iVar6,(void *)CONCAT44(uStack_44,in_stack_ffffffffffffffb8),
                   (long)iVar5);
            param_12[iVar5 + iVar6] = '\0';
            if (iVar5 + iVar6 == 0x3ff) {
              builtin_strncpy(param_12 + 0x3fc,"...",4);
            }
            freebytes((void *)CONCAT44(uStack_44,in_stack_ffffffffffffffb8));
            return;
          }
          if (iVar5 == 0) {
            uVar9 = 1;
            uVar7 = *(undefined4 *)(param_10 + iVar3);
            uVar8 = 0;
          }
          else {
            if (iVar5 == 1) {
              strncpy(param_12 + iVar6,(char *)**(undefined8 **)(param_10 + iVar3),
                      (long)(0x40000000000 - (sVar1 << 0x20)) >> 0x20);
              return;
            }
            uVar9 = 2;
            uVar7 = extraout_XMM0_Da;
            uVar8 = extraout_XMM0_Db;
          }
          atom_string(CONCAT44(uVar8,uVar7),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      (int *)(auStack_448 + 0x80),param_12 + iVar6,(uint *)(ulong)(0x400 - iVar6),
                      plVar2,param_13,param_14,uVar9);
          return;
        }
        break;
      }
      plVar2 = plVar2 + 3;
      lVar4 = lVar4 + 8;
    } while ((ulong)*(uint *)(param_11 + 0x18) * 8 != lVar4);
  }
  *param_12 = '\0';
  return;
}


