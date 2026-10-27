// Function : file_which_list
// Namespace: 
// Entry    : 0057b390
// Prototype: undefined file_which_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, int param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 0057b390 - 0057b5fd


void file_which_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,undefined8 *param_10,int param_11,int *param_12,char *param_13,
                    undefined8 param_14)

{
  long *plVar1;
  int __fd;
  uint uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  uint uVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  char **ppcVar9;
  undefined8 uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  float fVar11;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar12;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  char *local_830;
  undefined4 local_828 [2];
  undefined8 *local_820;
  undefined4 local_818;
  undefined4 local_810;
  char local_808 [999];
  undefined1 local_421;
  char local_418 [1008];
  
  if (param_10 == (undefined8 *)0x0) {
    pcVar6 = "";
  }
  else {
    pcVar6 = (char *)*param_10;
  }
  if (param_11 == 2) {
    if ((*param_12 == 2) && (param_12[4] == 1)) {
      puVar3 = (undefined8 *)atom_getsymbol(param_12);
      fVar11 = (float)atom_getfloat(param_12 + 4);
      param_1 = CONCAT44(extraout_XMM0_Db_02,fVar11);
      if (puVar3 != (undefined8 *)0x0) {
        uVar2 = (uint)fVar11;
        lVar7 = *(long *)(param_9 + 0x50);
        if (0 < (int)uVar2) {
          if (uVar2 != 1) {
            uVar5 = 0;
            do {
              for (; *(long *)(lVar7 + 0xe0) == 0; lVar7 = *(long *)(lVar7 + 0x48)) {
              }
              lVar8 = *(long *)(lVar7 + 0x48);
              if (*(long *)(lVar7 + 0x48) == 0) {
                lVar8 = lVar7;
              }
              lVar7 = *(long *)(lVar8 + 0xe0);
              while (lVar7 == 0) {
                lVar8 = *(long *)(lVar8 + 0x48);
                lVar7 = *(long *)(lVar8 + 0xe0);
              }
              lVar7 = *(long *)(lVar8 + 0x48);
              if (*(long *)(lVar8 + 0x48) == 0) {
                lVar7 = lVar8;
              }
              uVar5 = uVar5 + 2;
            } while (uVar5 != (uVar2 & 0xfffffffe));
          }
          if ((uVar2 & 1) != 0) {
            lVar8 = *(long *)(lVar7 + 0xe0);
            while (lVar8 == 0) {
              lVar7 = *(long *)(lVar7 + 0x48);
              lVar8 = *(long *)(lVar7 + 0xe0);
            }
            if (*(long *)(lVar7 + 0x48) != 0) {
              lVar7 = *(long *)(lVar7 + 0x48);
            }
          }
        }
        goto LAB_0057b3e2;
      }
    }
  }
  else if ((param_11 == 1) && (*param_12 == 2)) {
    puVar3 = (undefined8 *)atom_getsymbol(param_12);
    param_1 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
    if (puVar3 != (undefined8 *)0x0) {
      lVar7 = *(long *)(param_9 + 0x50);
LAB_0057b3e2:
      do_expandpath((char *)*puVar3,local_808,1000);
      local_421 = 0;
      uVar12 = sys_unbashfilename(local_808,local_808);
      local_421 = 0;
      ppcVar9 = &local_830;
      uVar10 = 1000;
      __fd = canvas_open(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar7,
                         local_808,"",local_418,ppcVar9,1000,1);
      if (__fd < 0) {
        outlet_symbol(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,*(long **)(param_9 + 0x60));
      }
      else {
        sys_close(__fd);
        if (local_418 < local_830) {
          local_830[-1] = '/';
        }
        local_828[0] = 2;
        local_820 = gensym(local_418);
        local_818 = 1;
        local_810 = 0;
        plVar1 = *(long **)(param_9 + 0x58);
        puVar3 = gensym("list");
        outlet_list(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8,plVar1,puVar3,2,local_828,(char *)ppcVar9,uVar10
                   );
      }
      return;
    }
  }
  puVar4 = &DAT_005e3c3c;
  if (*pcVar6 == '\0') {
    puVar4 = &DAT_005e2ee7;
  }
  pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
           "bad arguments for %s%smessage to object \'file which\'",pcVar6,puVar4,param_13,param_14)
  ;
  return;
}


