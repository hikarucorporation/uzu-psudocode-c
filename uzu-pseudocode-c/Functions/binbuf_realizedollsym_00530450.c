// Function : binbuf_realizedollsym
// Namespace: 
// Entry    : 00530450
// Prototype: undefined8 * binbuf_realizedollsym(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, int param_10, long param_11, int param_12, char * param_13, undefined8 param_14)
// Body     : 00530450 - 005306ac


/* WARNING: Removing unreachable block (ram,0x00530665) */

undefined8 *
binbuf_realizedollsym
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          undefined8 *param_9,int param_10,long param_11,int param_12,char *param_13,
          undefined8 param_14)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  float *pfVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  size_t sVar11;
  char *pcVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined1 in_stack_fffffffffffff7c8;
  int local_820 [2];
  float local_818 [2];
  char *local_810;
  char local_808 [999];
  undefined1 local_421;
  ushort local_418 [249];
  undefined1 local_226;
  
  pcVar12 = (char *)*param_9;
  local_820[0] = 1;
  iVar2 = canvas_getdollarzero(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  local_818[0] = (float)iVar2;
  local_421 = 0;
  local_808[0] = '\0';
  pcVar3 = strchr(pcVar12,0x24);
  if ((pcVar3 == (char *)0x0) || (sVar11 = (long)pcVar3 - (long)pcVar12, 999 < (long)sVar11)) {
    return param_9;
  }
  strncpy(local_808,pcVar12,sVar11);
  local_808[sVar11] = '\0';
  do {
    pcVar3 = pcVar3 + 1;
    uVar4 = strtol(pcVar3,&local_810,10);
    local_418[0] = local_418[0] & 0xff00;
    if (local_810 == pcVar3) {
      local_418[0] = 0x24;
      uVar10 = 0;
      cVar1 = '$';
joined_r0x00530591:
      if (param_12 == 0) goto LAB_005305ef;
    }
    else {
      iVar2 = (int)uVar4;
      iVar9 = (int)local_810;
      if ((-1 < iVar2) && (iVar2 <= param_10)) {
        lVar7 = (ulong)(iVar2 - 1) * 0x10;
        piVar8 = (int *)(param_11 + lVar7);
        if (iVar2 == 0) {
          piVar8 = local_820;
        }
        if (*piVar8 == 2) {
          pfVar5 = (float *)(param_11 + 8 + lVar7);
          if (iVar2 == 0) {
            pfVar5 = local_818;
          }
          strncpy((char *)local_418,(char *)**(undefined8 **)pfVar5,499);
          local_226 = 0;
        }
        else {
          piVar8 = (int *)(param_11 + lVar7);
          if (iVar2 == 0) {
            piVar8 = local_820;
          }
          atom_string(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                      param_6,param_7,param_8,piVar8,(char *)local_418,(uint *)0x1f3,lVar7,param_13,
                      param_14,in_stack_fffffffffffff7c8);
        }
joined_r0x005305dc:
        uVar10 = iVar9 - (int)pcVar3;
        if (-1 < (int)uVar10) {
          cVar1 = (char)local_418[0];
          goto joined_r0x00530591;
        }
        goto LAB_0053068b;
      }
      if (param_12 != 0) {
        sprintf((char *)local_418,"$%d",uVar4 & 0xffffffff);
        goto joined_r0x005305dc;
      }
      cVar1 = '\0';
      uVar10 = 0;
LAB_005305ef:
      if ((uVar10 == 0) && (cVar1 == '\0')) {
        return (undefined8 *)0x0;
      }
    }
    sVar11 = strlen(local_808);
    strncat(local_808,(char *)local_418,999 - sVar11);
    pcVar12 = pcVar3 + uVar10;
    pcVar3 = strchr(pcVar12,0x24);
    if (pcVar3 == (char *)0x0) {
      sVar11 = strlen(local_808);
      strncat(local_808,pcVar12,999 - sVar11);
LAB_0053068b:
      puVar6 = gensym(local_808);
      return puVar6;
    }
    sVar11 = strlen(local_808);
    uVar4 = 999 - sVar11;
    if ((ulong)((long)pcVar3 - (long)pcVar12) <= 999 - sVar11) {
      uVar4 = (long)pcVar3 - (long)pcVar12;
    }
    strncat(local_808,pcVar12,uVar4);
  } while( true );
}


